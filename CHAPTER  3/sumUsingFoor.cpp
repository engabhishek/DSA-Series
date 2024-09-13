# include <iostream>
using namespace  std;

int main (){
    int a, i, sum;
    cout << "enter the renge of numbers: ";
    cin >> a;

    sum = 0;
    for (i = 1 ; i<=a ; i+=2){
        sum+=i;
    }
    cout << "sum of all odd digites from 1 to " << a << " = " << sum;
    cout << endl;
    sum = 0;
    for (i = 2 ; i<=a ; i+=2){
        sum+=i;
    }
    cout << "sum of all even digites from 1 to " << a << " = " << sum; 
}

