
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main(){
    fast;
    
    int n,m;
    cin>>n;
    cin>>m;
    
    lli dp[n+1]={0};
    dp[1]=1;
    dp[m]=2;
    
    for(int i=2;i<=n;i++){
        if(i<m){
            dp[i]=dp[i-1];
        }
        else if(i==m){
            dp[i]=dp[m];
        }
        else{
            dp[i]=dp[i-1]+dp[i-m];
        }
    }
    
    cout<<dp[n]<<endl;
    
    return 0;
}
