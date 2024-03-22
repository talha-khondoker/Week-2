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
    ll ans=0;
    int i=0, j=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum<=s)
        {
            ans+=(j-i+1);
        }
        else
        {
            while(sum>s && i<j)
            {
                sum-=a[i];
                i++;
            }
            if(sum<=s)
            {
            ans+=(j-i+1);
            }
        }
        j++;
    }
    cout<<ans<<'\n';
    return 0;
}