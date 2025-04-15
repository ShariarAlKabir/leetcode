// 20. Valid Parentheses
#include <iostream>
#include <stack>
#include <string>

using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> Stack;
        for (char ch : s)
        {

            if (ch == '(' || ch == '{' || ch == '[')
            {
                Stack.push(ch);
            }
            else if(Stack.empty()) return false;
            else if ((ch == ')' && Stack.top() == '('))
                Stack.pop();
            else if (ch == '}' && Stack.top() == '{')
                Stack.pop();
            else if (ch == ']' && Stack.top() == '[')
                Stack.pop();
            else
                return false;
        }
        if (Stack.empty())
            return true;
        return false;
    }
};