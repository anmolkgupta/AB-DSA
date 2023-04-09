#include<iostream>
using namespace std;

struct complex{
    double real;
    double img;
};
int main()
{
    struct complex C;
    C.real = 2.0;
    C.img = -5.0;

    cout << "Complex Equation: " << C.real << endl;
    cout << "Complex Equation: " << C.img << endl;

}