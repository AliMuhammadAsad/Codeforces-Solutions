#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    while(n > 0){
        int ins; cin >> ins;
        int arr[ins]; int evens = 0;
        for(int i = 0; i < ins; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < ins; i++){
            if(arr[i] % 2 == 0) evens += 1;
        }
        int val = evens;
        if(evens > ins - evens) val = ins - evens;
        cout << val << "\n";
        n--;
    }
    return 0;
}