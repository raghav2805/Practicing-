
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int

int main(){
    fast;

   int n;
   cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   int dp[2][n];

    dp[0][0]=arr[0];
    dp[1][0]=0;

   for(int i=1;i<n;i++){
       dp[0][i]=arr[i]+dp[1][i-1];
       dp[1][i]=max(dp[1][i-1] , dp[0][i-1]);

   }

    cout<<max(dp[0][n-1] , dp[1][n-1] )<<endl;

    return 0;
}
