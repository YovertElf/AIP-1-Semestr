#include <iostream>                                // Задание 9 Сделать конвертер величин плотности (грамм на литр, грамм на кубический дециметр, фунт на кубический ярд)
#include <cmath>

using namespace std;

int main()
{
    int a;
    std::cout<<"Density Converter"<< endl;
    std::cout<<"Select an input value"<< endl;
    std::cout<<"1.grams per liter       2.grams per cubic decimeter     3.pound per cubic yard"<< endl;
    std::cin>>a;
    int b;
    std::cout<<"Output value"<< endl;
    std::cout<<"1.grams per liter       2.grams per cubic decimeter     3.pound per cubic yard"<< endl;
    std::cin>>b;
    std::cout<<"Enter values"<< endl;
    float x;
    std::cin>>x;
    if ((a==b)||((a==1)*(b==2))||((a==2)*(b==1))){
    std::cout<<x<< endl;                         }
    if ((a==1,b==3)||(a==2,b==3)){
        x=x*1.686;
    std::cout<<x<< endl;         }
    if ((a==3,b==1)||(a==3,b==2)){
        x=x/1.686;
    std::cout<<x<< endl;
                          }
    return 0;
}
