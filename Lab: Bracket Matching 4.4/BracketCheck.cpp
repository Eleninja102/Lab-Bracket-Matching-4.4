//
//  BracketCheck.cpp
//  Lab: Bracket Matching 4.4
//
//  Created by Coleton Watt on 2/5/22.
//

#include "BracketCheck.hpp"

BracketCheck::BracketCheck(string exp1){
    exp = exp1;
    
}


int BracketCheck::numBrackets(){
    //int xyz = s.size();
   
    return size;
}

bool BracketCheck::isBalanced(){
    for(int i = 0; i < exp.length(); i++){
        if(exp[i] == '[' || exp[i] == '(' || exp[i] == '{'){
            //cout << exp[i];
            s.push(exp[i]);
            size+=1;
            continue;
        }

        
        if(exp[i] == ')'){
            if(s.empty()){
                answer = false;
                return false;

            }
            z = s.top();
            s.pop();
            if (z == '{' || z == '[') {
                //cout << "error";
                answer = false;
                return false;
            }
        }else if (exp[i] == '}'){
            if(s.empty()){
                answer = false;
                return false;

            }
            z = s.top();
            s.pop();
            if (z == '(' || z == '['){
                //cout << "error";
                answer = false;
                return false;
            }
        }else if (exp[i] == ']'){
            if(s.empty()){
                answer = false;
                return false;

            }
            z = s.top();
            s.pop();
            if (z == '{' || z == '('){
                //cout << "error";
                answer = false;
                return false;
            }
        }else{
            continue;
        }
    }
    //cout << "hi";
    if(s.empty()){
        //cout << "error?";
        answer = true;
        return true;
    }

    answer = false;
    return false;
}

ostream &operator << (ostream &out, BracketCheck &b){
    out << b.exp << "is ";
    if(!b.answer == true){
        out << "Not ";
    }
    out << "Balanced";
    
    return out;
}
