# include <iostream>
using namespace std;
// sum of two numbers

int sum (int a, int b){ // parameters
    return  a + b;
}

// min of two numbers

int min(int a, int b){
    int min;
    if (a < b){
        return a;
    }else{
        return b;
    }
}

// max of two numbers

int max(int a, int b){ 
    int min;
    if (a > b){
        return a;
    }else{
        return b;
    }
}
int main (){
    int a, b ;
    cout << "enter the first number: ";
    cin >> a;
    cout << "enter the second number: ";
    cin >> b;

    cout << "sum = " << sum(a, b) << endl; // arguments
    cout << "min = " << min(a, b) << endl;
    cout << "max = " << max(a, b) << endl;



    return 0;
}


// min of two numbers

