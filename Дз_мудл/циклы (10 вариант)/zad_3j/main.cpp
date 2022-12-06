#include <iostream>                                    //Задание 3. Пользователь задаёт число Ч и Х. Посчитать y: (j)
#include <cmath>

int main()
{
    float a,b,c;
    double x,n,y;
    std::cout<<"Enter x:";
    std::cin>>x;
    std::cout<<"Enter n:";
    std::cin>>n;
    a=pow(x,2);
    c=2;
    y=x+((pow(x,n)/(n+1)));
    b=1;

    for (float i = 2.0; i < n ;  i++)
        {
        b+=1;
        a=pow(x,b);
        c+=1.0;
        y += ((a)/(c));
        }
    std::cout<<"Result:"<<y;

    return 0;
}
