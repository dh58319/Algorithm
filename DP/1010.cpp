#include <iostream>

using namespace std;

int main(){
    int n, m, a;
    int ans[31][31]= {0};

    cin >> a;
    while (a){
        cin >> n >> m;
        for (int i =1 ; i<=m;i++){
            ans[1][i]=i;
        }
        for (int i = 2; i<=n;i++){
            for (int j =2; j<= m; j++){
                ans[i][j]=ans[i-1][j-1]+ans[i][j-1];
            }
        }
        a--;
        cout << ans[n][m]<<endl;
    }


    return 0;
}