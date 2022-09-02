#include <iostream>
#include <string>
// https://www.acmicpc.net/problem/101720

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int t;
    int total=0;
    string in;
    cin >> t;
    cin >> in;
    for (int i =0; i<t ; i++){
        total += in[i]-'0';
    }
    cout << total << endl;
    return 0;

}


