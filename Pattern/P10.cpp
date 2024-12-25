#include <bits/stdc++.h>
using namespace std;

void print1(){
    for(int i=1; i<=2*5-1; ++i){
        int stars=i;
        if(i>5) stars = 2*5-i;
        for(int j=0; j<stars; ++j){
            cout<<'*';
        }
        cout<<endl;
    }
}

int main(){
    print1();
    return 0;
}