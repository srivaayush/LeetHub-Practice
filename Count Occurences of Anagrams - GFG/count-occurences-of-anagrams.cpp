// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string txt, string pat) {
	    int n1=pat.size();
	    int n2=txt.size();
	    int ans=0;
	    vector<int> v1(26,0);
	    vector<int> v2(26,0);
	    for(auto &x:txt)
	        v2[x-'a']++;
	   
	        
	    for(int i=0;i<n2;i++){
	        v1[pat[i]-'a']++;
	    }
	   // for(auto &x: v1)
	   // cout<<x<<" ";
	   // cout<<endl<<n2<<endl;
	   // for(auto &x: v2)
	   // cout<<x<<" ";
	    
	    if(v1==v2)
	        ans++;
	    int j=n2,k=0;
	    while(j<n1){
	        v1[pat[j]-'a']++;
	        v1[pat[k]-'a']--;
	        k++;j++;
	        if(v1==v2)
	        ans++;
	    }
	    return ans;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends