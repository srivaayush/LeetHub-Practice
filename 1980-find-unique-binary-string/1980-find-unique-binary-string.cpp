class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        set<int> s;int n=nums.size();
        for(auto &x:nums){
            s.insert(stoi(x,0,2));
        }
        int ans=0;
        while(true){
            if(s.find(ans)==s.end()){
                return bitset<64>(ans).to_string().substr(64-n,n);
            }
            ans++;
        }
        return "-1";
    }
};