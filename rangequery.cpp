
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k=log2(n);

    int table[n][k+1];

    for(int i=0;i<n;i++){
        table[i][0]=arr[i];
    }

    for(int j=1;j<=k;j++){
        for(int i=0;i+pow(2,j)-1<n;i++){
            int q=pow(2,j-1);
            table[i][j] = min(table[i+q][j-1],table[i][j-1]);
        }
    }


    int q;
    cin>>q;

    while(q--){
        int a,b;
        cin>>a>>b;

        int z=b-a+1;
        int x=log2(z);

        int mnn=INT_MAX;

        int w=pow(2,x);

        cout<<min(table[a][x],table[a+z-w][x])<<endl;
    }

   return ;
}

int main()
{
    fast;

    int t=1;
    //cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
