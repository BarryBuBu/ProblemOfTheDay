#include <iostream>
#include <string>
using namespace std;

void function1(int x){
    x ? (cout << "Hail to the Orange.\n") : cout << "Nope.\n";
}

void function2(char a){
    if(a == 64)
        cout << "Hail to the Blue.\n";
    else
        cout << "Not correct.\n";
}

void function3(int x, int y){
    if(++x == 3)
        cout << "Hail Alma Mater,\n";
    else
        cout << "Try again.\n";
    if(y++ == 2)
        cout << "Ever so true.\n";
    else
        cout << "Not quite.\n";
}

void function4(string str){
    int x = str.rfind("c++");
    if(x == 8)
        cout << "We love no other,\n";
    else
        cout << "Something is not right.\n";
}

void function5(int x){
    x &= 1;
    if(x^1)
        cout << "So let our motto be\n";
    else
        cout << "Oops.\n";
}

void function6(int *ptr){
    if(2[ptr] == 5)
        cout << "Victory, Illinois, Varsity.\n";
    else
        cout << "That's not right.\n";
}

int main(){
    function1(2);   // or any other non zero integer
    function2(64);  // or '@'
    function3(2,2);
    function4("we love c++");
    function5(8);   // or any other even integer
    int * x = new int[3];
    x[2] = 5;
    function6(x);
    delete [] x;
    return 0;
}
