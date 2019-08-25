# xjen by (c) Matthew James Briggs
add_subdirectory(extern)
set(DEBUG_INFO "xjen/src/lib/CMakeLists.txt")

set(XJENCORE_SRC "${CMAKE_CURRENT_SOURCE_DIR}/private")
set(XJENCORE_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(xjencore "${XJENCORE_SRC}/Hello.cpp")
target_include_directories(xjencore PUBLIC "${XJENCORE_INCLUDE}")
target_include_directories(xjencore PRIVATE "${XJENCORE_SRC}")

if (${XJEN_ENABLE_TESTS})
    set(XJENCORE_SRC ${XJENCORE_SRC} PARENT_SCOPE)
    set(XJENCORE_INCLUDE ${XJENCORE_INCLUDE} PARENT_SCOPE)
endif()