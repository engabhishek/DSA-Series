# include <iostream>
using namespace std;

int main (){
    int r, c, i, j;
    cout << "enter the no of rows: ";
    cin >> r;
    cout << "enter the no of colomn: ";
    cin >> c;

    for ( i = 1; i <= r; i++){
        for ( j = 1; j <= c; j++){
            cout << "* ";
        }
        cout << endl;
        
    }
    
    
}