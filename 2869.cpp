#include <iostream>
using namespace std;
int main(){
    int a, b, v;
    cin >>a>>b>>v;
    int out ;
    out = (v-b)/(a-b);
    if ((v-b)%(a-b)!=0) out = out+1;
    cout << out;
}