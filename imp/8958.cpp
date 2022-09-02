#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
// https://www.acmicpc.net/problem/8958

using namespace std;

int main(){
    int t ;
    cin >> t;
    int total=0, streak=0;

    while (t--){

        char str[80];
        cin >> str;

        for (int i = 0; i<strlen(str); i++){
            if (str[i]=='O'){
                streak++;
                total+=streak;
            }
            else{
                streak=0;
            }
        }
        cout << total<< endl;  
        total = 0;
        streak = 0;
    }
    return 0;

}
