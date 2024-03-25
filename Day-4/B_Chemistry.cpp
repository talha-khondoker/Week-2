#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll cnt=0;
        map<char, ll> mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second%2==1) cnt++;
        }
        if(cnt<=(k+1))
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}