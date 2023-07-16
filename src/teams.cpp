#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int sols = 0;
    while(n > 0){
        int p, q, r; cin >> p >> q >> r;
        // cout << p << q << r << endl;
        int count = 0;
        if((p == 1 && q == 1 && r == 1) || (p == 1 &&  q == 1 && r == 0) || (p == 1 && q == 0 && r == 1) || (p == 0 && q == 1 && r == 1)) count += 1;
        sols = sols + count;
        n--;
    }
    cout << sols;
    return 0;
}