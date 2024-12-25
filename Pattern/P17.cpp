#include <bits/stdc++.h>
using namespace std;

void print1(){
    for(int i=0; i<5; ++i){
        for(int j=0; j<5-i; ++j){
            cout<<" ";
        }
        int breakpoint= i;
        char ch = 'A';
        for(int j=1;j<=2*i+1;++j){
            cout<<ch;
            if(j<=breakpoint) ++ch;
            else
            --ch;
        }
        cout<<endl;
    }
}

int main(){
    print1();
    return 0;
}