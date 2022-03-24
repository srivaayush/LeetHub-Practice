class Solution {
public:
    int numRescueBoats(vector<int>& p, int lim) {
        sort(p.begin(), p.end());
int n=p.size();
        int ans=0;int keep=0;
        int l=0, r=n-1;int vis=n;
        while(l<r){
            if(p[l]>=lim){
                ans++;l++;
            }
            else if(p[r]>=lim){
                ans++;r--;
            }
            else if ((p[l]+p[r])>lim){
                r--;ans++;
            }
            else if((p[l]+p[r])<=lim){ 
                l++; r--; ans++;
                vis--;
            }
            vis--;
        }
        
        if(vis!=0)ans++;
        return ans;
    
    }
};