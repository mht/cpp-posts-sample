//
//  tea_maker.hpp
//  cpp-posts
//
//  Created by Sam Tsai on 2016/7/29.
//
//

#ifndef tea_maker_hpp
#define tea_maker_hpp

#include <string>

enum Tea : int {
	kGreenTea,
	kBlackTea,
};

typedef float Sugar;
typedef float Ice;

class TeaMaker
{
public:
	TeaMaker(Tea, Sugar, Ice) {}
	
	std::string Make() { return {}; }
};

#endif /* tea_maker_hpp */
