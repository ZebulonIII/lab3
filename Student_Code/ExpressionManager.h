#pragma once
#include "ExpressionManagerInterface.h"

using namespace std;

class ExpressionManager : public ExpressionManagerInterface {
private:
    
public:
    ExpressionManager() {}
    bool isBalanced(string);
    string postfixToInfix(string);
    string infixToPostfix(string);
    string postfixEvaluate(string);
};
