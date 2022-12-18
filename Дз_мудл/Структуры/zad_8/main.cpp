#include <iostream>                                       //8. Имеется информация о датчиках: диапазон измеряемых значений (min, max),
                                                          //погрешность, максимальная скорость. Вывести данные о датчике с наибольшим
struct Datchik{                                           //диапазоном значений.
    float min, max;
    float pogresch;
    float maxspeed;
};
void inputDatchik(Datchik &in){
    std::cout<<"Vvedite znacheniya datchika:"<<std::endl;
    std::cout<<"diapozon:";
    std::cout<<"min:";
    std::cin>> in.min;
    std::cout<<"max:";
    std::cin>> in.max;
    std::cout<<"pogreschnosty:";
    std::cin>> in.pogresch;
    std::cout<<"max speed:";
    std::cin>> in.maxspeed;
    std::cout<<std::endl;
}
int main(){
    float diapozon1, diapozon2;
    Datchik dat1;
    Datchik dat2;
    std::cout<<"Datchik 1:";
    inputDatchik(dat1);
    std::cout<<"Datchik 2:";
    inputDatchik(dat2);
    diapozon1=dat1.max-dat1.min;
    diapozon2=dat2.max-dat2.min;
    if (diapozon1>diapozon2){
        std::cout<<"datchik 1:";
        std::cout<<"diapozon:";
        std::cout<<"min:"<<dat1.min<<"\t";
        std::cout<<"max:"<<dat1.max<<"\t";
        std::cout<<"pogrschnosty:"<<dat1.pogresch<<"\t";
        std::cout<<"max speed:"<<dat1.maxspeed<<"\t";}
    else{
        std::cout<<"datchik 2:";
        std::cout<<"diapozon:";
        std::cout<<"min:"<<dat2.min<<"\t";
        std::cout<<"max:"<<dat2.max<<"\t";
        std::cout<<"pogrschnosty:"<<dat2.pogresch<<"\t";
        std::cout<<"max speed:"<<dat2.maxspeed<<"\t";}
    return 0;

}
