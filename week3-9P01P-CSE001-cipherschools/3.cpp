#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter Size";
    cin>>n;
    int A[n];
    for(int i =0; i<n; i++){
        cin>>A[i];
    }

    for(int x:A){
        cout<<x<<endl;
    }
    return 0;
}