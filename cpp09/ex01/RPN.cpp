
#include "RPN.hpp"

RPN::RPN(std::string expression):_expression(expression)
{
    _result = reversePolishNotation(expression);
}

int RPN::getResult(void)
{
    return _result;
}

int RPN::reversePolishNotation(std::string &expression)
{
    std::string signs = "+-/*";
    std::stack<int> num_stack;

    for (size_t i = 0; i < expression.length(); i++)
    {
        if (signs.find(expression[i]) != std::string::npos)
        {
            if (num_stack.size() < 2)
                throw ErrorRPN();// not enough numbers
            int x, y, result;
            y = num_stack.top();
            num_stack.pop();
            x = num_stack.top();
            num_stack.pop();
            if (expression[i] == '+')
                result = x + y;
            else if (expression[i] == '-')
                result = x - y;
            else if (expression[i] == '/')
            {
                if (y == 0)
                    throw ErrorRPN();//0 division
                result = x / y;
            }
            else
                result = x * y;
            num_stack.push(result);
        }
        else if (isdigit(expression[i]))
        {
            num_stack.push(stoi(expression.substr(i)));
            if (isdigit(expression[i + 1]))
                throw ErrorRPN();//number > 9
        }
        else if (expression[i] != ' ')
            throw ErrorRPN();;// not a number or sign
    }
    if (num_stack.size() != 1)
        throw ErrorRPN();//not enough sign to make operations
    return num_stack.top();
}
