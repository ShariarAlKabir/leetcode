class Solution {
public:
    int mySqrt(int x) {
        int cpyx=x;
        long long start=1;
        while(x>3){
            start*=2;
            x/=4;
        }
        while(true){
            long long res=start*start;
            if(res>cpyx) return --start;
            start++;
        }
    }
};