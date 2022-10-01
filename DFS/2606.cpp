#include <iostream>
#include <string>
// https://www.acmicpc.net/problem/2606
#define MX 101 

int num;
bool map[MX][MX];
bool visited[MX];
int ans = 0;

void dfs(int n){
    visited[n]=true;
    for (int i =0; i<num+1; i++ ){
        if(!visited[i]&&map[n][i]){
            dfs(i);
            ans++;
        }
    }
}

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, x, y;
    cin >> num >> n;
    for (int i =0;i<n;i++){
        cin >> x >> y ;
        map[x][y] = map[y][x] = true;
    }
    dfs(1);

    cout << ans << endl;
    return 0;

}