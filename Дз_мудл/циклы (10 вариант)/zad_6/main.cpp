#include <iostream>                                              //Задание 6. Вычислить степень введенного числа (с помощью циклов).
#include <cmath>

int main()
{
    float x,y,z;
    std::cout<<"Enter x:";
    std::cin>>x;
    std::cout<<"Degree of number:";
    std::cin>>y;
    z=x;
    for(int i=1; i < y; i++){
        x=z*x;
    }
    std::cout<<"Result:"<<x;

    return 0;
}
