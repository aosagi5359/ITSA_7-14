題目12. 遞迴程式練習
```c
#include <iostream>
using namespace std;

double f(int n){  //輸入值後在這裡運算函式
	if (n == 0 || n == 1)
	return n + 1;
	else if (n > 1)
	return f(n - 1) + f(n / 2);
}

int main(){
	int i;
	cin >> i;
	cout << f(i) << endl;
	return 0;
}

```
