#include <iostream>                                                     //Задание 2. Протабулировать функцию (шаг и диапазон задаёт пользователь):
#include <cmath>                                                        //n. (pow(2+3*x,2) + 72*x + tan(4*x + 31))
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
        y= (pow(2+3*x,2) + 72*x + tan(4*x + 31));
        std::cout << "\t"<<x<<"\t\t"<<y<<std::endl;
        x+= dx;   }

    return 0;
}
