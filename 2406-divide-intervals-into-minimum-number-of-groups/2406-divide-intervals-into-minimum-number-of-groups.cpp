class Solution {
private:
    int merge(vector<vector<int>>& interval) {
        vector<vector<int>> ans;
        sort(interval.begin(),interval.end());
        ans.push_back(interval[0]);
        int j=0;
        int n=interval.size();
        for(int i=1;i<n;i++)
        {
            if(ans[j][1]>=interval[i][0])
                ans[j][1]=max(ans[j][1],interval[i][1]);
            else
            {
                j++;
                ans.push_back(interval[i]);
            }
        }
        return j;
    }
public:
    int minGroups(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        priority_queue<int, vector<int>, greater<int>> st;
        int c=0;
        for(auto &x:in){
            if(st.empty() || (st.top())>x[0])
                c++;
            else 
                st.pop();
            
            st.push(x[1]+1);
        }
        return c;
    }
};