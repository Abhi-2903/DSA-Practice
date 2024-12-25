#include <bits/stdc++.h>
using namespace std;
int increament(int a, int b){
    if(a<1){
        return 0;
    }
    increament(a-1,b);
    cout<<a<<endl;
}


int main(){
    int a = 4;
    int b = 4;
    increament(a,b);
    
    
}