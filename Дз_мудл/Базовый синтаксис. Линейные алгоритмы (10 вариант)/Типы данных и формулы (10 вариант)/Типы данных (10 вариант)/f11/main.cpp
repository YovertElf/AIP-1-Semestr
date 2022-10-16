#include <iostream>
#include <cmath>

int main()
{
    double b;
    double n;
    double x;
    double k;

    std :: cout << "x: ";
    std :: cin >> x;
    std :: cout << "k: ";
    std :: cin >> k;

    n=(log((M_PI)/((k*x)-1.6*(10*10*10))));
    b=(sqrt((sin(pow(n,2))+sin(pow(n,2)))/(abs(sin(n))+pow(M_E,-1*x))));

    std :: cout << "n: " << n << std :: endl;
    std :: cout << "b: " << b << std :: endl;


    return 0;
}
