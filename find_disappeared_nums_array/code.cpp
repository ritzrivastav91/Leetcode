class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> temp;
        bool flag;
        
        //Fast would be first sort and remove duplicates and check for missing number
        
        for(int i=1; i<=size; i++){
            flag = true;
            for (int j=0;j<size;j++){
                if(i==nums[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) temp.push_back(i);
        }
        return temp;
                
    }
};
