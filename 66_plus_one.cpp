class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        bool flag=true;
        while(n>=0&&flag){
            int temp=digits[n]+1;
            if(temp>9){
                digits[n]=0;
                n--;
            }
            else{
                digits[n]=temp;
                flag=false;
            }
        }
        if(flag){
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};