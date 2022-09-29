#include <iostream>
#include <string>
#include <algorithm>
// https://www.acmicpc.net/problem/1259

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    string inp;
    while (1){
        cin >> inp;
        if(inp == "0") break;
        string chk;
        chk = inp;
        reverse(inp.begin(),inp.end());
        if (inp == chk) cout << "yes" << endl;
        else cout << "no"<< endl;

    }

    return 0;

}