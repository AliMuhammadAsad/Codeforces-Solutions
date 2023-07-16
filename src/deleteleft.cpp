#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    int n = min(s.length(), t.length());
    int count = 0;
    int j = s.length() - 1; 
    int k = t.length() - 1;
    while(n--){
        if(s[j] == t[k]){
            count++; j--; k--;
        }
        else break;
    }
    int ans = (s.length() -count) + (t.length() - count);
    std::cout << ans << endl;
    return 0;
}