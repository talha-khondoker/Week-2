#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin>>n>>s;
    vector<ll> a(n);
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0; 
    ll ans=1e9;
    ll i=0, j=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum>=s)
        {
            ans =min(ans, j-i+1);
            while(sum>=s && i<=j)
            {
                sum-=a[i];
                i++;
                if(sum>=s)
                {
                    ans=min(ans, j-i+1);
                }
            }
        }
        j++;
    }
    if(ans==1e9) cout<<-1<<'\n';
    else  cout<<ans<<'\n';
    return 0;
}