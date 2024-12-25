#include <bits/stdc++.h>
using namespace std;

void print1(){
    int spaces=0;
    for(int i=0; i<6;i++){
        for(int j=0;j<6-i;j++){
            cout<<'*';
        }
        for(int j=0; j<spaces; j++){
            cout<<" ";
        }
        for(int j=0; j<6-i; j++ ){
            cout<<'*';
        }
        spaces+=2;
        cout<<endl;
    }
    spaces=10;
    for(int i=0; i<6;i++){
        for(int j=0;j<=i;j++){
            cout<<'*';
        }
        for(int j=0; j<spaces; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++ ){
            cout<<'*';
        }
        spaces-=2;
        cout<<endl;
    }
}

int main(){
    print1();
    return 0;
}