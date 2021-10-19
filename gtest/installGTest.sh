# Installs and builds GTest. cmake package name: GTest
apt-get install libgtest-dev
cd /usr/src/gtest
cmake CMakeLists.txt
make
cp lib/*.a /usr/lib
