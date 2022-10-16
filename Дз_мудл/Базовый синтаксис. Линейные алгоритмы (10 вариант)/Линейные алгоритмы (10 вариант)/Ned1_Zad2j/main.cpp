#include <iostream>                                            //Задание 2j Пользователь вводит параметры фигуры. Найти периметр и площадь фигуры эллипс
#include <cmath>
using namespace std;

int main()
{
    std::cout<< "Enter values" << endl;
    int a,b;
    std::cin>>a>>b;
    float Perimeter = 2 * 3.14 * sqrt((a * a + b * b) / (2 * 1.0));
    float Area = 3.14 * a * b;
    std::cout<< "Perimeter:"<<Perimeter<< endl;
    std::cout<< "Area:"<<Area<< endl;;

    return 0;
}
