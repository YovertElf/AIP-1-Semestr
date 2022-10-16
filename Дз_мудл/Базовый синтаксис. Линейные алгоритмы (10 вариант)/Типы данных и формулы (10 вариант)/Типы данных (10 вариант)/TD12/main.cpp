#include <iostream>                                                 //12.типы данных
#include <string>
int main()
{
    std::cout<<"Harakteristiki fotoapparata:"<<std::endl;
    std::cout<<"Model':";
    std::string model;
    getline(std::cin, model);
    std::cout<<"Cena:";
    std::string cena;
    getline(std::cin, cena);
    std::cout<<"Razreshenie (Mp):";
    std::string raz;
    getline(std::cin, raz);
    std::cout<<"Obyom karty pamyati:";
    std::string obyom;
    getline(std::cin, obyom);
    std::cout<<"Ves:";
    std::string ves;
    getline(std::cin, ves);
    std::cout<<"Harakteristiki fotoapparata:"<<std::endl
             <<"Model':"<<model<<std::endl
             <<"Cena:"<<cena<<std::endl
             <<"Razreshenie (Mp):"<<raz<<std::endl
             <<"Obyom karty pamyati:"<<obyom<<std::endl
             <<"Ves:"<<ves<<std::endl;

    return 0;
}
