#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]!=max && a[i]>smax)
        smax=a[i];
    }
    cout<<"Second Largest element is "<<smax;
}
