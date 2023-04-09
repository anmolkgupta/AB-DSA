#include<iostream>
using namespace std;

int main() {
    int a = 10;
    // declare pointer
    int *p;
    // initialize
    p = &a;
    //cout << "A: " << a << endl;
    // dereferencing
    cout << "A: " << *p << endl;
}