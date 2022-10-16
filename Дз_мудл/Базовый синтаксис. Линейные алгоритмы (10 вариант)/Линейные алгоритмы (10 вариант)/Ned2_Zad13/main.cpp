#include <iostream>                                          //Задание 13 Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной
#include <cmath>                                             //покупки из 300 г конфет и 400 г печенья; б) трех покупок, каждая из 2 кг печенья и
using namespace std;                                         //1 кг 800 г конфет.

int main()
{
    std::cout<<"the price of 1 kg of candies"<< endl;
    float a;
    std::cin>>a;
    std::cout<<"the price of 1 kg of cookies"<< endl;
    float b;
    std::cin>>b;
    std::cout<<"number of purchases"<< endl;
    int c;
    std::cin>>c;
    std::cout<<"Gramm of candies"<< endl;
    float d;
    std::cin>>d;
    std::cout<<"Gramm of cookies"<< endl;
    float e;
    std::cin>>e;
    e=c*(((d/1000)*a)+((e/1000)*b));
    std::cout<<"total price"<< endl;
    std::cout<<e;

    return 0;

}
