#include<iostream>
using namespace std;
int a[1024]={0}; 
int num;
void dfs(int n,int m)
{
	int rest ;
	for(int i = 1 ; i <= n ; i++){
		if(i >= a[m-1])//��֤��һ������ǰ��Ĵ� 
		{
			a[m] = i;//��������������� 
			rest = n - i;//��Ϊn-i 
			if(rest == 0 && m > 1)//m>1˵��������һ���⣬ͬʱrest==0˵����Ϊrest���Ѿ������� 
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
				dfs(rest,m+1);//��ʣ�µ������в�� 
			    //a[m] = 0;�������ڱ���a[]={0},����Ҫ���¸���ֵ 
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
