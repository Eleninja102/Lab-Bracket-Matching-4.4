//
//  BracketCheck.hpp
//  Lab: Bracket Matching 4.4
//
//  Created by Coleton Watt on 2/5/22.
//

#ifndef BracketCheck_hpp
#define BracketCheck_hpp

#include <stdio.h>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;
class BracketCheck{
public:
    BracketCheck(string exp1);
    int numBrackets();
    bool isBalanced();
    friend ostream &operator << (ostream &out, BracketCheck &b);

    
private:
    string exp;
    stack<char>s;
    bool answer;
    char z;
    int size = 0;

    
    
};
#endif /* BracketCheck_hpp */
