class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;int n=num.size();
        int p=0;string ans = "";
        if(n <= k)   
            return "0";
        if(k == 0)
            return num;       
        
        st.push(num[0]); 
        
        for(int i = 1; i<n; i++)
        {
            while(k > 0 && !st.empty() && num[i] < st.top())
            {
                --k;
                st.pop();
            }            
            st.push(num[i]);
            if(st.size() == 1 && num[i] == '0')
                st.pop();
        }
        
        while(k!=0 && !st.empty())
        {
            --k;
            st.pop();
        }
        
        while(!st.empty())
        {
            ans.push_back(st.top()); 
            st.pop(); 
        }
        
        if(ans=="")
            return "0";
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};