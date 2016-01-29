#include "/Users/becca/Desktop/gtest/googletest-read-only/xcode/Build/Debug/gtest.framework/Headers/gtest.h"
#include "functions.h"

TEST (Pay, Total_owed)
{
    // equal hours worked to proper pay
    EXPECT_EQ(total_owed(5,5,9), 0);
    EXPECT_EQ(total_owed(5,6,9), 12);
    
    //add tests for different endtime brackets
    EXPECT_EQ(total_owed(6,11,9), 52);
    EXPECT_EQ(total_owed(6,2,9), 92);
    EXPECT_EQ(total_owed(5,4,9), 136);
    //add tests for different start and end brackets
    EXPECT_EQ(total_owed(9,11,9), 16);
    EXPECT_EQ(total_owed(12,3,9), 48);
    EXPECT_EQ(total_owed(10,4,9), 80);

    EXPECT_EQ(total_owed(10,10,9), 0);
    EXPECT_EQ(total_owed(2,2,9), 0);
    //test different bedtimes
    EXPECT_EQ(total_owed(6,11,10), 56);
    EXPECT_EQ(total_owed(6,2,8), 88);
    EXPECT_EQ(total_owed(10,4,11), 84);
}

int main(int argc, char * argv[])
{
