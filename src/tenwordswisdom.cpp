#include<iostream>
using namespace std;

int main(){
    int t, n, a, b; cin >> t;
    while(t--){
        cin >> n;
        int idx, q = 0;
        for(int i = 1; i <= n; i++){
            cin >> a >> b;
            if((b > q) && (a <= 10)){
                q = b; idx = i;
            }
        }
        cout << idx << endl;
    }
    return 0;
}