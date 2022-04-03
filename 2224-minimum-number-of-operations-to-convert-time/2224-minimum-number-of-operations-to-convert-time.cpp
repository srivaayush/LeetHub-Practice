class Solution {
private:
    int createTime(string s){
        string s1=s.substr(0,2);
        string s2=s.substr(3,2);
        
        // cout<<s1<<" "<<s2;
        int p1=stoi(s1);
        int p2=stoi(s2);
        return p1*60+p2;
    }
public:
    int convertTime(string current, string correct) {
        int t1=createTime(current);
        int t2=createTime(correct);
        // cout<<t1<<" "<<t2<<endl;
        int ans=0;
        while((t1+60)<=t2){
            t1=t1+60;
            ans++;
        }
        // cout<<t1<<" "<<t2<<endl;
        while((t1+15)<=t2){
            t1=t1+15;
            ans++;
        }
        // cout<<t1<<" "<<t2<<endl;
        while((t1+5)<=t2){
            t1=t1+5;
            ans++;
        }
        // cout<<t1<<" "<<t2<<endl;
        while((t1+1)<=t2){
            t1=t1+1;
            ans++;
        }
        // cout<<t1<<" "<<t2<<endl;
        return ans;
            
    }
};