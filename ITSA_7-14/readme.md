ITSA 7 ~ 14 解題方式
===
題目7. 複數運算
---
```C
#include <iostream>
using namespace std;

int main (){
	int n,a,b,c,d,sum,sum1;
	char k;
	sum = sum1 = 0;
	cin >> n;
	for (int i = 0;i < n; i++){
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
```

題目8. 質數判別
---
```C
#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i = 2; i <= 11; i++){
        if(num == i){       //判斷2,3,5,7,11
            cout<<"YES\n";
            break;
        }
        if(num % i == 0){ 
            cout<<"NO\n";
            break;
        }
        if(i >11){        //當i超過11後 num為質數
            cout<<"YES\n"; 
            break;
        } 
        if(i >= 3){ //讓 i 陸續變成 3,5,7,11
            i += 1;
            if(i == 7) i += 2;
        }
    }
}
```
i超過11時，代表已經沒有任何數為num的因數，則num為質數


題目9. 計算正整數被3整除之數值之總和
---
```c
#include <iostream>
using namespace std;
int main(){
    int num, total = 0;
    cin>>num;
    for(int i = 1; i <= num; i++){
        if(i % 3 == 0) total += i; //被三整除累加總和
    }
    cout<<total<<endl;
}
```

題目10. 輾轉相除法
---
```c
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    while (b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
        cout<<a<<"\n";
}
```
總是拿較大的數除以較小的數，當其中一數變成0，另外一個數就是最大公因數


題目11. 矩陣反轉
```c
#include <iostream>
using namespace std;

int main(){
	int a,b,count;
	int *num;
	count = 0;
	cin >> a >> b;
	num = new int[a * b];
	for (int i = 0;i < (a * b); i++)
	{
		cin >> num[i];
	}
	for (int i = 0;i < b; i++)
	{
		for (int j = 0;j < a; j++)
		{
			count++;
			cout << num[j * b + i];
			if (count % a != 0)
			cout << " ";
		}
		cout << endl;
	}
	delete []num;
	return 0;
}
```

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

題目13. 撲克牌大小

```c
#include <iostream>  
#include <string.h>  
#include <sstream>  
#include <vector>  
#include <algorithm>  
using namespace std;  
bool f(string a,string b);  
int main()  
{  
    int num;  
    cin>>num;  
    cin.get();  
    for(int i=0;i<num;i++)  
    {  
        string input;  
        getline(cin,input);  
        istringstream delim(input);  
        string token;  
        vector<string>arr;  
        while(getline(delim,token,' '))  
        {  
            arr.push_back(token);  
        }  
        sort(arr.begin(),arr.end(),f);  
        for(int j=0;j<arr.size();j++)  
        {  
            if(j!=arr.size()-1)  
                cout<<arr[j]<<" ";  
            else  
                cout<<arr[j]<<endl;  
        }  
    }  
    return 0;  
}  
bool f(string a,string b)  
{  
    if(a[0]>b[0])  
        return true;  
    else if(a[0]==b[0])  
    {  
        if(a.length()>b.length())  
            return true;  
        else if(a.length()==b.length() && a.length()==2)  
        {  
            if(a[1]>b[1])  
                return true;  
            else  
                return false;  
        }  
        else if(a.length()==b.length() && a.length()==3)  
        {  
            if(a[2]>b[2])  
                return true;  
            else  
                return false;  
        }  
        else  
            return false;  
    }  
    else  
        return false;  
}  
```

題目14. 判斷是否為迴文

```c
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input,output;
	bool a=1; 
	
	cin>>input;
    //將字串逆序傳到output 
	for(int i=input.length()-1;i>=0;i--){
		output[input.length()-1-i]=input[i];
	}//比較是否有異 
	for(int j=0;j<input.length();j++){
		if(input[j]!=output[j]){a=0;break;}//發現有異即時跳出 
		else a=1;
	}
	a ? cout<<"YES"<<endl : cout<<"NO"<<endl;//輸出結果 
	return 0;
} 
```
