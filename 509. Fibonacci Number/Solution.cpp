//https://leetcode.com/problems/fibonacci-number/description/?envType=study-plan&id=level-1

class Solution {
public:
   
    int fib(int n) {
      if(n==0 || n==1) return n;
      int ans=0;
      int a=0;
      int b=1;
      for(int i=1;i<n;i++){
          ans=a+b;
          a=b;
          b=ans;
      }
      return ans;
    }
};
