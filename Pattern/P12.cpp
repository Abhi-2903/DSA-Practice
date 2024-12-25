#include <bits/stdc++.h>
using namespace std;

void print1(){
    int space=2*(5-1);

    for(int i=1; i<=5; ++i){
        for(int j=1; j<=i;++j){
        cout<<j;
        }
        for(int j=1;j<=space;++j){
            cout<<" ";
        }
        for(int j=i; j>=1;--j){
            cout<<j;
        }
        space=space-2;
        cout<<endl;
    }
}


int main(){
    print1();
    return 0;
}