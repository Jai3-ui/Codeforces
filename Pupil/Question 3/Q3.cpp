
/*
The Squares of Prime Number Have Exactly Three Divisor
*/

#include <bits/stdc++.h>
using namespace std;

const long long maxValue=1000000;

bool prime[maxValue+1];

set<long long> sieveOfErosthenes(){
    memset(prime,true,sizeof(prime));
    for(long long  p=2;p*p<=maxValue;p++){
        if(prime[p]){
            for(long long i=p*p;i<=maxValue;i+=p){
                prime[i]=false;
            }
        }
    }
    set<long long> ans;
    for(long long i=2;i<=maxValue;i++){
        if(prime[i]){
            long long val=(long long)(i*i);
            ans.insert(val);
        }
    }
    return ans;
}

int main(){
    set<long long> primeNum(sieveOfErosthenes());
    int n;
    cin>>n;
    while(n--){
        long long num;
        cin>>num;
        if(primeNum.find(num)!=primeNum.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}

