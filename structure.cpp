#include<iostream>
using namespace std;
/*
int main() 
{ 
    //declare structure
    struct{
        int length , breadth; 
        }r;  
        r.length = 15;
        r.breadth  = 10;
        cout << "Area of rectangle: " << r.length*r.breadth << endl;
}
*/
struct rectangle {
    int length;
    int breadth;
};
int main()
{
    struct rectangle r;
    r.length = 15;
    r.breadth = 10;
    cout << "Area of rectangle : " << r.length * r.breadth << endl;
}