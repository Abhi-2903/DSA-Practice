#include <bits/stdc++.h>
using namespace std;
int swapping(int i,int n, int a[]){
    if(i>=n/2) return 0;
    swap(a[i],a[n-1-i]);
    swapping(i+1,n,a);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    swapping(0,n,a);
    for(int i=0;i<n; ++i) {
        cout<<a[i]<<" ";
    }

}