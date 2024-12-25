#include <bits/stdc++.h>
using namespace std;

void print1(){
    for(int i=5; i>0; --i){
        for(int j=0; j<i; ++j){
            cout<<'*';
        }
        cout<<endl;
    }
}

int main(){
    print1();
    return 0;
}