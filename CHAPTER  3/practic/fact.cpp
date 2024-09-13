#include <iostream>
using namespace std;

int main (){
    int n, i, fact = 1;
    cout << "enter the number you want to print factorial: ";
    cin >> n;

    for (i = 1; i <= n; i++){
        fact*=i;
    }
    cout << "factorial of "<< n  << " = " << fact;

    

}