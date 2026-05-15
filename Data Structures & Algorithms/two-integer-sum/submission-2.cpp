class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        vector<int> v = nums;
        
        
        if(nums.size()==2){
                result[0]=0;
                result[1]=1;
                return result;
            }
        else {

        for (int i=0;i<nums.size();i++){
            int y = target - nums[i];

            auto it = find(v.begin()+i+1, v.end(), y);
            
            if(it!=v.end() and i != (it-v.begin())){
                result[0]=i;
                result[1]=(it - v.begin());
                break;
            }
            
            
        }
        }
        return result;
    }
};
