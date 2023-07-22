#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        int ans = 0;
        int i = 0;
        while(i < n){
            int j = i + 1;
            while(j < n){
                if(arr[j] - arr[j - 1] > k) break;
                j++;
            }
            int tt = j - i;
            ans = max(ans, tt); i = j;
        }
        cout << n - ans << endl;
    }
    return 0;
}