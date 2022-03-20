class Solution {
public:
    int countHillValley(vector<int>& a) {
        int n=a.size();
        int ans=0;
        
        for(int i=1;i<n-1;i++){
            if(a[i]==a[i-1])continue;
            int g=0,l=0;
            
            int j=i-1;
            while(j>=0 && a[j]==a[i]){
                j--;
            }
            if(j!=-1 && a[i]<a[j]){
                // if(i==3)cout<<j<<"   "<<a[i]<<"   "<<a[j]<<"  ";
                l++;
            }
            if(j!=-1 && a[i]>a[j]){   
                // if(i==3)cout<<j<<"   "<<a[i]<<"   "<<a[j]<<"   ";
                g++;
            }
            
            j=i+1; 
            while(j<n && a[j]==a[i]){
                j++;
            }
            
            
            if(l==1 && j<n && a[i]<a[j]){
                // if(i==3)cout<<j<<"   "<<a[i]<<"   "<<a[j];
                l++;
            }
            if(g==1 && j<n && a[i]>a[j]){
                // if(i==3)cout<<j<<"   "<<a[i]<<"   "<<a[j];
                g++;
            }
            
            if(g==2 || l==2){
                ans++;
            }
        }
        return ans;
    }
};