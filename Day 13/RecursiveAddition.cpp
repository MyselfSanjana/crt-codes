class Solution {
    void print(int n,int &sum){
        //base case
        if(n==0){
            return;
        }
        //recursive case
        int res = n%10;  //last digit
        sum += res;
        print(n/10,sum);
    }
  public:
    int sumOfDigits(int n) {
        int sum = 0;
        print(n,sum);
        return sum;
    }
};
