#include<iostream>
using namespace std;
int a[10]={6,2,5,5,4,5,6,3,7,6};
int f(int x)
{
	int tot = 0;
	if(x == 0) return a[0];
	//���������λ���ֱ��������
    //Ȼ�󽫻�����ۼ�
	while(x){
		tot += a[x%10];
		x/=10; 		
	}	
	return tot;
} 
int main()
{
	int n;//�����Ļ������� 
	int ans = 0;
	cin >> n;
	int t = n - 4;
	for(int i = 0 ; i < 1111 ; i++){
		for(int j = 0 ; j < 1111 ;j++){
			if(f(i) + f(j) + f(i+j) == t ){
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
