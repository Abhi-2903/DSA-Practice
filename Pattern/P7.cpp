#include <bits/stdc++.h>
using namespace std;

void print1(){
    for(int i=0; i<5; ++i){
        for(int j=0; j<5-i; ++j){
            cout<<" ";
        }
        for(int j=0;j<i+1;++j){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    print1();
    return 0;
}