#include<iostream>
#include<cmath>
using namespace std;
int book[20],a[20],b[20];
int n,k;
int sum = 0 ,ans = 0;
int prime(int p){
	if(p < 2){
		return 0;
	}
	for(int i = 2 ; i <= sqrt(p) ; i++){
		if(p % i == 0){
			return 0;
		}
	}
	return 1;
}
void dfs(int p,int q){
	if(p > k){
		if(prime(sum)){
			ans++;
		}
		return;
	}
	for(int i = q+1 ; i <= n ; i++){
		sum += a[i];
		dfs(p+1,i);
		sum -= a[i];
	}
}
int main(){
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	dfs(1,0);
	cout << ans << endl; 
} 
