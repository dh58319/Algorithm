#include <iostream>
#include <string>
#include <array>
// https://www.acmicpc.net/problem/2920

using namespace std;

int ascending[]= {1,2,3,4,5,6,7,8};
int descending[]= {8,7,6,5,4,3,2,1};

int main(){

    int input[7]={0};
    for (int i=0; i<8; i++){
        cin >> input[i];
    }
    
    if (equal(&ascending[0],&ascending[7],&input[0])){
        cout<< "ascending"<<endl;
    }
    else if (equal(&descending[0],&descending[7],&input[0])){
        cout << "descending" << endl;
    }
    else {
        cout << "mixed" << endl;
    }

    return 0;

}
