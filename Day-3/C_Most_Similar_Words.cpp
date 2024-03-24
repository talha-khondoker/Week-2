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
        int n, m;
        cin>>n>>m;
        string s[n];
        int ans=INT_MAX, sum, dis;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        for(int i=0; i<n-1; i++)
        {
            for(int l=i+1; l<n; l++)
            {
            sum=0;
                for(int k=0; k<m; k++)
                {
                    dis=abs(s[i][k]-s[l][k]);
                    sum+=dis;
                }
                if(sum<ans)
                {
                    ans=sum;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}