#include <iostream>                                                 //Задание 3. Напишите программу, которая принимает от пользователя координаты точки и
#include <cmath>                                                    //определяет, попала ли точка в заштрихованную область.

int main()
{
    float r = 1;
    float rm = 0.3;
    float x,y;
    std::cout <<"Enter x:";
    std::cin >> x;
    std::cout <<"Enter y:";
    std::cin >> y;
    float rc = sqrt(x*x+y*y);
    if ((rc < r) && (rc > rm) && (0 < y) && (0 < x)){
        std::cout <<"Yes";
                                                    }
    else{
        std::cout <<"No";
        }
    return 0;
}
