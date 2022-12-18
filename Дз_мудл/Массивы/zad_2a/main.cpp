#include <iostream>                                      //2. Вычислить сумму элементов массива:
#include <stdlib.h>                                      //a. больших 5, меньших 7, больших 3
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
int sum5 (int a[]){
    int sum = 0;
    for(int i=0; i<20; i++)
        if(a[i]>5)
            sum += a[i];
    return sum;
}
int sum7 (int a[]){
    int sum = 0;
    for(int i=0; i<20; i++)
        if(a[i]<7)
            sum += a[i];
    return sum;
}
int sum3 (int a[]){
    int sum = 0;
    for(int i=0; i<20; i++)
        if(a[i]>3)
            sum += a[i];
    return sum;
}

int main(){
    int arr[20];
    srand(time (0));
    inputRandArray(arr);
    outputArray(arr);
    std::cout << "Summa > 5: " << sum5(arr) << std::endl;
    std::cout << "Summa < 7: " << sum7(arr) << std::endl;
    std::cout << "Summa > 3: " << sum3(arr) << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}
