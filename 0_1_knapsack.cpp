
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

    int arr[n+1][amt+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=amt;j++){
            arr[i][j]=0;
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=amt;j++){
            
            if(i==0 && j==0){
                arr[i][j]=0;
            }
            else if(i==0){
                arr[i][j]=-1;
            }
            else if(j==0){
                arr[i][j]=0;
            }

            else if( (j-wei[i])>=0 ){
               
                if( arr[i-1][j-wei[i]]>=0)
                    arr[i][j]=max(arr[i-1][j] , val[i]+arr[i-1][j-wei[i]]);

                else{
                    arr[i][j]=arr[i-1][j];
                }
            }

            else {
                arr[i][j]=arr[i-1][j];
            }
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=amt;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
  
    cout<<*max_element(arr[n],arr[n]+amt+1);

    return 0;
}
