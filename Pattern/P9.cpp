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
void print2(){
    for(int i=5; i>=0; --i){
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
    print2();
    return 0;
}