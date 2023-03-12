#include <iostream>
using namespace std;
int main(){
    int num, total = 0;
    cin>>num;
    for(int i = 1; i <= num; i++){
        if(i % 3 == 0) total += i;
    }
    cout<<total<<endl;
}