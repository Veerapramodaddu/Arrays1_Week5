#include<iostream>
using namespace std;
int main(){
    int a[]={0,1,2,4,5};
    int s=sizeof(a)/sizeof(a[0]);
    bool flag=false;
    for(int i=0;i<s;i++){
        if(i!=a[i]){
            cout<<"Missing element is "<<i;
            flag=true;
            break;
        }
    }
    if(flag==false)
    cout<<" No Missing Element";

}