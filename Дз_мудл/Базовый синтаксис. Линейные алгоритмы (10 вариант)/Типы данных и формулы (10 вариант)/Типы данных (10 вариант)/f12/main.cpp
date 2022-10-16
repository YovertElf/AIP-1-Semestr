#include <iostream>
#include <cmath>

int main()
{
    double m;
    double t;
    double z;
    double r;

    std :: cout << "r: ";
    std :: cin >> r;
    std :: cout << "z: ";
    std :: cin >> z;

    t=(sqrt(log(abs(M_PI * r))/((10*10*10)+r * z)));
    m=(180*atan(pow(M_E,5*t)-pow(M_E,-5*t)/(pow(M_E,z*t)-pow(M_E,-z*t))));

    std :: cout << "t: " << t << std :: endl;
    std :: cout << "z: " << z << std :: endl;


    return 0;
}
