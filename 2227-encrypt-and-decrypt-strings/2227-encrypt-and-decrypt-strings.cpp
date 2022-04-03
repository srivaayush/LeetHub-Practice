class Encrypter {
    map<char,int> k;
    map<int,string> v;
    map<string,int> cnt;
    set<string> dic;
    map<string,int> freq;
public:
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        for(int i=0;i<keys.size();i++)k[keys[i]]=i;
        for(int i=0;i<values.size();i++)v[i]=values[i];
        
        for(auto &x:values)cnt[x]++;
        
        for(auto &x:dictionary){
            string enc=encrypt(x);
            freq[enc]++;
        }
        // dic.insert(x);        
    }
    
    string encrypt(string word1) {
        string ans="";
        for(auto &x:word1){
            int tem=k[x];
            string s=v[tem];
            ans+=s;
        }
        return ans;        
    }
    
    int decrypt(string word2) {
        // if(dic.find(word2)==dic.end())return 0;
        int ans=1;
        
        
        return freq[word2];
    }
};

/**
 * Your Encrypter object will be instantiated and called as such:
 * Encrypter* obj = new Encrypter(keys, values, dictionary);
 * string param_1 = obj->encrypt(word1);
 * int param_2 = obj->decrypt(word2);
 */