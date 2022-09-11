#include <iostream>
#include <string>
#include <algorithm>
// https://www.acmicpc.net/problem/1157

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int cnt[26]= {0,};
    string input;
    getline(cin, input);
    transform(input.begin(), input.end(),input.begin(), ::toupper);

    for (int i = 0 ; i < input.length(); i++){
        cnt[input[i] - 65] ++ ; 
    }   
    int max = 0, idx= 0;
    int dup = 0;

    for (int i = 0; i<26; i++){
        if(max<cnt[i]){
            max = cnt[i];
            idx = i;
        }
    }

    for (int i = 0; i<26 ; i++){
        if(max == cnt[i]) dup++;
    }
    if (dup > 1) cout << "?" << endl;
    else cout<< (char)(idx + 65) << endl;
    
    return 0;

}