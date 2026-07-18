class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        string str1=strs[0];
        for(int i=0;i<strs[0].size();i++){
            bool flag=true;
            for(int j=1;j<strs.size();j++){
                if(str1[i]!=strs[j][i]){
                    flag=false;
                    return result;
                }
            }
            if(flag){
                result.push_back(str1[i]);
            }
        }
        return result;
    }
};