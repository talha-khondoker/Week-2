#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int lf=1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll mx[lf]={0};
    ll l=0, r=0, sum=0, ans=0;
    while (r<n)
    {
        mx[a[r]]++;
        if(mx[a[r]]==1) sum++;
        while (sum>s)
        {
            mx[a[l]]--;
            if(mx[a[l]]==0) sum--;
            l++;
        }
        ans+=r-l+1;
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}