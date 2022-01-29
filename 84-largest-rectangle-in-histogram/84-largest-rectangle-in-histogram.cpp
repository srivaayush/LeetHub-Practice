// absolute brute force!
// class Solution {
// public:
//     int largestRectangleArea(vector<int>& h) {
//         int n=h.size();
//         int ans=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             int rs=i,ls=i;
//             while(ls>=0 && h[ls]>=h[i]){
//                 ls--;
//             }
//             while(rs<n && h[rs]>=h[i]){
//                 rs++;
//             }
//             rs--;ls++;
//             int res=(rs-ls+1)*h[i];
//             ans=max(res,ans);
//         }
//         return ans;
//     }
// };

//Next Smaller Element and Previous Smaller ELement solution
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        stack<int> st;
                
        vector<int> pse(n,0);                
        for(int i=0;i<n;i++)
        {
            while(st.empty()==false && h[st.top()]>h[i]){
                st.pop();                
            }
            if(!st.empty())
                pse[i]=st.top()+1;
            st.push(i);
        }
                
        vector<int> nse(n,n-1);  
        while(!st.empty()) 
            st.pop(); 
        
        for(int i=n-1;i>=0;i--)
        {
            while(st.empty()==false && h[st.top()]>=h[i]){
                st.pop();                
            }
            if(!st.empty())
                nse[i]=st.top()-1;
            st.push(i);
        }
        int ans = 0; 
        for(int i = 0;i<n;i++) {
            ans = max(ans, h[i] * (nse[i] - pse[i] + 1));
        }
        return ans; 
        
        // return 0;
    }
};