//
//  tea_maker_test.cpp
//  cpp-posts
//
//  Created by Sam Tsai on 2016/7/29.
//
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "tea_maker.h"

TEST_CASE("TeaMaker Essentials", "[Build]")
{
	CAPTURE(TeaMaker(kBlackTea, .5, .3).Make());
	REQUIRE(TeaMaker(kBlackTea, .5, .3).Make() == "Black Tea | Half Sugar | Less Ice");
}

