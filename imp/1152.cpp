#include <iostream>
#include <string>
// https://www.acmicpc.net/problem/2869
using namespace std;
int main(){

    string str;
    getline(cin,str);
    int cnt = 1;

    for (int i= 0; i<str.length();i++){
        if (str[i]== ' '){
            cnt ++;
        }
    }
    if(str[str.length()-1] == ' '){ 
		cnt--;
        
	}
    if(str[0] == '\0'|| str[0] == ' '){
        cnt--;
    }


    cout << cnt << endl;
    return 0;

}