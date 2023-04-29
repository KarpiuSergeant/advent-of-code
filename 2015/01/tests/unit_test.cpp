#include "gtest/gtest.h"
#include "dec-01.h"

TEST(SantaSuite, basic_test_1)
{
    const char tab[] = "";
    EXPECT_EQ(santa_level(tab), 0) << "expected 0";
}

TEST(SantaSuite, basic_test_2)
{
    const char tab[] = "(";
    EXPECT_EQ(santa_level(tab), 1) << "expected 1";
}

TEST(SantaSuite, basic_test_3)
{
    const char tab[] = ")";
    EXPECT_EQ(santa_level(tab), -1) << "expected -1";
}

TEST(SantaSuite, basic_test_4)
{
    const char tab[] = "(())";
    EXPECT_EQ(santa_level(tab), 0) << "expected -1";
}

TEST(SantaSuite, basic_test_5)
{
    const char tab[] = "()()";
    EXPECT_EQ(santa_level(tab), 0) << "expected 0";
}

TEST(SantaSuite, basic_test_6)
{
    const char tab[] = "(((";
    EXPECT_EQ(santa_level(tab), 3) << "expected 3";
}

TEST(SantaSuite, basic_test_7)
{
    const char tab[] = "(()(()(";
    EXPECT_EQ(santa_level(tab), 3) << "expected 3";
}

TEST(SantaSuite, basic_test_8)
{
    const char tab[] = "))(((((";
    EXPECT_EQ(santa_level(tab), 3) << "expected 3";
}

TEST(SantaSuite, basic_test_9)
{
    const char tab[] = "())";
    EXPECT_EQ(santa_level(tab), -1) << "expected -1";
}

TEST(SantaSuite, basic_test_10)
{
    const char tab[] = "))(";
    EXPECT_EQ(santa_level(tab), -1) << "expected -1";
}

TEST(SantaSuite, basic_test_11)
{
    const char tab[] = ")))";
    EXPECT_EQ(santa_level(tab), -3) << "expected -3";
}

TEST(SantaSuite, basic_test_12)
{
    const char tab[] = ")())())";
    EXPECT_EQ(santa_level(tab), -3) << "expected -3";
}

