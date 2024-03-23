#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n , x;
    cin>>n>>x;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll cnt = 0;
   
  // Shifting non target elements 
  // to the left side
  for(int i = 0; i < n; i++)
  {
    if(a[i] != x)
    {
      a[i - cnt] = a[i]; 
    }
    else
    {
      cnt++;
    }
  }
   
  // Printing the array
  for(int i = 0; i < (n - cnt); i++)
  {
    cout << a[i] << " ";
  }
    return 0;
}