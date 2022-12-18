#include <iostream>                                        //14. Создать новый массив из двух других массивов путём операций над элементами
#include <stdlib.h>                                        //массивов: b. вычитания
#include <ctime>
#include <array>

int main() {
    const int n = 20;
    std::array <int, n> a;
    std::array <int, n> b;
    std::array <int, n> c;
    srand(time(0));
    for(int i=0; i<n; i++){
        a[i] = rand() % 20;
        b[i] = rand() % 20;
    }
    std::cout << "a:";
    for(int i=0; i<n; i++)
        std::cout << a[i] <<" ";
    std::cout << std::endl;
    std::cout << "b:";
    for(int i=0; i<n; i++)
        std::cout << b[i] <<" ";
    for (int i = 0; i < n; i++)
        if (c[i]>0)
            c[i]=a[i]-b[i];
    std::cout << std::endl;
    std::cout << "c:";
    for (int i = 0; i < n; i++)
        std::cout << c[i] << ' ';
    std::cin.get();
    std::cin.get();
 return 0;
}
