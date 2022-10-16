#include <iostream>                                             //11.типы данных
#include <string>

int main()
{
    std::cout<<"Billet v kino:"<<std::endl;
    std::cout<<"Nazvanie fil'ma:";
    std::string film;
    getline(std::cin, film);
    std::cout<<"Vremya nachala seansa:";
    std::string vremya;
    getline(std::cin, vremya);
    std::cout<<"Ryad:";
    std::string ryad;
    getline(std::cin, ryad);
    std::cout<<"Mesto:";
    std::string mesto;
    getline(std::cin, mesto);
    std::cout<<"Cena bileta:";
    std::string cena;
    getline(std::cin, cena);
    std::cout<<"Billet v kino:"<<std::endl
             <<"Nazvanie fil'ma:"<<film<<std::endl
             <<"Vremya nachala seansa:"<<vremya<<std::endl
             <<"Ryad:"<<ryad<<std::endl
             <<"Mesto:"<<mesto<<std::endl
             <<"Cena bileta:"<<cena<<std::endl;

    return 0;
}
