
#include "RPN.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    std::string expression(argv[1]);
    try
    {
        RPN rpn(expression);
        std::cout << rpn.getResult() << std::endl;
    }
    catch( std::exception & e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
