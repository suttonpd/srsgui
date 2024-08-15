#!/bin/bash

# Define the paths
CMAKE_FILE="CMakeLists.txt"
SOURCE_DIR="test/cxx"

# Function to update source files to handle deprecated headers
update_source_files() {
    echo "Updating source files in $SOURCE_DIR to handle deprecated Boost headers..."

    for SOURCE_FILE in "$SOURCE_DIR"/*.cpp; do
        echo "Processing $SOURCE_FILE..."

        # Add macro definition to the top of each source file
        if ! grep -q "BOOST_TIMER_ENABLE_DEPRECATED" "$SOURCE_FILE"; then
            echo "#define BOOST_TIMER_ENABLE_DEPRECATED" | cat - "$SOURCE_FILE" > temp && mv temp "$SOURCE_FILE"
            echo "Added BOOST_TIMER_ENABLE_DEPRECATED macro definition to $SOURCE_FILE."
        else
            echo "BOOST_TIMER_ENABLE_DEPRECATED macro definition already exists in $SOURCE_FILE."
        fi

        # Replace deprecated includes with modern equivalents
        sed -i 's|#include <boost/progress.hpp>|#include <boost/timer/timer.hpp>\n#include <boost/timer/progress_display.hpp>|' "$SOURCE_FILE"
        sed -i 's|#include <boost/timer.hpp>|#include <boost/timer/timer.hpp>|' "$SOURCE_FILE"

        echo "Updated includes in $SOURCE_FILE."
    done
}

# Function to update CMakeLists.txt to include the necessary macro definition
update_cmake_file() {
    echo "Updating $CMAKE_FILE to define BOOST_TIMER_ENABLE_DEPRECATED macro..."

    # Add the macro definition if it doesn't already exist
    if ! grep -q "BOOST_TIMER_ENABLE_DEPRECATED" "$CMAKE_FILE"; then
        echo "add_definitions(-DBOOST_TIMER_ENABLE_DEPRECATED)" >> "$CMAKE_FILE"
        echo "Added BOOST_TIMER_ENABLE_DEPRECATED definition to $CMAKE_FILE."
    else
        echo "BOOST_TIMER_ENABLE_DEPRECATED definition already exists in $CMAKE_FILE."
    fi
}

# Function to disable the test target in CMakeLists.txt
disable_test_target() {
    echo "Disabling the test target in $CMAKE_FILE..."

    # Comment out or remove the test target in CMakeLists.txt
    sed -i '/add_executable(waterfallplot_test/d' "$CMAKE_FILE"
    sed -i '/add_test(NAME waterfallplot_test COMMAND waterfallplot_test/d' "$CMAKE_FILE"
    sed -i '/add_executable(complexplot_test/d' "$CMAKE_FILE"
    sed -i '/add_test(NAME complexplot_test COMMAND complexplot_test/d' "$CMAKE_FILE"

    echo "Disabled the test targets in $CMAKE_FILE."
}

# Prompt the user for their preference
echo "Would you like to:"
echo "1) Update the source files and CMakeLists.txt to handle deprecated headers"
echo "2) Skip building the test targets"
echo "3) Do both"
read -p "Enter your choice (1/2/3): " choice

case $choice in
    1)
        update_source_files
        update_cmake_file
        ;;
    2)
        disable_test_target
        ;;
    3)
        update_source_files
        update_cmake_file
        disable_test_target
        ;;
    *)
        echo "Invalid choice. Exiting."
        exit 1
        ;;
esac

echo "Done. You can now run 'cmake ..' and 'make' to build your project."
