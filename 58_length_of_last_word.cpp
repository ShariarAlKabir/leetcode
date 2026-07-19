class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        // if(n==1){
        //     if(s[0]==' '){
        //         return 0;
        //     }
        //     return 1;
        // }
        int end=n-1;
        while(s[end]==' '){
            end--;
        }
        int start=end;
        while(s[start]!=' '&&start!=0){
            start--;
        }
        return end-start+(start==0&&s[start]!=' ');

    }
};