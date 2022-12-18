#include <iostream>                          //11. Робот-автомобиль описывается как структура с полями: скорость, длительность
#include <string.h>                          //движения и номер. Напишите функцию для расчёта пройденного расстояния.

struct Robotauto{
    double speed;
    double drivingtime;
    std::string number;
};
void inputRobotauto(Robotauto &in){
    std::cout<<"Enter data the robotauto matiz:"<<std::endl;
    std::cout<<"speed:";
    std::cin>> in.speed;
    std::cout<<"driving time:";
    std::cin>> in.drivingtime;
    std::cout<<"number:";
    std::cin>> in.number;
    std::cout<<std::endl;
}
int passedway(Robotauto matiz){
    double pw;
    pw=matiz.speed*matiz.drivingtime;
    return pw;
    }
int main(){
    Robotauto matiz;
    inputRobotauto(matiz);
    std::cout<<"passed way:"<<passedway(matiz);

    return 0;
}
