//M个苹果放在n个盘子里问有多少种放法
//设i个苹果放在k个盘子里的方法总数是f(i,k)
//k>i,i个苹果放在k个盘子里就是放在i个盘子里f(i,k)=f（i，i)
//k<=i  进行分类：1： 有空盘子（至少有一个空盘子，i个苹果放在k-1个盘子里）
//2：无空盘子
//f(i,k)= f(i,k-1) + f(i-k,k)
#include<iostream>
using namespace std;
int main() {
	int t, m, n;
	cin >> t;
	int f(int m, int n);
	while (t--)
	{
		cin >> m >> n;
		cout << f(m, n) << endl;
	}
}

int f(int m, int n) {
	if (n > m)return f(m, m);
	if (m == 0)return 1;
	if (n == 0)return 0;
	return f(m, n - 1) + f(m - n, n);
}
