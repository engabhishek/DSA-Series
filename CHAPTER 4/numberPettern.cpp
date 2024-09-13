# include <iostream>
using namespace std;

// int main (){
//     int n = 4, i, j;
//     // char ch = 'A'; 
//     for ( i = 0; i <= n-1; i++){
//         char ch = 'A';
//         for (j = 0; j <= n-1; j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
        
//     }
    
// }


int main (){
    int n = 3, i, j, num = 1; 
    for ( i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
        
    }
    
}