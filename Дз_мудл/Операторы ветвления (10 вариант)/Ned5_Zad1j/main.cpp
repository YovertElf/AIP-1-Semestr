#include <iostream>                                  //Задание 1. Дана функция y=f(x). Найти значение функции по x:(j)
#include <cmath>                                     //y = 3x - 5, если x > 5
                                                     //y = 10, если x = 5
int main()                                           //y = 2 * |x-2| + 5, если x < 5
{
    float x,y;
    std::cout<<"Enter x:";
    std::cin>>x;
    if (x>5){
        y=3*x-5;
            }
    if (x==5){
        y=10;
             }
    if (x<5){
        y=2*abs(x-2)+5;
            }
    std::cout<<"Result:"<<y;

    return 0;
}
