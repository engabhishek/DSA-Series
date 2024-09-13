# include <iostream>
using namespace std;

int main(){
    int a;
    cout << "enter the number :";
    cin >> a;

    cout << (a % 2==0 ? "even" : "odd");
}