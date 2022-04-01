class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.size();
        int n2=needle.size();
        // bool ans=false;
        // deque<char>
        
        int i=0;
        for(i=0;i<n1;i++){
            string cut=haystack.substr(i,n2);
            if(cut==needle)return i;
        }
        return -1;
    }
};