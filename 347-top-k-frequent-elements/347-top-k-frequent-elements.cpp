class Solution {
private:
    static bool sortbysec(const pair<int,int> &aa, const pair<int,int> &b){
        return (aa.second < b.second);
    }
public:
    vector<int> topKFrequent(vector<int>& a, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        vector<pair<int,int>> v;
       for(auto i: mp){
           v.push_back(i);
       }
        vector<int> ans;
        sort(v.begin(),v.end(),sortbysec);
        int n=v.size();
        if(n==1) return {v[0].first};
        for(int i=n-1;i>=n-k;i--){
            ans.push_back(v[i].first);
        }
        return ans;        
    }
};