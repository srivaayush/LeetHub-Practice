class Solution {
private:                   
    void fillVector(vector<int> &even,vector<int> &odd,int n,vector<int>& nums){
        for(int i=0;i<n;i++){
            if(i%2==0){
                odd[nums[i]]++;
            }
            else{
                even[nums[i]]++;
            }
        }
    }
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int> even(100001,0);vector<int> odd(100001,0);
        fillVector(even,odd,n,nums);
        
        int e1=0,ne1=0,e2=0,ne2=0;
        int o1=0,no1=0,o2=0,no2=0;
        for(int i=0;i<100001;i++){
            if(even[i]>e1){
                e1=even[i];
                ne1=i;
            }            
        }
        for(int i=0;i<100001;i++){
            if(i==ne1)continue;
            if(even[i]>e2){
                e2=even[i];
                ne2=i;
            }            
        }
        
        for(int i=0;i<100001;i++){
            if(odd[i]>o1){
                o1=odd[i];
                no1=i;
            }            
        }
        for(int i=0;i<100001;i++){
            if(i==no1)continue;
            if(odd[i]>o2){
                o2=odd[i];
                no2=i;
            }            
        }
        // cout<<no1<<"   "<<o1<<endl;
        // cout<<no2<<"   "<<o2<<endl<<endl;        
        // cout<<ne1<<"   "<<e1<<endl;        
        // cout<<ne2<<"   "<<e2<<endl;
        
        
        int c1=e1,c2=o1;
        if(ne1==no1){
            return min( ( n-o2-e1 ), (n-e2-o1));
        }
        return((n/2 - c1)+(n-n/2-c2));
    }
};