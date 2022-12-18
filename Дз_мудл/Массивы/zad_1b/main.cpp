#include <iostream>                                   //1. Сгенерировать массив со случайными числами в диапазоне: b. [10,20]
#include <stdlib.h>
#include <ctime>
#include <array>

int main() {
    std::array <int, 11> numbers;
    srand(time(NULL));
    for(int i=0; i<11; i++){
        numbers[i] = 10 +rand() % 11;        //rand() % (b - a + 1) + a
    }
    for(int i=0; i<11; i++)
        std::cout << numbers[i] <<std::endl;
    std::cin.get();
    std::cin.get();
 return 0;
}
