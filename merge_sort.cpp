
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void merge(int arr[], int lo , int mid , int hi){

    int n1=mid-lo+1;
    int n2=hi-mid;

    int arr1[n1],arr2[n2];

    for(int i=0;i<n1;i++){
        arr1[i]=arr[lo+i];
    }

    for(int i=0;i<n2;i++){
        arr2[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=lo;

    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        arr[k]=arr1[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=arr2[j];
        j++;k++;
    }

}
void sortedarr(int arr[],int lo,int hi){

    if(lo==hi){
        return ;
    }

    int mid = (lo+hi)/2;
    sortedarr(arr,lo,mid);
    sortedarr(arr,mid+1,hi);

    merge(arr,lo,mid,hi);

}
int main(){
    fast;

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortedarr(arr,0,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
