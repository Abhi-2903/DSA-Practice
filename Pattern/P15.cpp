#include <bits/stdc++.h>
using namespace std;

void print1(){
    for(int i=5; i>=0; --i){
        for(char ch='A'; ch<='A'+i; ++ch){
            cout<<ch<<" ";
        
        }
        cout<<endl;
    } 
}

int main(){
    print1();
    return 0;
}