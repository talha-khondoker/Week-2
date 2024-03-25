#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool check_again_pal(vector<ll> &v)
{
    ll i=0, j=v.size()-1;
    bool ans= true;
    while (i<j)
    {
        if(v[i]!=v[j])
        {
            ans=false;
            break;
        }
        i++;
        j--;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll i=0, j=n-1, a,b;
        bool flag=true;
        while(i<j)
        {
            if(v[i]!=v[j])
            {
                flag=false;
                a=v[i];
                b=v[j];
                break;
            }
            i++;
            j--;
        }
        if(flag) cout<<"YES"<<'\n';
        else
        {
            vector<ll> v1,v2;
            for(int i=0; i<n; i++)
            {
                if(v[i]!=a) v1.push_back(v[i]);
            }
            for(int i=0; i<n; i++)
            {
                if(v[i]!=b) v2.push_back(v[i]);
            }
            bool kal1=check_again_pal(v1);
            bool kal2=check_again_pal(v2);
            if(kal1 || kal2) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}