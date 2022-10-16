#include <iostream>                                          //Задание 2. Напишите программу, которая принимает от пользователя координаты точки и
#include <cmath>                                             //определяет, попала ли точка в заштрихованную область.

int main()
{
    float r = 2;
    float x,y;
    std::cout <<"Enter x:";
    std::cin >> x;
    std::cout <<"Enter y:";
    std::cin >> y;
    float rc = sqrt(x*x+y*y);
    if ((rc > r) && (x < 2) && (y < 2)){
        std::cout <<"Yes";
                                       }
    else{
        std::cout <<"No";
        }
    return 0;
}
