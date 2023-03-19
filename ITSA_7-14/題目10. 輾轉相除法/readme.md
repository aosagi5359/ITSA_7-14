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
