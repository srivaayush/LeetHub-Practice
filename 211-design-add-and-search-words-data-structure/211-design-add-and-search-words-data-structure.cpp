class WordDictionary {
private:
    map<int,vector<string>> m;
    bool searchs(string word,string st,int n){
        for(int i=0;i<n;i++){
            if(word[i]=='.')continue;
            else{
                if(st[i]!=word[i])
                    return false;
            }
        }
        return true;
    }
public:
    WordDictionary() {}
    
    void addWord(string word) {
        m[word.size()].push_back(word);
    }
    
    bool search(string word) {
        int n=word.size();
        for(auto &x:m[n]){
            if(searchs(word,x,n)==true)
                return true;
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */