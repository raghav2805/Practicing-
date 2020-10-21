
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main(){
    fast;

    int t;
    cin>>t;

    int arr[t][3];

    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    lli dp[t][3];

    dp[0][0]=arr[0][0];
    dp[0][1]=arr[0][1];
    dp[0][2]=arr[0][2];

    for(int i=1;i<t;i++){
        for(int j=0;j<3;j++){
            if(j==0){
                dp[i][j]=arr[i][j] + min(dp[i-1][1] , dp[i-1][2]);
            }
            else if(j==1){
                dp[i][j]=arr[i][j] + min(dp[i-1][0] , dp[i-1][2]);
            }

            else{
                dp[i][j]=arr[i][j] + min(dp[i-1][0] , dp[i-1][1]);
            }
        }
    }

    cout<<*min_element(dp[t-1],dp[t-1]+3);

    return 0;
}
