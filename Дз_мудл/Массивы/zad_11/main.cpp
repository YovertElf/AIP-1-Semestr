#include <iostream>                                   //11. Вывести элементы массива, меньших среднего арифметического
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
int srznach (int a[]){
    int sum = 0, sred = 0;
    for(int i=0; i<20; i++)
        sum += a[i];
        sred= sum/20;
        return sred;
}

int main(){
    int arr[20];
    srand(time (0));
    inputRandArray(arr);
    outputArray(arr);
    std::cout << "Srznach = " << srznach(arr) << std::endl;
    for (int i = 0; i < 20; i++)
        if (arr[i] < srznach(arr))
            std::cout<<arr[i]<<" ";

    std::cin.get();
    std::cin.get();
    return 0;
}
