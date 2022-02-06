#include <iostream>
#include "BracketCheck.hpp"

using namespace std;

bool check(string , string , bool );

int main()
{
    check ("Easy", "()", true);
    check ("Not Matched", "(}", false);
    check ("Mixed but valid", "({}[])", true);
    check ("Too Many Closing", "({}[])]", false);
    check ("Not Matched", "({)(})", false);
    check ("Too Many Opening", "{()", false);
    check ("Code", "if (num == 7) { cout << num; }", true);
    check ("Bad Code", "if (num == 7)  cout << num; }", false);
    check ("hmm test", "bool Palindrome::isPalindrome() const{string clean = stripSentence();stack<char>s;queue<char>q;for(char c: clean){s.push(c);q.push(c);}while(!s.empty() || !q.empty()){if(s.top() != q.front()){return false;}s.pop();q.pop();}return true;}", true);

    return 0;
}

bool check(string name, string expression, bool shouldBe){
    BracketCheck b(expression);
    if(shouldBe == b.isBalanced()){
        cout << "Passed: " << name << endl;
        return true;
    }
    else{
        cout << "Failed: " << name << " " << b << endl;
    }

    return false;
}
