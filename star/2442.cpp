#include <iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    for ( int i = 1; i <= n; i++ ){
        for (int k = n-i ; k>0; k--){
            cout << " ";
        }
        for (int j = 0; j < (i*2)-1 ; j++){
            cout << "*";
        }
        cout<<"\n";
    }
    n--;
    for (int i =0; i <n; i++){

        for (int k=0; k<=i; k++){
            cout<<" ";
        }
        for (int j = 2*(n-i)-2; j>=0;j--){
            cout<<"*";
        }    
        
        cout<<endl;
    }



    return 0;
}

