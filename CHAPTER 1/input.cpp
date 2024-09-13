#include <iostream>
using namespace std;

int main (){
    int a, b;
    cout << "enter the value of a: ";
    cin >> a;
    a++;

    cout << "enter the value of a: ";
    cin >> b;
    b--;

    int sum = a + b;
    cout << "sum = " << sum;

    return 0;
}