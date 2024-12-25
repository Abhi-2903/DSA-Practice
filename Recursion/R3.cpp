#include <bits/stdc++.h>
using namespace std;
int summation(int a){
    if(a<1){
        return 0;
    }
    else
    return a+summation(a-1);
    
}

int main(){
    
    int a = 4;
    summation(a);

}