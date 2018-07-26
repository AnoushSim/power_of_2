#include <iostream>

bool ispower_of2 (int );

int main()
{
    int number;
    std::cout << "Enter the number and I'll check whether it is power of 2\n";
    std::cin >> number;
    if (ispower_of2 (number))
       std::cout << "Yes!";
    else 
       std::cout << "No!";
    return 0;
}

bool ispower_of2 (int number)
{
    return number && ((number & (number - 1))== 0) ;
}
