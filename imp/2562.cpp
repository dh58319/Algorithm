#include <iostream>
#include <string>
// https://www.acmicpc.net/problem/2562

using namespace std;
int main(){

    int input[9];
    int idx=0, big=0;
    for (int i =0; i<9; i++){
        cin >> input[i];
    }
    
    for (int i = 0; i<9; i++){
        if (input[i]>big){
            big = input[i];
            idx = i+1;
        }
    }
    cout << big << endl << idx << endl;

    return 0;

}