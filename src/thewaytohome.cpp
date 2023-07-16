#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d; cin >> n >> d;
    string seq; cin >> seq;
    vector<int> jumps(n, -1);
    jumps[0] = 0;
    for(int i = 1; i < n; i++){
        if(seq[i] == '1'){
            for(int j = i - 1; j >= 0 && i - j <= d; j--){
                if(jumps[j] != -1){
                    if(jumps[i] == -1 || jumps[j] + 1 < jumps[i]){
                        jumps[i] = jumps[j] + 1;
                    }
                }
            }
        }
    }
    cout << jumps[n - 1] << endl;
    return 0;
}