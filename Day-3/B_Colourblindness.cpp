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
        int n;
        cin>>n;
        string s1;
        string s2;
        cin>>s1>>s2;
        bool flag=true;
        for(int i=0; i<n; i++)
        {
            if((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R'))
            {
                flag=false;
            }
        }
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}