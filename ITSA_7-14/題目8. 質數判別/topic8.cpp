#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i = 2; i <= 11; i++){
        if(num == i){
            cout<<"YES\n";
            break;
        }
        if(num % i == 0){
            cout<<"NO\n";
            break;
        }
        if(i >=11){
            cout<<"YES\n";
            break;
        } 
        if(i >= 3){
            i += 1;
            if(i == 7) i += 2;
        }
    }
}