//M��ƻ������n�����������ж����ַŷ�
//��i��ƻ������k��������ķ���������f(i,k)
//k>i,i��ƻ������k����������Ƿ���i��������f(i,k)=f��i��i)
//k<=i  ���з��ࣺ1�� �п����ӣ�������һ�������ӣ�i��ƻ������k-1�������
//2���޿�����
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
