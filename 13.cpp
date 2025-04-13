#include <stdio.h>
using namespace std;
#include <string>
#include <vector>
class Solution {
    public:
        vector<char> reverseString(string s){
            vector<char> v;
            for(int i = 0; i < s.size(); i++){
                v.push_back(s[s.size() - 1 - i]);
            }
            return v;
        }
        int romanToInt(string s) {
            vector<char> v;
            v=reverseString(s);
            int current_max=0;
            int result=0;
            for(int i=0;i<v.size();i++){
                if(v[i]=='I'){
                    if(current_max>1){
                        result-=1;
                    }else{
                        result+=1;
                    }
                    current_max=1;
                }else if(v[i]=='V'){
                    if(current_max>5){
                        result-=5;
                    }else{
                        result+=5;
                    }
                    current_max=5;
                }else if(v[i]=='X'){
                    if(current_max>10){
                        result-=10;
                    }else{
                        result+=10;
                    }
                    current_max=10;
                }else if(v[i]=='L'){
                    if(current_max>50){
                        result-=50;
                    }else{
                        result+=50;
                    }
                    current_max=50;
                }else if(v[i]=='C'){
                    if(current_max>100){
                        result-=100;
                    }else{
                        result+=100;
                    }
                    current_max=100;
                }else if(v[i]=='D'){
                    if(current_max>500){
                        result-=500;
                    }else{
                        result+=500;
                    }
                    current_max=500;
                }else if(v[i]=='M'){
                    if(current_max>1000){
                        result-=1000;
                    }else{
                        result+=1000;
                    }
                    current_max=1000;
                }
            }
            return result;
        }
    };