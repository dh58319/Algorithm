#include <iostream>
#include <string>
// https://www.acmicpc.net/problem/2675

using namespace std;
int main(){
    int t;
    cin >> t ;
    while(t--){
        int iter;
        string str, ans;
        cin >> iter;

        getline(cin, str);
        for (int j = 0; j<str.length(); j++){

           for (int i = 0; i<iter ;i++){
                if (str[j]==' '|| str[j]=='\0'|| str[j]=='\n') break;
                ans+=str[j];
            }
        }
        cout << ans << endl;
    }
    return 0;

}
