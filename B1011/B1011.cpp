#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n],b[n],c[n];            //注意看题目，此处值的范围有坑!!!!!!!!!
    for(int i = 0; i<n; i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i = 0; i<n; i++){
        if((a[i] + b[i]) > c[i]) cout<<"Case #"<<i+1<<": true"<<endl;
        else cout<<"Case #"<<i+1<<": false"<<endl;
    }
    return 0;
}
