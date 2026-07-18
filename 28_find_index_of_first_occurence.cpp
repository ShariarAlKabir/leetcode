class Solution {
public:
    int strStr(string haystack, string needle) {
        int result=-1;
        for(int i=0;i<haystack.size();i++){
            int temp=-1;
            if(haystack[i]==needle[0]){
                temp=i;
                bool flag=true;
                for(int j=0;j<needle.size();j++){
                    if(haystack[i]==needle[j]){
                        i++;
                    }
                    else{
                        flag=false;
                        i=temp;
                        break;
                    }
                }
                if(flag) return temp;
            }
        }
        return result;

        
    }
};