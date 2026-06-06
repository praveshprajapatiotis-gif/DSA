long long zeroFilledSubarray(int* nums, int n) {
    long long ans=0, cnt=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            cnt++;
            ans+=cnt;
        } else cnt=0;
    }
    return ans;
}
