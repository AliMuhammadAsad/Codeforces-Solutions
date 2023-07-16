#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t > 0){
        int n; cin >> n; int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int low = INT_MAX; int high = 0;
        int minindex = -1; int maxindex = -1;
        for(int i = 0; i < n; i++){
            if(low > arr[i]){
                low = arr[i]; minindex = i;
            }
            if(high < arr[i]){
                high = arr[i]; maxindex = i;
            }
        }
        int mini = min(minindex, maxindex);
        int maxi = max(minindex, maxindex);
        cout<<min(maxi+1,min(mini+n+1-maxi,n-mini))<<endl;
        t--;
    }
    return 0;
}