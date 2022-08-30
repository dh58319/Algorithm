#include <iostream>
// https://www.acmicpc.net/problem/1009

using namespace std;

int main(){
    int  t;
    int a , b;
 
    cin >> t;
    while (t--){
        cin >> a >> b;
        int result = 1;
        for (int i = 0; i<b; i++){
            result = (result*a) %10;
        }
        if (result==0) result = 10;
        cout << result<<endl;
       
    }


    return 0;
}