#include <iostream>                                        //5. Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
                                                           //данные о самом быстром роботе.
struct Robot{
    std::string name;
    float size;
    float weight;
    float speed;
};
void inputRobot(Robot &in){
    std::cout<<"Enter data the robot:"<<std::endl;
    std::cout<<"name:";
    std::cin>> in.name;
    std::cout<<"size:";
    std::cin>> in.size;
    std::cout<<"weight:";
    std::cin>> in.weight;
    std::cout<<"speed:";
    std::cin>> in.speed;
    std::cout<<std::endl;
}
int main(){
    Robot rb1;
    Robot rb2;
    inputRobot(rb1);
    inputRobot(rb2);
    if (rb1.speed>rb2.speed){
        std::cout<<"name:"<<rb1.name<<"\t";
        std::cout<<"size:"<<rb1.size<<"\t";
        std::cout<<"weight:"<<rb1.weight<<"\t";
        std::cout<<"speed:"<<rb1.speed<<"\t";}
    else{
        std::cout<<"name:"<<rb2.name<<"\t";
        std::cout<<"size:"<<rb2.size<<"\t";
        std::cout<<"weight:"<<rb2.weight<<"\t";
        std::cout<<"speed:"<<rb2.speed<<"\t";}
    return 0;

}
