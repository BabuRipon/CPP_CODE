#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isBalanced(string exp) 
{
  stack<char> s;

  for(int i=0;i<exp.size();i++){
      if(exp[i]=='{'||exp[i]=='('||exp[i]=='['){
          s.push(exp[i]);
      }
      else if(exp[i]==']'){
          if(s.empty()) return false;
          else if(s.top()!='[') return false;
          else s.pop() ;
      }
      else if(exp[i]==')'){
          if(s.empty()) return false;
          else if(s.top()!='(') return false;
          else s.pop() ;
      }
      else if(exp[i]=='}'){
          if(s.empty()) return false;
          else if(s.top()!='{') return false;
          else s.pop() ;
      }
    
  }

  return s.empty();

}

int main() 
{
    string input;
    cin >> input;
    cout <<(isBalanced(input)? "true" : "false");
}