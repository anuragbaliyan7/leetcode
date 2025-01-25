int searchInsert(int* nums, int numsSize, int target) {
    int k=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
           k=i; return k;
        }
       else if (nums[i] > target) {
             k=i;
           return k;
        }
  
    }
 return numsSize;  
}