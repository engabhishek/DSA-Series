# include <iostream>
using namespace std;

int main(){
    int a;
    bool isPrime = true;
    cout << "enter the number to check: ";
    cin >> a;

    // for (int i = 2; i < a;  i++){
    // for (int i = 2; i <= a-1 ;  i++){
    for (int i = 2; i*i <= a ;  i++){
        if (a % i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
        cout << a <<" is a prime number";
    }else{
        cout << a <<" is not a prime number";
    }
    
    
}