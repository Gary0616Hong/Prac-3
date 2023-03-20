int max_sub_sum(int *nums,int length){
    if(length<1)return 0;

    int sum=0;
    int flag=0;
    int max= *nums;
    int thisSum=0;
    for(int i=0;i<length;i++){
        if(nums[i]<0){
            flag++;
        }
        if(max<nums[i]){
            max=nums[i];
        }
        thisSum+=nums[i];
        if(thisSum>sum){
            sum=thisSum;
        }
        else if(thisSum<0){
            thisSum=0;
        }
    }

    if(flag==length)return 0;
    return sum;
}