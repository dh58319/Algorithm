#include <iostream>
#include <string>
// https://www.acmicpc.net/problem/2775
#define MX 20
int ppl[MX][15];

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int k = 1, n =0;

    int tc;
    cin >> tc ;
    while(tc--){
        cin>> k >>n;
        for (int i = 1; i<MX+1; i++){
            ppl[0][i]= i;
        }
        
        for (int f = 1; f<MX; f++){//층수
            for (int i = 1; i<15;i++){ //호수
                int total =0;
                for(int j = 1; j<i+1 ; j++){
                    total = total+ppl[f-1][j];//이전호수까지의 합
                }
               ppl[f][i]=total;
            }
            
        }
        // for (int i =0; i<MX; i++){
        //     for(int j = 1; j<15; j++){
        //         cout<<ppl[i][j]<< " ";
        //     }
        //     cout << endl;
        // }
        cout << ppl[k][n]<<endl;
        

    }
   


    return 0;

}