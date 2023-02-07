class Solution {
public:
    double myPow(double x, long long int n) {
     double y;
     if(n<0)
     return myPow(1/x,abs(n));
     if(n==0||x==1)
     return 1;
      return (n%2==0 ? myPow(x*x,n/2) : x*myPow(x*x,n/2));
     
    }
};