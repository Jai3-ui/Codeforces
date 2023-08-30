#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> vect;
    while(n--){
        int num;
        cin>>num;
        vect.push_back(num);
    }
    int evenNum=0;
    int oddNum=0;
    int lastOdd=-1;
    int lastEven=-1;
    int count=0;
    for(auto& i:vect){
        if(i%2==0){
            evenNum++;
            lastEven=count;
        }
        else{
            oddNum++;
            lastOdd=count;
        }
        count++;
    }

    if(evenNum==1){
        cout<<lastEven+1<<endl;
    }
    else{
        cout<<lastOdd+1<<endl;
    }

}

int main(){
    solve();
    return 0;
}