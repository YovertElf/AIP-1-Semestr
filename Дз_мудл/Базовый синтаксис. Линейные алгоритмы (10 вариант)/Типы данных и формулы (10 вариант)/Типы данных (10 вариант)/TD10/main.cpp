#include <iostream>                                            //10.типы данных
#include <string>

int main()
{
    std::cout<<"Dannye bibliograficheskogo istochnika:"<<std::endl;
    std::cout<<"Nazvanie literaturnogo istochnika:";
    std::string litist;
    getline(std::cin, litist);
    std::cout<<"Avtor:";
    std::string avtor;
    getline(std::cin, avtor);
    std::cout<<"God izdaniya:";
    std::string god;
    getline(std::cin, god);
    std::cout<<"Kategoriya (kniga, stat'ya):";
    std::string kategoriya;
    getline(std::cin, kategoriya);
    std::cout<<"Dannye bibliograficheskogo istochnika:"<<std::endl
             <<"Nazvanie literaturnogo istochnika:"<<litist<<std::endl
             <<"Avtor:"<<avtor<<std::endl
             <<"God izdaniya:"<<god<<std::endl
             <<"Kategoriya (kniga, stat'ya):"<<kategoriya<<std::endl;

    return 0;
}
