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
