class Solution {
private:
    vector<string> breakWord(string st){
        // int n=st.size();
        st.push_back(' ');
        vector<string> v;
        string str="";
        for(auto &x:st){
            if(x==' '){
                v.push_back(str);
                str="";
            }
            else
                str.push_back(x);
        }
        return v;
    }
public:
    bool areSentencesSimilar(string s1, string s2) {
        vector<string> v1=breakWord(s1);
        vector<string> v2=breakWord(s2);
        int n1=v1.size();
        int n2=v2.size();
        // cout<<n1<<"  "<<n2;
        if(n1==n2 && v1==v2)
            return true;
        else if(n1 > n2){
            int i=0,k=0;
            while(i<n2){
                if(v1[i]!=v2[i])
                    break;
                i++;k++;
            }
            int j=n2-1,p=n1-1;
            while(j>=i){
                if(v1[p]!=v2[j])
                    break;
                j--;k++;p--;
            }
            return(k==n2);
        }
        else{
            int i=0,k=0;
            while(i<n1){
                if(v1[i]!=v2[i])
                    break;
                i++;k++;
            }
            int j=n2-1,p=n1-1;
            while(p>=i){
                if(v1[p]!=v2[j])
                    break;
                j--;k++;p--;
            }
            return(k==n1);
        }        
    }
};