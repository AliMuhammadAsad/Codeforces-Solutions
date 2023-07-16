#include<bits/stdc++.h>
using namespace std;

long long int poschecker(long long int a, long long int b, long long int k){
    if((a == b) && (k % 2 == 0)){
        return 0;
    }
    else if((a == b) && (k % 2 == 1)){
        return a;
    }
    else{
        long long int pos = 0;
        if(k % 2 == 0){
            pos = (a * (k/2LL)) - (b * (k / 2LL)); return pos;
        }
        else{
            pos = (a * ((k / 2LL) + 1)) - (b * (k / 2LL)); return pos;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        long long int a, b, k; cin >> a >> b >> k;
        long long int pos = 0;
        pos = poschecker(a, b, k);
        cout << pos << endl;
    }
    return 0;
}