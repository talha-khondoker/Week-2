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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0, cnt1=0, cnt2=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(' && s[i]==')')
            {
                i++;
                continue;
            }
            if(s[i]=='(')
            {
                cnt1++;
            }
            if(s[i]==')')
            {
                cnt2++;
            }
            if(cnt1<cnt2)
            {
                ans++;
                cnt2--;
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}