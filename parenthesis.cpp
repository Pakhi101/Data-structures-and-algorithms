#include<iostream>
#include<stack>
#include<string>
using namespace std; 

    bool isValid(string s) {
    stack<char>s1;
    int i=0;
    int j=s.length();
    int flag=0;
    while(i<j)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            s1.push(s[i]);
            i++;
        }
        else if(s1.empty() &&(s[i]==')'||s[i]=='}'||s[i]==']'))
                return false;
        else
        {
            if(s[i] ==')')
            {
                if(!s1.empty() && s1.top()=='(' )
                    s1.pop();
                else
                    return false;
                   
            }
            else if(s[i] =='}')
            {
                 if(!s1.empty() && s1.top()=='{' )
                    s1.pop();
                else
                    return false;
            }
            else if(s[i] ==']')
            {
                 if(!s1.empty() && s1.top()=='[' )
                    s1.pop();
                else
                    return false;
            }
            
            i++;
        }  
        
    }
    if(s1.empty()==1)
        return true;
    else
       return false;
    }

int main()
{
    string s="()";
    stack<char>s1;
    int i=0;
    int j=s.length();
    int flag=0;
    cout<<isValid(s);
}


    /*
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> hash;
        hash['('] = ')';
        hash['{'] = '}';
        hash['['] = ']';
        
        stack <char> par;
        
        for (int i:s) {
            if (hash.find(i) != hash.end()) 
                par.push(i);
            else if  (!par.empty() && hash[par.top()] == i ) par.pop();
            else return false;
        }
        if (par.empty()) return true;
        else return false;
    }
};
    */
