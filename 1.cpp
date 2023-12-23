#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int pro=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        pro*=a[i];
    }
    cout<<"Product of elements is "<<pro;
}