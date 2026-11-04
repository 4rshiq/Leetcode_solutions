class Solution {
public:
    void moveZeroes(vector<int>& a) 
    {
        int left =0, len = a.size();
        for(int right =0; right <len; right++)
        {
            if(a[right] != 0)
            {
                swap(a[right],a[left]);
                left++;
            }
        }
        return;
    }
};