int main (){
    int n, i, j;
    cout << "enter the no. of lines in tringle: ";
    cin >> n;

    for (i = 0; i < n; i++){
        for (j = 0; j <= i; j++){
            cout << i+1 << " ";
        }
        cout << endl;
        
    }
    
}