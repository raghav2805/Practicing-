
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int

typedef struct{
    int weigth;
    int val;
    float d;

}items;

bool cmp(items a,items b){
    return a.d>b.d;
}

float solve(items arr[],int n,int w){

    for(int i=0;i<n;i++){
        arr[i].d=(float)arr[i].val/arr[i].weigth;
    }

    sort(arr,arr+n,cmp);

    float curr=0.00;
    float ans=0.00;
    

    for(int i=0;i<n;i++){
        if(curr+arr[i].weigth <=w){
            ans+=arr[i].val;
            curr+=arr[i].weigth;
        }

        else{
            ans+=(w-curr)*arr[i].d;
            break;
        }

    }

    return ans;
}
int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n,w;
        cin>>n>>w;

        items arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i].val>>arr[i].weigth;
        }

        cout<<fixed<<setprecision(2)<<solve(arr,n,w)<<endl;
    }
    
    return 0;
    
}
