// Copyright 2021 GHA Test Team
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(TrainTest, test1) {
    Train* train = new Train;
    train->CreateCages(45);
    EXPECT_EQ(45, train->CountLength());
}


TEST(TrainTest, test2) {
    Train* train = new Train;
    train->CreateCages(7);
    EXPECT_EQ(7, train->CountLength());
}


TEST(TrainTest, test3) {
    Train* train = new Train;
    train->CreateCages(9);
    EXPECT_EQ(9, train->CountLength());
}


