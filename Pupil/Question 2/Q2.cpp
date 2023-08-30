#include <iostream>
#include <bits\stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;
    unordered_map<string,int> mp;
    while(n--){
        string str;
        cin>>str;
        if(mp.find(str)==mp.end()){
            mp[str]=1;
            cout<<"OK"<<endl;
        }
        else{
            string val=to_string(mp[str]);
            cout<<str<<""<<val<<endl;
            mp[str]++;

        }

    }
}

int main(){
    solve();
    return 0;
}
