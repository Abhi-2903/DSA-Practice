#include <bits/stdc++.h>
using namespace std;

void print1(){
    for(int i=0; i<5; ++i){
        int value=0;
        if(i%2==0) value=1;
        for(int j=0; j<=i; ++j){
            cout<<value;
            value=1-value;
        }
        cout<<endl;
    }
}

int main(){
    print1();
    return 0;
}