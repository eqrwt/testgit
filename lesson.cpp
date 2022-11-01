#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	ll n;
	cin >> n;
	vector <int> p;
	for(int i = 2;i * i <= n;i++){
		while(n % i== 0){
			p.push_back(i);
			n /= i;
		}
	}
	if(n > 1){
		p.push_back(n);
		n = 1;
	}
	for(int i = 0;i < p.size();i++) cout << p[i] << "*";

}
