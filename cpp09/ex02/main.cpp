
#include"PmergeMe.hpp"
int main(int argc, char **argv) {
    
    if (argc < 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    std::string concatenatedArgs;
    for (int i = 1; i < argc; ++i) {
        concatenatedArgs += argv[i];
        concatenatedArgs += " ";
    }
    for (std::size_t i = 0; i < concatenatedArgs.size(); ++i) {
        if (!std::isdigit(concatenatedArgs[i]) && concatenatedArgs[i] != ' ') {
            std::cerr << "Error" << std::endl;
            return 1;
        }
    }
    try
    {
        clock_t v_start = clock();
        VectorMergeInsertSort vect(concatenatedArgs);
        clock_t v_end = clock();

        clock_t l_start = clock();
        ListMergeInsertSort lst(concatenatedArgs);
        clock_t l_end = clock();

        double elapsed_time = static_cast<double>(v_end - v_start) / CLOCKS_PER_SEC * 1000.0;
        std::cout << "Time to process a range of " << vect.size();
        std::cout << " elements with std::vector : " << elapsed_time << " ms"<< std::endl;

        elapsed_time = static_cast<double>(l_end - l_start) / CLOCKS_PER_SEC * 1000.0;
        std::cout << "Time to process a range of " << lst.size();
        std::cout << " elements with std::vector : " << elapsed_time << " ms"<< std::endl;
    }
    catch( std::exception & e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
