# xjen by (c) Matthew James Briggs
cmake_minimum_required(VERSION 3.0)
project(xjen VERSION 0.0.1)
set(DEBUG_INFO "xjen/src/CMakeLists.txt")


option(XJEN_ENABLE_TESTS "Enable tests" OFF)

add_subdirectory(lib)
add_subdirectory(cmd)

if (${XJEN_ENABLE_TESTS})
    message(STATUS "${DEBUG_INFO} Line:${CMAKE_CURRENT_LIST_LINE} XJENCORE_SRC     = ${XJENCORE_SRC}")
    message(STATUS "${DEBUG_INFO} Line:${CMAKE_CURRENT_LIST_LINE} XJENCORE_INCLUDE = ${XJENCORE_INCLUDE}")
    enable_testing()
    file(GLOB_RECURSE XCOREJEN_TEST_SOURCES "${PROJECT_SOURCE_DIR}/test" *.cpp)
    add_executable(xjencore_test ${XCOREJEN_TEST_SOURCES})
    target_link_libraries(xjencore_test xjencore)
    target_include_directories(xjencore_test ${XJENCORE_SRC})
    add_test(NAME xjencore_test
             COMMAND xjencore_test)
endif()
