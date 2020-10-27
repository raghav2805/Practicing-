
#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int
int mod = 1e9 + 7;


int partition (int arr[], int low, int high) 
{ 
    int pivot=arr[low];
    int i=low+1,j=low;

    while(i<high){
        
        if(arr[i] > pivot){
            i++;
        }
        else{
            swap(arr[j],arr[i]);
            j++;
            i++;
        }

    }

    swap(pivot,arr[j]);

    return j;

} 

void quicksort(int arr[],int lo,int hi){

    if(lo >=hi){
        return ;
    }

    int pi= partition(arr,lo,hi);

    quicksort(arr,lo,pi);
    quicksort(arr,pi+1,hi);

}

int main()
{
    fastio;

    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }

    return 0;
}
