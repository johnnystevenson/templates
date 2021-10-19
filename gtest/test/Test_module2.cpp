#include "module2.hpp"
#include <gtest/gtest.h>

class TestModule2 : public ::testing::Test {
 public:
   void SetUp()
   {}

 protected:
   Module2 uut;
};

TEST_F( TestModule2, Test1 )
{
   std::string msg;
   uut.getStr( msg );
   EXPECT_EQ( "World", msg );
}
