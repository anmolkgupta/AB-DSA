#include<iostream>
using namespace std;

struct card {
    int face;
    int shape;
    int color;
};
// main function 
int main() {
    struct card c;
    c.face = 2;
    c.shape = 0;
    c.color = 0;

    cout << "Card: " << c.face << endl;
}