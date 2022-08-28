#include <iostream>
using namespace std;

int main(){
    int in, a, b;
    int cnt =0;
    int sum=0;
    cin >> in;
    a = in/10;
    b = in %10;
    cout<<a << "and "<< b<< "input : "<< in<<endl;
    while(1){
        sum = a+b;
        cnt ++;
        a = sum/10;
        b = sum%10;
        cout<<sum << endl;
        if(sum == in)break;
    }

    
   cout<<cnt;

    return 0;
}