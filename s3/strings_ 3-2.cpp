#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cin >> input;

    if (input == "secretkey")
    {
        std::cout << "success" << std::endl;
    }
    else
    {
        std::cout << "fail" << std::endl;
    }
    return 0;
}
