#include<bits/stdc++.h>
using namespace std;

string slicer(string s, int l, int r){
    int i = l;
    string temp = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; int j = 0;
    while(s[i] != '\0'){
        temp[j] = s[i];
        i++; j++;
        if(i == r){
            break;
        }
    }
    temp[j] = '\0';
    return temp;
}

string concat(string s, string s1){
    int i = 0; int j = 0;
    string temp = "faltucheezaindaaldo"; 
    while(s[i] != '\0'){
        temp[j] = s[i];
        i++; j++;
    }
    i = 0;
    while(s1[i] != '\0'){
        temp[j] = s1[i];
        i++; j++;
    }
    temp[j] = '\0';
    return temp;
}

int main(){
    int t; std::cin >> t;
    while(t--){
        int n, c, q; std::cin >> n >> c >> q;
        string s; std::cin >> s;
        string arr[c]; string temp = s; string var = s;
        for(int i = 0; i < c; i++){
            int l, r; std::cin >> l >> r;
            string var = slicer(s, l - 1, r);
            temp = concat(s, var);
            s = temp;
            arr[i] = s;
        }
        for(int i = 0; i < q; i++){
            int k; std::cin >> k;
            int j = 0; 
            char out = arr[i][k-1];
            std::cout << out << endl;
        }
    }
    return 0;
}