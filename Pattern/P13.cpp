#include <bits/stdc++.h>
using namespace std;

void print1(){
    int count=0;
    for(int i=1; i<=5; ++i){
        for(int j=1; j<=i; ++j){
            cout<<count+1<<" ";
        ++count;
        }
        cout<<endl;
    }
}

int main(){
    print1();
    return 0;
}