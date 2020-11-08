
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(string s,string a,int l){
    
    if(s.length()==0){
        cout<<a<<endl;
    }

    for(int i=0;i<s.length();i++){
        swap(s[i],s[l]);
        solve(s.substr(1),a+s[l],l);
        //swap(s[i],s[l]);
    }

}

int main(){
    fast;

    string s;
    cin>>s;

    solve(s,"",0);

    return 0;
}
