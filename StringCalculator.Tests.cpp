#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,GivenEmptyStringZeroIsExpected){
    //Arrange
    StringCalculator objUnderTest;
    string input="";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,GivenZeroIsExpected)
{
    //Arrange
    StringCalculator objUnderTest;
    string input="0";
    int expectedValue=0;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorTestSuite,GivenOneIsExpected)
{
    //Arrange
    StringCalculator objUnderTest;
    string input="1";
    int expectedValue=1;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,Given2Numbers)
{
    //Arrange
    StringCalculator objUnderTest;
    string input="1,2";
    int expectedValue=3;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,when_passed_multiple_comma_delimited_numbers)
{
    //Arrange
    StringCalculator objUnderTest;
    string input="1,2,3";
    int expectedValue=6;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,when_delimited_with_newline_and_comma)
{
    //Arrange
    StringCalculator objUnderTest;
    string input="1\n2,3";
    int expectedValue=6;
    //Act
   int actualValue=  objUnderTest.Add(input);
    //Assert
    ASSERT_EQ(actualValue,expectedValue);
}

