#include <iostream>
using namespace std;




// * 
// * * 
// * * * 
// * * * *


// int main (){
//     int n, i, j;
//     cout << "enter the no. of lines in tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for (j = 0; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
        
//     }
    
// }


// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4


// int main (){
//     int n, i, j;
//     cout << "enter the no. of lines in tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for (j = 0; j <= i; j++){
//             cout << i+1 << " ";
//         }
//         cout << endl;
        
//     } 
// }


// A 
// B B 
// C C C 
// D D D D


// int main (){
//     int n, i, j;
//     char ch = 'A';
//     cout << "enter the no. of lines in tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for (j = 0; j <= i; j++){
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
        
//     } 
// }


// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 


// int main (){
//     int n, i, j;
//     cout << "enter the no. of lines in tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for (j = 0; j <= i; j++){
//             cout << j+1 << " ";
//         }
//         cout << endl;
        
//     } 
// }



// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10

// int main (){
//     int n, i, j, num = 1;
//     cout << "enter the no. of lines in tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for (j = 0; j < i+1; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
        
//     }
// }



// A 
// B C 
// D E F 
// G H I J 
// K L M N O
//........................................

// int main (){
//     int n, i, j;
//     char ch = 'A';
//     cout << "enter the no. of lines in tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for (j = 0; j < i+1; j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
        
//     }   
// }


// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1

// int main (){
//     int n, i, j;
//     cout << "enter the no. of lines in tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for (j = i+1; j >0; j--){
//             cout << j << " ";
//         }
//         cout << endl;
        
//     }   
// }


// 1 1 1 1 1 
//  2 2 2 2 
//   3 3 3 
//    4 4 
//     5

// int main (){
//     int n, i, j, k;
//     cout << "enter the no. of lines in inverted tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for (j = 0; j < i; j++){
//             cout << " ";
//         }
//         for (k = 0; k < n-i; k++){
//             cout << i+1 << " "; 
//         }
//         cout << endl;   
//     }   
// }



// 11111
//  2222
//   333
//    44
//     5

// int main (){
//     int n, i, j, k;
//     cout << "enter the no. of lines in inverted tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for (j = 0; j < i; j++){
//             cout << " ";
//         }
//         for (k = 0; k < n-i; k++){
//             cout << i+1 ; 
//         }
//         cout << endl;   
//     }   
// }



//      1
//     121
//    12321
//   1234321
//  123454321

// int main (){
//     int n, i, j, k, l, num = 1;
//     cout << "enter the no. of lines in inverted tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for(j = 0; j < n-i; j++){
//             cout << " ";
//         }
//         for (k = 0; k < i+1; k++){
//             cout << k+1;
//         }
//         for(l =i; l > 0; l--){
//             cout << l ;
//         }
//         cout << endl;   
//     }   
// }



//      11
//     1221
//    123321
//   12344321
//  1234554321


// int main (){
//     int n, i, j, k, l, num = 1;
//     cout << "enter the no. of lines in inverted tringle: ";
//     cin >> n;

//     for (i = 0; i < n; i++){
//         for(j = 0; j < n-i; j++){
//             cout << " ";
//         }
//         for (k = 0; k < i+1; k++){
//             cout << k+1;
//         }
//         for(l =i+1; l > 0; l--){
//             cout << l ;
//         }
//         cout << endl;   
//     }   
// }

int main (){
    int n, i, j, num = 1;
    cout << "enter the no. of lines in inverted tringle: ";
    cin >> n;

    for (i = 0; i < n; i++){
        for(j = 0; j < n-i; j++){
            cout << " ";
        }
        for (j = 0; j < i+1; j++){
            cout << j+1;
        }
        for(j =i; j > 0; j--){
            cout << j ;
        }
        cout << endl;   
    }   
}