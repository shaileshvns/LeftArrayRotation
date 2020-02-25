//using temp array left rotation.
#include<iostream>
#include<array>

using namespace std;
int* leftRotation(int a[],int d,int n){
    int temp[d],i;
    for (int i = 0; i < d; i++)
    {
        temp[i]=a[i];
        
    }
    for (int i = 0; i<(n-d); i++)
    {
        a[i]=a[d+i];
    }
    for(int i=n-d,j=0;i<n;i++)
    a[i]=temp[j++];
    return a;
}
         int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        
    }
    int d;
    cin>>d;
    leftRotation(a,d,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}