
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int

int solve(int arr[],int n){

    int cnt=0;
    int mxx_neg=INT_MIN;
    int cnt_zero=0,cnt_neg=0;
    int pro=1;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt_zero++;
            continue;
        }

        if(arr[i]<0){
            cnt_neg++;
            mxx_neg=max(mxx_neg,arr[i]);
        }
        pro=pro*arr[i];

    }

    if(cnt_zero==n){
        return 0;
    }

    if( cnt_neg&1){
        if(cnt_neg==1 && cnt_zero==n-1){
            return 0;
        }
        
        pro=pro/mxx_neg;
    }

    return pro;
}
int main(){
    fastio;

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<solve(arr,n)<<endl;
    return 0;
    
}
