
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int

void solve(int arr[],int n,int mxx,int mnn){

    int p=mxx-mnn+1;
    int freq[p]={0};

    for(int i=0;i<n;i++){
        freq[arr[i] - mnn]++;
    }

    int prefix[p]={0};
    prefix[0]=freq[0]-1;

    for(int i=1;i<p;i++){
        prefix[i]=prefix[i-1]+freq[i];
    }

    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[prefix[arr[i]-mnn]]=arr[i];
        prefix[arr[i]-mnn]--;
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }

}

int main(){
    fast;

    int n;
    cin>>n;

    int arr[n];
    int mxx=INT_MIN,mnn=INT_MAX;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(mxx<arr[i]){
            mxx=arr[i];
        }
        if(mnn>arr[i]){
            mnn=arr[i];
        }

    }

    solve(arr,n,mxx,mnn);

    return 0;

}

