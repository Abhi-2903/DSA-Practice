#include <bits/stdc++.h>
using namespace std;

int summation(int b, int sum){
    if(b<1){
        cout<<sum<<endl;
        return 0;
    }
    
    summation(b-1,sum+b);
    
}
int main(){
    int b = 4;
    int sum = 0;
    summation(b,sum);
    
    return 0;
}