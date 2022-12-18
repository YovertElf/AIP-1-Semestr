#include <iostream>                                               //12. Увеличить все нечётные элементы массива на 3, а чётные в 2 раза
#include <stdlib.h>
#include <ctime>
#include <array>

int main() {
    int na3, v2;
    std::array <int, 20> numbers;
    srand(time(0));
    for(int i=0; i<20; i++){
        numbers[i] = rand() % 10;
    }
    for(int i=0; i<20; i++)
        std::cout << numbers[i]<< " ";
    std::cout<<std::endl;
    for (int i = 0; i < 20; i++){
        if (numbers[i] % 2 == 0){
            v2=numbers[i]*2;
            std::cout<<v2<<" ";
        }
        else
        {
            na3=numbers[i]+3;
            std::cout<<na3<<" ";
        }
    }
    std::cin.get();
    std::cin.get();
 return 0;
}

