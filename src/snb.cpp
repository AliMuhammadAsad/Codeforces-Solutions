#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, w;
	cin>> k >> n >> w;
	long long cost = 0;
	for(int i = 1; i <= w; i++){
		cost = cost + (i*k);
	}
	if(cost <= n){ cout << 0 << "\n";}
	else cout << cost - n << "\n";

	return 0;
}