# include <iostream>
using namespace std;

int main () {
    int a , i;
    cout << "enter the ending number: ";
    cin >> a;

    cout << "all even numbers: \n";
    for (i = 2; i <= a; i+=2){
        cout << i << "  ";
    }
    cout << endl;
    cout << "all odd numbers: \n";
    for (i = 1; i <= a; i+=2){
        cout << i << "  ";
    }

}