//Описать функцию RectPS(x1, y1, x2, y2, P, S), вычисляющую периметр P и площадь
//S прямоугольника со сторонами, параллельными осям координат, по координатам
//(x1, y1), (x2, y2) его противоположных вершин (x1, y1, x2, y2) — входные, P и S —
//выходные параметры вещественного типа. С помощью этой функцию найти
//периметры и площади трех прямоугольников с данными противоположными
//вершинами.
#include <iostream>
#include <cmath>

void RectPs( double x1, double y1, double x2, double y2, double& P, double& S )
{
    P = (abs(x2-x1) + abs(y2-y1)) * 2;
    S = abs(x2-x1) * abs(y2-y1);
}
int main() {
    double x1, x2, y1, y2;
    double P2, S2;
    std::cout<<"x1:";
    std::cin>>x1;
    std::cout<<"y1:";
    std::cin>>y1;
    std::cout<<"x2:";
    std::cin>>x2;
    std::cout<<"y2:";
    std::cin>>y2;
    RectPs( x1, y1, x2, y2, P2, S2 );
    std::cout<<P2<<' '<<S2<<std::endl;

    return 0;
           }
