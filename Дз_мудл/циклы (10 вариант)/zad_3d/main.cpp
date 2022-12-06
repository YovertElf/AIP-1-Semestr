#include <iostream>                                                         //Задание 3. Пользователь задаёт число Ч и Х. Посчитать y: (d)
#include <cmath>

int main()
{
    float a,c;
    double x,n,y;
    std::cout<<"Enter x:";
    std::cin>>x;
    std::cout<<"Enter n:";
    std::cin>>n;
    a=3;
    c=7;
    y=3/(7*x);

    for (float i = 7.0; i < n ;  i=i+2.0)
        {
        a=a+1;
        c+=2.0;
        y += ((a)/(c*x));
        }
    std::cout<<"Result:"<<y;

    return 0;


}
