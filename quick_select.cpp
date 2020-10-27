  
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int


int partition(int arr[],int lo,int hi){

    int pivot=arr[lo];
    int i=lo+1,j=lo;

    while(i<hi){

        if(arr[i] > pivot){
                        i++;
        }
        else{
            swap(arr[i],arr[j]);
            j++;
            i++;
        }
    }

    swap(arr[j],pivot);

    return j;

}

int quickselect(int arr[],int lo,int hi,int k){
    
    int pi=partition(arr,lo,hi);

    if(k == pi){
        return arr[pi];
    }
    else if(k > pi){
        quickselect(arr,pi+1,hi,k);
    }
    else{
        quickselect(arr,lo,pi,k);
    }

}

int main(){
    fastio;

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    cout<<quickselect(arr,0,n,k-1)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

