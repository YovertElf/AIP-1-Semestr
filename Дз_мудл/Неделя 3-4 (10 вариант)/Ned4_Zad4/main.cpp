#include <iostream>                             //Задание 4. Вывести на экран ряд натуральных чисел от Н до М с шагом Ш. Например, если
#include <cmath>                                //Н=10, М=35, Ш=5, то вывод должен быть таким: 10 15 20 25 30 35. Значения Н, М,
                                                //Ш указываются пользователем (считываются с клавиатуры или из файла).
int main()
{
    int n,m,s;
    std::cout<<"first number(n):";
    std::cin>>n;
    std::cout<<"Second number(m):";
    std::cin>>m;
    std::cout<<"step(s):";
    std::cin>>s;

    while (n < m){
        n=n+s;
        if (n>m)
            break;
        std::cout<<n<<" ";
                 }
        return 0;
}
