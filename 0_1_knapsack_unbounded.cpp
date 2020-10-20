
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int val[n+1]={0};

    for(int i=1;i<=n;i++){
        cin>>val[i];
    }

    int wei[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>wei[i];
    }

    int amt;
    cin>>amt;

    int arr[amt+1];

    for(int i=0;i<=amt;i++){
        arr[i]=INT_MIN;
    }

    arr[0]=0;

    for(int i=1;i<=n;i++){
        for(int j=wei[i];j<=amt;j++){
            if(arr[j-wei[i]] > INT_MIN){
                arr[j]=max(arr[j] , val[i]+arr[j-wei[i]] );
            }
        }
    }
  
    cout<<*max_element(arr,arr+amt+1);

    return 0;
}
