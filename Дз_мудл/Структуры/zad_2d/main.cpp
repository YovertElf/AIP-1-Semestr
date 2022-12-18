#include <iostream>                                            //2. Создайте структуру для хранения комплексных чисел. Атрибуты: вещественная и
                                                               //мнимая части. Объявите два числа и получите их значения от пользователя.
struct Complex{                                                //d. Напишите функцию, которая будет складывать комплексные числа
    double re;
    double im;
};
int SumComplexre (Complex Comp1, Complex Comp2){
    double sumre;
    sumre = Comp1.re + Comp2.re;
    return sumre;
    }
int SumComplexim (Complex Comp1, Complex Comp2){
    float sumim;
    sumim = Comp1.im + Comp2.im;
    return sumim;
    }
void inputComplex(Complex &in){
    std::cout<<"Enter the complex:"<<std::endl;
    std::cout<<"the real part:";
    std::cin>> in.re;
    std::cout<<"The imaginary part:";
    std::cin>> in.im;
    std::cout<<std::endl;
}
int main(){
    double cre, cim;
    Complex Comp1;
    Complex Comp2;
    inputComplex(Comp1);
    inputComplex(Comp2);
    cre=SumComplexre(Comp1, Comp2);
    cim=SumComplexim(Comp1, Comp2);
    std::cout<<"Sum of complex numbers:"<<cre
            <<"+"<<cim<<"i";

    return 0;

}
