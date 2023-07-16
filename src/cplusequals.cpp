#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t > 0){
        int a, b, n;
        cin >> a >> b >> n;
        int count = 0; int total = 0;
        while(total <= n){
            if(a < b) a += b;
            else b += a;
            total = max(a, b); count += 1;
            // cout << "Total: " << total << " Larger: " << max(a, b) << " Count: " << count << endl;
        }
        cout << count << endl;
        t--;
    }
    return 0;
}