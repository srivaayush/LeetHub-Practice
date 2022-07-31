class NumArray {
    vector<int>v;
    int sum;
public:
    NumArray(vector<int>& nums) {
        sum=0;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
            sum+=nums[i];
        }
    }
    
    void update(int index, int val) {
        sum-=v[index];
        v[index]=val;
        sum+=v[index];
    }
    
    int sumRange(int left, int right) {
        int sum1=sum;
        for(int i=0;i<left;i++){
            sum1-=v[i];
        }
        for(int i=right+1;i<v.size();i++){
            sum1-=v[i];
        }
        return sum1;
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */