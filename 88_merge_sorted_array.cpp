class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>newArray;
        int i=0,j=0;
        while(i<m || j<n){
            if(j==n){
                newArray.push_back(nums1[i]);
                i++;
                continue;
            }
            else if(i==m){
                newArray.push_back(nums2[j]);
                j++;
                continue;
            }
            
            if(nums1[i]<nums2[j]){
                newArray.push_back(nums1[i]);
                i++;
            }
            else{
                newArray.push_back(nums2[j]);
                j++;
            }
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=newArray[i];
        }
    }
};

