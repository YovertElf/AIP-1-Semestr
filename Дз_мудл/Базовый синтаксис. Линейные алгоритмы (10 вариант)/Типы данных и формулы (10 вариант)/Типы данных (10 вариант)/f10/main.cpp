#include <iostream>
#include <cmath>

int main()
{
    double k;
    double z;
    double m;
    double x;

    std :: cout << "x: ";
    std :: cin >> x;
    std :: cout << "m: ";
    std :: cin >> m;

    z = ((pow(M_E,M_PI * x)-(pow(M_E,-M_PI * x)))/((10*10*10) + sqrt(log(m*x))));
    k = pow(tan(z),2) + (pow(1/tan(z),2));

    std :: cout << "k: " << k << std :: endl;
    std :: cout << "z: " << z << std :: endl;


    return 0;
}
