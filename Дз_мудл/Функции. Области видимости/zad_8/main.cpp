//Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца,
//заключенного между двумя окружностями с общим центром и радиусами R1 и R2
//(R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для
//которых даны внешние и внутренние радиусы. Воспользоваться формулой площади
//круга радиуса R: S = π·R2. В качестве значения π использовать 3.14.

#include <iostream>
#include <cmath>

float RingS(float R1, float R2){
    float area;
    if (R1 > R2)
         area = (3.14*(R1*R1)) - (3.14*(R2*R2));
    return area;

                               }
int main(){
    for(int i=0; i<3;i++){
        float r1, r2;
        float area;
        std::cout <<"R1:";
        std::cin >>r1;
        std::cout <<"R2:";
        std::cin >>r2;
        area = RingS(r1,r2);
        if (area)
            std::cout<<"ring area:"<<area<<std::endl;
        else
            std::cout<<"R1 should be greater than R2"<<std::endl;
                         }
return 0;
          }
