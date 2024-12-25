#include <bits/stdc++.h>
using namespace std;
bool f(int i,string &s){
    int n = s.size();
    if(i>=n/2) return true;
    else if(s[i]!=s[n-1-i]) return false;
    f(i+1,s);
    }
int main(){
    string s;
    cin>>s;
    cout<<f(0,s);
}