int removeDuplicates(int* nums, int numsSize) {
    int uniquevalue = 0;
    for(int i=1;i< numsSize;i++){
        if(nums[i]!=nums[uniquevalue]) nums[++uniquevalue]=nums[i];
    }
    return ++uniquevalue;
}