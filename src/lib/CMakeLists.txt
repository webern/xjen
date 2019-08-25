# xjen by (c) Matthew James Briggs
add_subdirectory(extern)
set(DEBUG_INFO "xjen/src/lib/CMakeLists.txt")

set(XJENCORE_SRC "${CMAKE_CURRENT_SOURCE_DIR}/private")
set(XJENCORE_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(xgencore "${XJENCORE_SRC}/Hello.cpp")
target_include_directories(xgencore PUBLIC "${XJENCORE_INCLUDE}")
target_include_directories(xgencore PRIVATE "${XJENCORE_SRC}")

if (${XJEN_ENABLE_TESTS})
    enable_testing()
    include(CTest)
    set(XJENCORE_SRC ${XJENCORE_SRC} PARENT_SCOPE)
    set(XJENCORE_INCLUDE ${XJENCORE_INCLUDE} PARENT_SCOPE)
    message(STATUS "${DEBUG_INFO} Line:${CMAKE_CURRENT_LIST_LINE} XJENCORE_SRC     = ${XJENCORE_SRC}")
    message(STATUS "${DEBUG_INFO} Line:${CMAKE_CURRENT_LIST_LINE} XJENCORE_INCLUDE = ${XJENCORE_INCLUDE}")
endif()