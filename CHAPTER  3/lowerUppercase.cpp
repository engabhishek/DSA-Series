# include <iostream>
using namespace std;

int main (){
    char ch;
    cout << "enter any charactor to check upper or lower case: ";
    cin >> ch;

    // if (ch >= 'a' && ch <= 'z'){
    //     cout << "charector is in lower case";
    // }else{
    //     cout << "charector is in Upper case";
    // }

    //with the use of asci value

    if (ch >= 97 && ch <= 122){
        cout << "charector is in lower case";
    }else{
        cout << "charector is in Upper case";
    }
    
}