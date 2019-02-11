//
// Created by Devlin Glasman on 2019-02-11.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "FizzBuzzTests.h"

using testing::Eq;

TEST(FizzBuzzTests, canCallFizzBuzz){
    FizzBuzzTests myFizz;

    ASSERT_EQ(1, myFizz.compute(1));
}
