#include<iostream>
#include<cmath>
int main()
{
	constexpr int i = std::pow(2, 31);
        constexpr int j = std::pow(2, 31) + 1;

	static_assert( i != j);
	return 0;	

}


