# Assumes libgtest-dev is installed
# installGTest.sh is included to set up GTest on a new system
find_package(GTest REQUIRED)

add_subdirectory(source)
add_subdirectory(test)

include_directories(source)

add_executable(TODO main.cpp)
target_link_libraries(TODO source)