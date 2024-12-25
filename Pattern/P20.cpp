#include <bits/stdc++.h>
using namespace std;

void print1(){
    //if total rows are "n" than outer loop will run till "2*n-1"
    int n=5;
            int spaces=2*n-2;
    for(int i=1; i<=2*n-1; ++i){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=0; j<stars; ++j){
            cout<<'*';
        }
        for(int j=0; j<spaces; j++){
            cout<<" ";
        }
        for(int j=0; j<stars; ++j){
            cout<<'*';
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
        

}
int main(){
    print1();
    return 0;
}