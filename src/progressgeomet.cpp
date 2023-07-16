#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n; float k; cin >> n >> k;
//     int count = 0; int arr[n];
//     for(int i =0 ; i < n; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             for(int f = j + 1; f < n; f++){
//                 if(arr[i] <= arr[j] && arr[j] <= arr[f]){
//                     if(arr[i] * k == arr[j] && arr[j] * k == arr[f]){
//                         count += 1;
//                     }
//                 }
//             }
//         }
//     }
//     cout << count << endl;
//     return 0;
// }

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        cin >> lst[i];
    }

    unordered_map<int, int> freq1; // Map to store the frequency of lst[i] * k
    unordered_map<int, int> freq2; // Map to store the frequency of lst[i] * k^2
    unsigned long long count = 0;

    for (int i = 0; i < n; i++) {
        count += freq2[lst[i]];
        freq2[lst[i] * k] += freq1[lst[i]];
        freq1[lst[i] * k]++; // Increment the frequency of lst[i] * k
    }

    cout << count << endl;
}