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
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n;i++)
        {
            int len;
            cin>>len;
            string s;
            cin>>s;
            for(int j=0; j<len; j++)
            {
                if(s[j]=='U')
                {
                    if(a[i]==0)
                    {
                        a[i]=9;
                    }
                    else
                    {
                        a[i]-=1;
                    }
                }
                else if(s[j]=='D')
                {
                    a[i]=(a[i]+1)%10;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}