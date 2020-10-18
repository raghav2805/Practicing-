
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

bool solve(int arr[],int n,int smm,int tar){
    if(smm==tar){
        return true;

    }
    if(n==0){
        return false;
    }

    return solve(arr,n-1,smm+arr[n-1],tar) | solve(arr,n-1,smm,tar);
}

int main(){
    fast;

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int smm=0,tar;
    cin>>tar;

    if(solve(arr,n,smm,tar)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;
}
