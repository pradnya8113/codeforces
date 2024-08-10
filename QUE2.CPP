#include<bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    string s;
    cin>>s;
    string temp = "";
    set<char> st={'a', 'e', 'i', 'u', 'y', 'o'};
    for(int i=0; i<s.size(); i++){
        if(st.find(tolower(s[i])) == st.end()){
            temp += '.';
            temp += tolower(s[i]);
        }
    }
    cout<<temp;
    return 0;
}