#include<iostream>
#include<algorithm>
using namespace std;
int n,s;//ƻ����n,����s
int a,b;//���ӵĸ߶ȣ���������ֱ����󳤶�
struct stu{
	int a;
	int b;
}x[5001];
bool cmp(stu p,stu q)
{
	return p.b < q.b;
}
int main()
{	
	cin >> n >> s;
	cin >> a >> b;
	int sum = a + b , ans = 0 , num=0;
	for(int i = 0 ; i < n ; i++){
		cin >> x[i].a >> x[i].b;
	}
	sort(x,x+n,cmp);
	/*for(int i = 0 ; i < n ;i++){
		cout << x[i].a <<" " << x[i].b << endl;
	}*/
	for(int i = 0 ; i < n ;i++){
		if(sum >= x[i].a){
			num += x[i].b;
			if(num <= s)
			{
				ans++;
			}
			else{
				continue;
			}			
		}
	}
	cout << ans;
	return 0;
}
