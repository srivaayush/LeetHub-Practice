class Solution {
public:
    static bool sortbysec(const pair<int,int> &aa, const pair<int,int> &b){
        return (aa.second < b.second);
    }
    vector<int> topKFrequent(vector<int>& a, int k) {
        unordered_map<int,int> mp;
        if(a.size()==1) return {a[0]};
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        vector<pair<int,int>> v;
       for(auto i: mp){
           v.push_back(i);
       }
        vector<int> ans(k);
        sort(v.begin(),v.end(),sortbysec);
        
        // for(auto i: v){
        //     cout<<i.first<<"  "<<i.second<<"  "; 
        // }
        int j=v.size()-1;
        for(int i=0;i<k && j>=0;i++){
            ans[i]=v[j].first;
            j--;
        }
        return ans;
    }
        
//     vector<int> topKFrequent(vector<int>& nums, int k) {
        
//     }
};