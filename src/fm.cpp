#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float sum = 0;
    for(int i = 0;i < 12;i++){
        float m; cin >> m;
        sum += m;
    }
    float avg = sum / 12;
    cout << "$" << fixed << setprecision(2) << avg;
    return 0;
}