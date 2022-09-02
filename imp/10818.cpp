#include <iostream>
#include <string>
#include <algorithm>
// https://www.acmicpc.net/problem/10818

using namespace std;




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

   
    int iter, input;
    cin >> iter;
    int max = -1000000;
    int min = 1000000;
    

    for(int i = 0; i<iter ; i++){
        cin >> input;
        if(input> max ) max = input;
        if(input < min) min = input;
    }
  
    cout << min << " "<<max << endl;

    return 0;

}
