// #include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int diff(string s1, string s2, int m);

int main(){
    int t; cin >> t;
    while(t > 0){
        int n, m; cin >> n >> m;
        string words[n];
        for(int i = 0; i < n; i++){
            cin >> words[i];
        }
        int val = 999999;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int d = diff(words[i], words[j], m);
                if(d < val) val = d;
            }
        }
        cout << val << "\n";
        t--;
    }
    return 0;
}

int diff(string s1, string s2, int m){
    int d = 0; int c1, c2, dif;
    for(int i = 0; i < m; i++){
        c1 = int(s1[i]); c2 = int(s2[i]);
        dif = c1 - c2; if(dif < 0) dif = dif * -1;
        d = d + dif;
    }
    return d;
}