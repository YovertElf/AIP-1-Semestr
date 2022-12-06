#include <iostream>                                              //Описать функцию Even(K) логического типа, возвращающую TRUE, если целый
                                                                 //параметр K является четным, и FALSE в противном случае. С ее помощью найти
bool even(int k){                                                //количество четных чисел в наборе из 10 целых чисел.
    return !(k % 2);
                }

int main()
{
    int number, count;
    count=0;
    std::cout <<"enter 10 numbers:" << std::endl;
    for (int i=0; i < 10; i++)
    {
        std::cin >> number;
        if (even(number)){
            count++;
                         }
    }
    std::cout <<"Even:" << count << std::endl;

    return 0;

}
