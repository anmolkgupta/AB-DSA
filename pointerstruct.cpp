#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int main() {
    struct rectangle r;
    struct rectangle *p = &r;
    (*p).length = 15;
    (*p).breadth = 10;
    int vol = (*p).length * (*p).breadth;
    cout << "Area of rectangle: " << vol << endl;
}