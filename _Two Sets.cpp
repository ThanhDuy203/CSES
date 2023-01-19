//TwoSets
#include <bits/stdc++.h>
#include <vector>
#define inp(arr); for (int i = 0; i < n; i++) { cin >> arr[i]; }
#define oup(arr); for (int i = 0; i < arr.size(); i++) { cout << arr[i] <<" "; }
using namespace std;
typedef long long ll;
int isPrime(int n){
	for (int i = 2; i * i <= n; ++i){ if (n % i == 0) return 0; }
	return 1;
}
int main(){
	ll n; cin >> n;
	while (n--){
		vector<ll> a, b;
		bool ktra = false;
		
	}
	if (ktra) cout << "YES"<<"\n"; else cout <<"NO";
	return 0;
}

