#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
	constexpr double pi = std::atan(1.0)*4;
	std::cout <<std::setprecision(16) <<  pi << std::endl;

	return 0;
}
