#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    int swapDone=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-1; i>0;--i){
        for(int j=0;j<i;++j){
            if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);}
            swapDone=1;
        }
        if(swapDone==1)
        break;
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    


     }