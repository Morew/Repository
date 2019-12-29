/*#include<iostream>
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
}*/
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n, f[1010];
int main(){  
  scanf("%d", &n);    
  f[0] = f[1] = 1;   
   for(int i = 2; i <= n; ++i)   
    {       if(i%2==0)         
		   			f[i] = f[i/2]+f[i-1];     
		     else        
			      f[i] = f[i-1];  
  }   
   printf("%d\n", f[n]);   
    return 0;}

