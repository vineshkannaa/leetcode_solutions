class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0,j=0;i<nums.size();i++){
	        if(nums[i]!=val){
	            k++;
	            nums[j]=nums[i];
	            j++;
            
	        }
	
	    }
	    return k;
    }
};