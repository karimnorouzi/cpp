#include <cmath>
#include <iostream>
#include <sstream>

void xor_crypt(std::string& input, char key)
{
    for(auto& ch: input)
        ch = ch^ key;
    
    
}

int main()
{
    std::string msg("This is a very secret message");
    std::cout << msg << std::endl;
    xor_crypt(msg, 54);
    std::cout << msg << std::endl;
    xor_crypt(msg, 54);
    std::cout << msg << std::endl;
    return 0;
    
}
