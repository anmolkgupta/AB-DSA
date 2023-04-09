// #include<iostream>
// #include<string>
// using namespace std;

// struct Student{
//     int roll;    
//     char name[25];
//     char dept[10];
//     char college[10];
// };
// int main(){
//     struct Student s;
//     s.roll = 10;
//     s.name = "Anmol";
//     s.dept = "IT";
//     s.college = "AEC";
//     cout << "Details: " << S.roll << " " << S.name << " " << S.dept << " " << S.college << endl;
// }

#include <iostream>
#include <string>
using namespace std;
struct Student{
    int roll;
    string name;
    string dept;
    string college;
};
int main(){
    struct Student S;
    S.roll = 41;
    S.name = "Anmol";
    S.dept = "IT";
    S.college = "AEC";
    cout << "Details: " << S.roll << " " << S.name << " " << S.dept << " " << S.college << endl;
}