#include <iostream>
#include <string>

using namespace std;
int main(){
    int a, b, c, d, e;
    int result;

    cin >> a >> b >> c >> d >> e;
    result = (a*a + b*b + c*c + d*d + e*e)%10;
    cout << result << endl;

   
    return 0;

}