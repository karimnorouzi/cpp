
#include <iostream>
template<typename T>
T machine_epsilon()
{
   T epsilon= 1;
   while( epsilon + T(1) != T(1))
	   epsilon /= T(2);
   return epsilon;
}

int main()
{
	std::cout << "Epsilon for float " << machine_epsilon<float>() << std::endl;
	std::cout << "Epsilon for double " << machine_epsilon<double>() << std::endl;
       return 0;	


}


