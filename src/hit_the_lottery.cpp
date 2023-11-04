#include<iostream>
using namespace std;

int main(){
    int n, ans= 0; cin >> n;
    int arr[5] = {100, 20, 10, 5, 1};
    for(int i=0; i<5; i++){
        ans += n/arr[i];
        n %= arr[i];
    }
    cout << ans << endl;
    return 0;
}