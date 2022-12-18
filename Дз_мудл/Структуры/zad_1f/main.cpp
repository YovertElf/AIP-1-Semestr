#include <iostream>                                                 //1. Создайте структуру, которая хранит время: часы, минуты, секунды.
#include <cmath>                                                    //f. Написать функцию, которая ведёт подсчёт числа секунд между двумя моментами времени

struct Time{
    int number;
    int hours;
    int minutes;
    int seconds;
};
int difTime (Time t1, Time t2){
    int difseconds;
    difseconds=(((t1.hours*3600)+(t1.minutes*60)+t1.seconds)-((t2.hours*3600)+(t2.minutes*60)+t2.seconds));
    return difseconds;
}
void inputTime(Time &in){
    std::cout<<"Enter time:"<<std::endl;
    std::cout<<"hours:";
    std::cin>> in.hours;
    std::cout<<"minutes:";
    std::cin>> in.minutes;
    std::cout<<"seconds:";
    std::cin>> in.seconds;
    std::cout<<std::endl;
}
int main(){
    Time t1;
    Time t2;
    inputTime(t1);
    inputTime(t2);
    std::cout<<"The difference in seconds:"<<difTime(t1, t2);

return 0;
}
