#include "/Users/becca/Desktop/gtest/googletest-read-only/xcode/Build/Debug/gtest.framework/Headers/gtest.h"
#include "functions.h"

TEST (Pay, Total_owed)
{
    // equal hours worked to proper pay
    EXPECT_EQ(total_owed(5,5), 0);
    EXPECT_EQ(total_owed(5,6), 12);
    //add tests for different time brackets
    EXPECT_EQ(total_owed(6,11), 52);
    EXPECT_EQ(total_owed(6,2), 92);
    EXPECT_EQ(total_owed(5,4), 136);

}

int main(int argc, char * argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
