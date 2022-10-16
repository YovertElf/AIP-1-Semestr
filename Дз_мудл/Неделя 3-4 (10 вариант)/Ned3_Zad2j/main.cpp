#include <iostream>                                                   //Задание 2. Протабулировать функцию (шаг и диапазон задаёт пользователь):
#include <cmath>                                                      //j. y = (5+4x)^2 + 8x+cos(21x+10)
#include <iomanip>
int main()
{
    float x, dx, xf;
    float y;
    std::cout << "Solve function"<< std::endl;
    std::cout << "Enter dx:";
    std::cin >> dx;
    std::cout << "Enter x0:";
    std::cin >>x;
    std::cout << "Enter xf:";
    std::cin >> xf;

    std::cout << "\tx\t\ty" <<std::endl;
    std::cout.precision(5);

    while (x < xf){
        y= (pow(5+4*x,2) + 8*x + cos(21*x+10));
        std::cout << "\t"<<x<<"\t\t"<<y<<std::endl;
        x+= dx;

    }

    return 0;
}
