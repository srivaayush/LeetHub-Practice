// class Solution {
// private:
//     bool isAnagram(string s, string t) { 
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         return s == t; 
//     }
// public:
//     vector<int> findAnagrams(string s, string p) {
//         vector<int> ans;
//         int n1=s.size();
//         int n2=p.size();
        
//         for(int i=0;i<=n1-n2;i++){
//             string s1="";
//             for(int j=i;j<i+n2;j++)
//                 s1.push_back(s[j]);
            
//             if(isAnagram(s1,p))
//                 ans.push_back(i);
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         vector<int> ans;
//         vector<int> hash(26, 0);
//         vector<int> phash(26, 0);
//         int window = p.size();
//         int len = s.size();
//         if(len < window)
//         {
//             return ans;
//         }
//         int left = 0,right = 0;
//         while(right < window)
//         {
//             phash[p[right] - 'a'] += 1;
//             hash[s[right] - 'a'] += 1;
//             right++;
//         }
//         right -=1;
//         while(right < len)
//         {
//             if(phash == hash)
//             {
//                 ans.push_back(left);
//             }
//             right+=1;
//             if(right != len)
//             {
//                 hash[s[right] - 'a'] += 1;
//             }
//             hash[s[left] - 'a'] -=1 ;
//             left += 1;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> findAnagrams(string pat, string txt) {
        int n1=pat.size();
	    int n2=txt.size();
	    vector<int> v1(26,0);
	    vector<int> v2(26,0);
	    for(auto &x:txt)
	        v2[x-'a']++;
	   
        vector<int> ans;
	        
	    for(int i=0;i<n2 && i<n1;i++){
	        v1[pat[i]-'a']++;
	    }
	    
	    if(v1==v2)
	        ans.push_back(0);
	    int j=n2,k=0;
	    while(j<n1){
	        v1[pat[j]-'a']++;
	        v1[pat[k]-'a']--;
	        if(v1==v2)
	        ans.push_back(j-n2+1);
	        k++;j++;
	    }
	    return ans;
    }
};

