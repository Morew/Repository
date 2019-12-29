#include<iostream>
#define maxn 1000
using namespace std;
int main()
{
	int n,f[maxn];
	f[1] = 1;
	cin >> n;
	for(int i = 2 ; i <= n ; i++){
		if(n%2==0){
			f[i] = f[i] + f[i/2];
		}
		else{
			f[i] = f[i-1] ;
		}
		
	}
	cout << f[n];
}
