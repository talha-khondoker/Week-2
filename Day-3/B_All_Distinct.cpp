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
        set<int> s;
        int a;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            s.insert(a);
        }
        if((n-s.size())%2==0)
        {
            cout<<s.size();
        }
        else
        {
            cout<<s.size()-1;
        }
        cout<<'\n';
    }
    
    return 0;
}