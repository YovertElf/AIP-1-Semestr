#include <iostream>                              //Задание 6 Пользователь вводит три числа. Найдите среднее арифметическое этих чисел, а
#include <cmath>                                 //также разность удвоенной суммы первого и третьего чисел и утроенного второго числа.
using namespace std;
int main()
{
    std::cout<<"Enter the numbers"<< endl;
    int a,b,c;
    std::cin>>a>>b>>c;
    float srznach = (a+b+c)/3;
    float sum = 2*(a+b)-3*c;
    std::cout<<"srznach:"<<srznach<< endl;
    std::cout<<"sum:"<<sum<< endl;;

    return 0;
}
