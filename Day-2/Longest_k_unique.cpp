//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    unordered_map<char,int> m;
        int ans=-1;
        int i=0,j=0;
        
        while(j<=s.length())
        {
            if(m.size()<k)
            {
                m[s[j]]++;
                j++;
            }
            
            else if(m.size()==k)
            {
                ans=max(ans,j-i);
                m[s[j]]++;
                j++;
            }
            
            else
            {
                while(m.size()>k)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                        m.erase(s[i]);
                    i++;
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends