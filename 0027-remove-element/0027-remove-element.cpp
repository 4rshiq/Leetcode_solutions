class Solution {
public:
    int removeElement(vector<int>& arr, int val) 
    {   
        int x =0, len = arr.size();
        for (int i = 0; i < len; i++ )
        {
            if(arr[i] != val)
            {
                arr[x] = arr[i];
                x++;
            }
        }
        return x;
    }
};