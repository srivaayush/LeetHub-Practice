class Solution {
private:
    bool cal(vector<int> source, vector<int> target){
        for(int i=0;i<26;i++){
            if(target[i]>source[i]){
                return false;
            }
        }
        return true;
    }
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> target=vector(26,0);
         vector<int> temp;
        for(auto &second : words2){
           temp = vector(26,0);
            for(auto &c : second){
                temp[c-'a']++;
                target[c-'a'] = max(temp[c-'a'],target[c-'a']);
            }
        }
        
        for(auto &first: words1){
            temp = vector(26,0);
            for(auto &c : first){
                 temp[c-'a']++;
            }
            
            if(cal(temp,target)){
                ans.push_back(first);
            }
        }
        
        return ans;
    }
};