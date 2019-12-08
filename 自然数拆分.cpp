#include<iostream>
using namespace std;
int a[1024]={0}; 
int num;
void dfs(int n,int m)
{
	int rest ;
	for(int i = 1 ; i <= n ; i++){
		if(i >= a[m-1])//保证后一个数比前面的大 
		{
			a[m] = i;//将这个数计入结果中 
			rest = n - i;//差为n-i 
			if(rest == 0 && m > 1)//m>1说明至少有一个解，同时rest==0说明和为rest的已经计算完 
			{
				cout << num << "=";
				for(int j = 1 ; j <  m ; j++){
					cout << a[j] << "+" ;
				}
				cout << a[m] << endl;
				return;
			}
			else
			{
				dfs(rest,m+1);//将剩下的数进行拆分 
			    //a[m] = 0;回溯由于变量a[]={0},不需要重新附初值 
			}
				
		}
	}
}
int main()
{
	cin >> num;
	dfs(num,1);
	return 0;
} 
