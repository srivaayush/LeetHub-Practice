class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        bool f=false;
        int n=nums.size();
        stack<int> st;
        int tp=INT_MIN;
        reverse(nums.begin(),nums.end());
        for(auto &x:nums){
            if(x<tp) return true;
            else{
                while( !st.empty() && x > st.top() )
                { 
                    tp = st.top(); st.pop(); 
                }
            }                 
            st.push(x);
            
        }
        return f;            
    }
};