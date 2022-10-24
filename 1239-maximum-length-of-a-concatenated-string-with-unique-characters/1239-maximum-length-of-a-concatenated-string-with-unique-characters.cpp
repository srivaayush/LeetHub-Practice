class Solution {
public:
    bool compare(vector<int>& selected, string& currstring){
        vector<int> selfcheck(26,0);
        for(int i=0;i<currstring.size();i++){
            if(selfcheck[currstring[i]-'a']==1) return false;
            selfcheck[currstring[i]-'a']=1;
        }
        for(int i=0;i<currstring.size();i++){
            if(selected[currstring[i]-'a']==1) return false;
        }
        return true;
    }
    
    int helper(int i, vector<string>& arr, vector<int> &selected, int len){
        if(i==arr.size()){
            return len;
        }
        string currstring = arr[i];
        if(compare(selected, currstring) == false){
            return helper(i+1,arr,selected,len);
        }
        else {
            for(int j=0;j<currstring.size();j++){
                selected[currstring[j]-'a']=1;
            }
            len+=currstring.size();
            int op1=helper(i+1,arr,selected,len);
            for(int j=0;j<currstring.size();j++){
                selected[currstring[j]-'a']=0;
            }
            len-=currstring.size();
            int op2=helper(i+1,arr,selected,len);
            return max(op1,op2);
        }
    }
    
    int maxLength(vector<string>& arr) {
        vector<int> selected(26,0);
        return helper(0,arr,selected,0);
    }
};