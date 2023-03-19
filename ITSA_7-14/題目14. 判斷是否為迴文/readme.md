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
