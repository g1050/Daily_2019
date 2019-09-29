#ifndef _EXP_H_
#define _EXP_H_

#include <string>
#include "stack.hpp"
#include <vector>
#include <ctype.h>
using namespace std;

class Exp
{
public:
    Exp(string s) {
        this->s = s;
    }
    ~Exp() {}
    bool ifLegal();
    void toPostfix();
    int getPriority(char c);
    int getValue();
private:
    string s;
    vector <char> v;
};

int Exp::getValue()
{
    int size = v.size();
    stack <int> st;
    for(int i = 0;i<size;i++){
        if(isalnum(v[i])){
            int res = v[i]-48;
            while(i+1 < size && isalnum(v[i+1])){//处理两位数及两位数以上 后面必接一个#
                res *= 10;
                res += (v[++i]-48);
            }
            /* cout << res << endl; */
            st.push(res);
            i++;//跳过#
        }else{
            if(v[i] == '+'){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                int res = top1 + top2;
                /* cout << res << endl; */
                st.push(res);
            }else if(v[i] == '-'){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                int res = top2 - top1;
                st.push(res);
                /* cout << res << endl; */
            }else if(v[i] == '*'){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                int res = top1 * top2;
                st.push(res);
                /* cout << res << endl; */
            }else if(v[i] == '/'){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                int res = top2 /  top1;
                st.push(res);
                /* cout << res << endl; */
            }
        }
    }
    return st.top();
}
int Exp::getPriority(char c)
{
    if(c == '(')    return 1;
    if(c == '+' || c == '-') return 2;
    else  return 3;
}
bool Exp::ifLegal()
{
    int cnt = 0;
    int size = s.size();
    
    if(s[0] == '/' || s[0] == '*')
        return false;
    if(s[size-1] == '/' || s[size-1] == '*') 
        return false;

    for(int i = 0;i<size;i++){
        if(s[i] == '('){
            if(i+1 < size && s[i+1] == ')')
                return false;
            cnt++;
        }
        else if(s[i] == ')') cnt--;
        else if(s[i] == '/'){// /0 /*
            if(i+1 < size && (s[i+1] == '0' || s[i+1] == '*'))
                return false;
        }
        else if(s[i] == '*'){
            if(i+1 <  size && s[i+1] == '/')
                return false;
        }
    }
    
    if(cnt) return false;

    return true;
        
}

void Exp::toPostfix()
{
   string tmp;
   stack <char> st;
   int size = s.size();
   for(int i = 0;i < size ;i++){
    
       if(isalnum(s[i])){
           v.push_back(s[i]);
           while(i+1 < size && isalnum(s[i+1])){
               v.push_back(s[++i]);
           }
           v.push_back('#');//＃隔开 12+3 后缀表达式为12#3+
       }
       else if(st.empty()){
           st.push(s[i]);
       }else{
           
           if(s[i] == '(')  st.push(s[i]);
           else if(s[i] == ')'){
               while(!st.empty() && st.top() != '('){
                   v.push_back(st.top());
                   st.pop();
               }
               st.pop();//弹出左括号
           }else{
                while(!st.empty() && getPriority(st.top()) >= getPriority(s[i])){
                    v.push_back(st.top());
                    st.pop();
                }
                st.push(s[i]);//当前操作符入栈
           }
           
           
       }
   }

   while(!st.empty()){
       v.push_back(st.top());
       st.pop();
   }

   for(int i = 0;i<(int)v.size();i++) cout << v[i];
   return ;
}
#endif

