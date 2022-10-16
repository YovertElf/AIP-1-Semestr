#include <iostream>                                   //Задание 1. Дана функция y=f(x). Найти значение функции по x: (с)
#include <cmath>                                      //y = 1,5x + 5, если x > 0
                                                      //y = -2, если x = 0
int main()                                            //y = 2 * |x+4| - 6, если x < 0
{
    float x,y;
    std::cout<<"Enter x:";
    std::cin>>x;
    if (x>0){
        y=1.5*x+5;
            }
    if (x==0){
        y=-2;
             }
    if (x<0){
        y=2*abs(x+4)-6;
             }
    std::cout<<"Result:"<<y;

    return 0;
}
