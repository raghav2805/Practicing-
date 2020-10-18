
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main(){
    fast;

    int n;
    cin>>n;

    int arr[n+1];

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int tar;
    cin>>tar;

    bool f[n+1][tar+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=tar;j++){
            if(j==0){
                f[i][j]=true;
            }

            else if(i==0){
                f[i][j]=false;
            }

            else{
                if( f[i-1][j]==true || ( (j-arr[i])>=0 && f[i-1][j-arr[i]]==true) ){
                    f[i][j]=true;
                }
                else
                {
                    f[i][j]=false;
                }
                
            }
            //cout<<"hey"<<" "<<j<<" ";
        }
        //cout<<endl;
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=10;j++){
            cout<<f[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<f[n][10]<<endl;
    return 0;
}
