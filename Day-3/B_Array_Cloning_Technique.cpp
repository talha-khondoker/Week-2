#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll mx=0;
        map<ll, ll> mp;
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        for(auto i:mp)
        {
            mx=max(mx,i.second);
        }
        ll cnt=0;
        while (mx<n)
        {
            ll rem_val=n-mx;
            ll can_add=mx;
            cnt++;
            cnt+=min(can_add, rem_val);
            mx+=min(can_add, rem_val);
        }
        cout<<cnt<<'\n';
    }
    return 0;
}