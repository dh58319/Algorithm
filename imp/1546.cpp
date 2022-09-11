#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
// https://www.acmicpc.net/problem/1546

// need to learn max_element

using namespace std;
int t =0;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    vector<int> score;
    int val;
    float mean;
    cin >> t ;
    for (int i = 0; i < t ; i++){
        cin >> val;
        score.push_back(val);
    }
    auto max = max_element(score.begin(), score.end());
     for (int i = 0 ; i < t ; i++){
        mean += (float)score[i] / *max * 100;
    }
    cout <<(float) mean/t << endl;
    return 0;

}