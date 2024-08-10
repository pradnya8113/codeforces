#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix(5, vector<int>(5));
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>matrix[i][j];
        }
    }
    int ans;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(matrix[i][j] ==1){
                ans = abs(2-i) + abs(2-j);
            }
        }
    }
    cout<<ans;
    return 0;
}