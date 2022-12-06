//Реализовать функцию y=f(x) .(Протабулировать функцию.
//y = 3x - 7, если x > 1
//y = 3, если x = 1
//y = 3 * |x+2| - 7, если x < 1


#include <iostream>
#include <cmath>
#include <iomanip>
int main(){
    float x,y;
    std::cout<<"Enter x:";
    std::cin>>x;
    if (x>1){
        y=3*x - 7;
            }
    if (x==1){
        y=3;
             }
    if (x<0){
        y=3*abs(x+2)-7;
             }
    std::cout<<"Result:"<<y;

    return 0;
}
