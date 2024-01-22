#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
    private:
        std::string _expression;
        int _result;
    public:
        RPN(std::string expression);
        int reversePolishNotation(std::string &expression);
        int getResult(void);
        class ErrorRPN : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error");
                }
        };
};
#endif
