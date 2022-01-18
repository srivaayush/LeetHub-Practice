class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        if(n==0)return true;
        if(fb.size()==1)
        {
            if(fb[0]==0 &&n<=1)return true;
            return false;
        }
        if(fb[0]==0 && fb[1]==0)
        {
            fb[0]=1;
            n--;
        } 
        if(n==0)return true;
        for(int i=1;i<fb.size()-1;i++)
        {
            if(fb[i]==1)
                continue;
            if(fb[i-1]==0 && fb[i+1]==0)
            {
                fb[i]=1;
                n--;
            }
            if(n==0)return true;
        }
        // cout<<
        cout<<(n==1 && fb[fb.size()-1]==0 && fb[fb.size()-2]==0)<<endl;
        if((n==1 && fb[fb.size()-1]==0 && fb[fb.size()-2]==0))
        return true;
        for(auto &x :fb)cout<<x<<" ";
        return false;
        
    }
};