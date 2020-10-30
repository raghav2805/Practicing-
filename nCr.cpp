#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int mod=1e9+7;



int main() {
    fast;
	
	int n,r;
    cin>>n>>r;

    lli dp[n+1][r+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=r;j++){
            if(j>i){
                dp[i][j]=0;
            }
            else if(j==i){
                dp[i][j]=1;
            }
            else if(i!=0 && (j==0 || j==1) ){
                dp[i][j]=i;
            }
            else{
                dp[i][j]= ( dp[i-1][j-1]%mod +dp[i-1][j]%mod )%mod ;
            }
        }
    }

    /*for(int i=0;i<=n;i++){
        for(int j=0;j<=r;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/


    cout<<dp[n][r];
	   
	return 0;
}
