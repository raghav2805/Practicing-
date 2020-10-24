
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(string s,string t,int n,int m){

    int l[n+1][m+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i == 0 || j==0){
                l[i][j]=0;
            }
            else{
                if(s[i-1] == t[j-1]){
                    l[i][j] = 1 + l[i-1][j-1] ;
                }
                else{
                    l[i][j] = max(l[i-1][j] , l[i][j-1]);
                }
            }
        }
    }
    
    int a=l[n][m];
    //int r=a;
    char tot[a+1];
    tot[a]='\0';

    int i=n,j=m;

    while(i>0 && j>0){

        if( s[i-1] == t[j-1] ){
            tot[a-1]=(char)t[j-1];
            i--;j--;a--;
        }

        else if(l[i-1][j] > l[i][j-1]){
            i--;
        }

        else{
            j--;
        }

    }

   cout<<tot;
}

int main(){
    fast;

    string s,t;

    cin>>s;
    cin>>t;

    solve(s,t,s.length(),t.length());

    return 0;
}
