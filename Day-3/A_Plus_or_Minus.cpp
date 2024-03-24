#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while (tc--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)
        {
            cout<<"+";
        }
        else if(a-b==c)
        {
            cout<<"-";
        }
        cout<<'\n';
    }
    
    return 0;
}