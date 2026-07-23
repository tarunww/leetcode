class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writeIndex = 0;
      
        for (int currentElement : nums) {
            if (currentElement != val) {
                nums[writeIndex] = currentElement;
                writeIndex++;
            }
        }
      
        return writeIndex;
    }
};
