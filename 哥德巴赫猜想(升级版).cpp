#include<iostream>
using namespace std;
int prime(int n){
	if(n<2){
		return 0;
	}
	for(int i = 2 ; i * i <= n ; i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,a[20001],j=0;//ÕýÆæÊý
	cin >> n;
	a[j++]=2;
	for(int i = 3 ; i < n ; i+=2){
		if(prime(i)){
			a[j++] = i;
		}
	}
	for(int i = 0 ; a[i] > 0 ; i++){
		for(int j = 0 ; a[j] > 0 ; j++){
			for(int k = 0 ; a[k] > 0 ; k++){
				if(a[i]+a[j]+a[k]==n){
					cout << a[i] << " "<< a[j] << " "  << a[k]; 
					return 0;
				}
			}
		}
	}
	return 0;
}
