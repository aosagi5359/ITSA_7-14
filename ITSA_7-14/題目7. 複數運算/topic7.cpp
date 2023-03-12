#include <iostream>
using namespace std;

int main (){
	int n,a,b,c,d,sum,sum1;
	char k;
	sum = sum1 = 0;
	cin >> n;
	for (int i = 0;i < n; i++)
	{
		cin >> k;
		cin >> a >> b >> c >> d;
		if (k == '+')
		{
			sum = a + c;
			sum1 = b + d;
			cout << sum << " " << sum1 << endl;
		}
		else if (k == '-')
		{
			sum = a - c;
			sum1 = b - d;
			cout << sum << " " << sum1 << endl;
		}
		else if (k == '*')
		{
			sum = a * c - b * d;
			sum1 = b * c + a * d;
			cout << sum << " " << sum1 << endl;
		}
		else if (k == '/')
		{
			sum = (a * c + b * d) / (c * c + d * d);
			sum1 = (b * c - a * d) / (c * c + d * d);
			cout << sum << " " << sum1 << endl;
		}
	}
	return 0;
}