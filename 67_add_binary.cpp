class Solution {
    int getnum(string str,int index){
        if(str[index]=='1') return 1;
        return 0;
    }
    int get_sum(int x,int y,int z){
        int sum=x+y+z;
        if(sum%2==1) return 1;
        return 0;
    }
    int get_carry(int x,int y,int z){
        int sum=x+y+z;
        if(sum>1) return 1;
        return 0;
    }
public:
    string addBinary(string a, string b) {
        int carry=0;
        int n1=a.size()-1;
        int n2=b.size()-1;
        string result="";
        while(n1>=0||n2>=0){
            if(n1<0){
                int sum=get_sum(getnum(b,n2),carry,0);
                carry=get_carry(getnum(b,n2),carry,0);
                if(sum){
                    result="1"+result;
                }
                else{
                    result="0"+result;
                }
            }else if(n2<0){
                int sum=get_sum(getnum(a,n1),carry,0);
                carry=get_carry(getnum(a,n1),carry,0);
                if(sum){
                    result="1"+result;
                }
                else{
                    result="0"+result;
                }
            }
            else{
                int sum=get_sum(getnum(a,n1),carry,getnum(b,n2));
                carry=get_carry(getnum(a,n1),carry,getnum(b,n2));
                if(sum){
                    result="1"+result;
                }
                else{
                    result="0"+result;
                }
            }
            n1--;
            n2--;
        }
        if(carry){
            result="1"+result;
        }
        return result;

    }
};