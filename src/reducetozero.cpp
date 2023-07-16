#include<bits/stdc++.h>
using namespace std;

int main(){
    int num; cin >> num;
    int steps = 0;
    while(num > 0){
        if(num % 2 == 0){
            num = num / 2; steps += 1;
        }
        if(num % 2 == 1){
            num--; steps += 1;
        }
    }
    cout << steps;
    return 0;
}