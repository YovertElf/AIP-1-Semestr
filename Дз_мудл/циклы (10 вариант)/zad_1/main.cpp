#include <iostream>                                   //Задание 1. Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
                                                      //равно номеру строки. Количество строк Н вводит пользователь (можно из файла).
using namespace std;

int main()
{
    int k;
    std::cin>>k;
    for(int i = 0; i < k; i++){
        for(int n=0; n <= i; n++)
            std::cout << 0;
            std::cout << std::endl;
                              }
    std::getchar();
    std::getchar();

    return 0;
}
