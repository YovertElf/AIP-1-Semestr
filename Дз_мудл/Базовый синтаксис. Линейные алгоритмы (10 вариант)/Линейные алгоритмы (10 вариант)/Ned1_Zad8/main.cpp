#include <iostream>                             //Задание 8 Вычислите значение выражения: при x=-2.34
#include <cmath>
using namespace std;
int main()
{
    float x;
    std::cout<<"Enter x"<< endl;
    std::cin>>x;
    float y=((abs(x-5)-(sin(x)))/3) + sqrt((x*x)+2014)*(cos(2*x))-3;
    std::cout<<y<< endl;

    return 0;
}
