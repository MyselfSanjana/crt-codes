//gfg ques, Max Sum Subarray of size K

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i= 0;
        int j = 0;  
        int n = arr.size();
        int curr_sum = 0;
        int max_sum = INT_MIN;
        while(j<n){
            curr_sum += arr[j];
            if(j-i+1 < k){
                j++;
            }else if(j-i+1 == k){
                max_sum = max(max_sum,curr_sum);
                curr_sum -= arr[i];
                i++;
                j++;
            }
        }
        return max_sum;
    }
};