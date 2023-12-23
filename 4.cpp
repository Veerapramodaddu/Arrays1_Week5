#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                c+=1;
            }
        }
        if(c>1){
                cout<<"Contains Duplicate";
                flag=true;
                break;
            }
    }
    if(flag==false){
        cout<<"Doesn't contain Duplicate elements";
    }
}