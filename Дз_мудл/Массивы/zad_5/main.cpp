#include <iostream>                                             //5. Найти наибольший/наименьший элемент массива и его номер по порядку
#include <stdlib.h>
#include <ctime>
void inputRandArray(int a[]){
    for(int i=0; i<20; i++)
        a[i] = rand() % 10;
}
void outputArray(int a[]){
    for(int i=0; i<20; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
}
int max(int a[]){
    int max=a[0];
    for(int i=0;i<20;i++){
        if (max<a[i])
            max=a[i];
    }
    return max;
}
int min(int a[]){
    int min=a[0];
    for(int i=0;i<20;i++){
        if (min>a[i])
            min=a[i];
    }
    return min;
}
int main(){
    int arr[20];
    srand(time (0));
    inputRandArray(arr);
    outputArray(arr);
    std::cout << "max = " << max(arr) << std::endl;
    std::cout << "min = " << min(arr) << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
