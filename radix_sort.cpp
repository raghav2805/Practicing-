
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int

void countsort(int arr[],int exp,int n){

    int freq[10]={0};

    for(int i=0;i<n;i++){
        freq[ (arr[i]/exp) %10]++;
    }

    freq[0]--;

    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }

    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[freq[ (arr[i]/exp) %10]]=arr[i];
        freq[ (arr[i]/exp) %10]--;
    }

    cout<<"After sorting on "<<exp<<" place -> ";
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
void solve(int arr[],int n,int mxx,int mnn){

    int exp=1;
    while(exp<=mxx){
        countsort(arr,exp,n);
        exp*=10;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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

