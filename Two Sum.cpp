class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j=0;
        vector<int>result;
        while(j < nums.size()-1)
        {
            i= j+1;
            while(i < nums.size())
            {
                if(nums[j] + nums[i] == target)
            {

                result.push_back(j);
                result.push_back(i);
                break;
            }
                i++;
            }

            j++;
        }

        return result;
    }
};
