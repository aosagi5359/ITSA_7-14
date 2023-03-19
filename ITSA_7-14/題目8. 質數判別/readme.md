ITSA 7 ~ 14 解題方式
===

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
