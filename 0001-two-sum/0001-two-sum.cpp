class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> m;
        vector<int>ans; //for storing ans
        for(int i=0; i<nums.size(); i++) 
        {   
            int first = nums[i], second = target -nums[i];
            if(m.find(second) != m.end()) // trying to look for the second number in the map
            {
                ans.push_back(i);
                ans.push_back(m[second]);
                break;            
            }
            m[first]=i; //storing the index and value of first for later compliment
        }
        return ans;
    }
};