
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_tdio(false);cin.tie(0);cout.tie(0)

int main(){
    fast;
    
    int n; 
    cin>>n;
    
    int old_z=1;
    int old_o=1;
    
    for(int i=2;i<=n;i++)
    {
        int z=old_o;
        int o=old_z+old_o;
        
        old_z=z;
        old_o=o;
    }
    
    cout<<old_z+old_o;
    return 0;
}
