#include <iostream>

template<typename T>
T factorial(T n)
{
	T f = T(1);
	while(n)
		f *= n--;

	return f;
}

int main()
{
  std::cout << factorial<unsigned int>(50) << " " << factorial<unsigned long>(50) <<" " << factorial<unsigned long long > (50) << std::endl;
  return 0;

}


