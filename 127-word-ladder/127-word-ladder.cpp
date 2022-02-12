class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();
        unordered_set<string>s;
        bool ispresent = false;        
        //push all strings in set, also make ispresent true if endword is present in wordlist
        for(auto &i : wordList){
            if(i == endWord)
                ispresent = true;
            s.insert(i);
        }            
        //if endword is not present in wordlist then return 0
        if(!ispresent) return 0;        
        //initialize the queue and push beginword
        queue<string>q;
        int lsize = 0, depth = 0;
        q.push(beginWord);        
        while(!q.empty()) {
            int lsize = q.size();
            depth++;
            while(lsize--) {
                string curr = q.front();
                q.pop();
                for(int i = 0; i < curr.size(); i++) {
                    string temp = curr;
                    for(char c = 'a'; c <= 'z'; c++) {
                        temp[i] = c;
                        if(curr.compare(temp) == 0)  continue; //skip the same word 
                        if(endWord.compare(temp) == 0) return depth+1;//endword found
                        else{
                            if(s.find(temp) != s.end()) {
                                q.push(temp);
                                s.erase(temp);
                            }
                        }
                    }
                }
            }
        }
        return 0;     
    }
};