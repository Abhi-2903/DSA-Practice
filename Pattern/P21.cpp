#include <bits/stdc++.h>
using namespace std;

void print1(){
    int n=5;
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(i==0|| i==n-1|| j==0|| j==n-1)
            cout<<'*';
            else
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    print1();
    return 0;
}