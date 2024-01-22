#ifndef PmergeMe_hpp
#define PmergeMe_hpp

#include <sstream>
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <list>

const int K = 5;

class VectorMergeInsertSort
{
    private:
        std::vector<int> _vect;
    
    public:
        VectorMergeInsertSort(std::string str);
        void insertionSort(int p, int r);
        void merge(int p, int q, int r);
        void sort( int p, int r);
        size_t size();
        class ErrorVect : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error");
                }
        };



};

class ListMergeInsertSort
{
    private:
        std::list<int> _lst;
    
    public:
        ListMergeInsertSort(std::string str);
        void insertionSort(std::list<int>::iterator p, std::list<int>::iterator r);
        void merge(std::list<int>::iterator p, std::list<int>::iterator q, std::list<int>::iterator r);
        void sort(std::list<int>::iterator p, std::list<int>::iterator r);
        size_t size();
        class ErrorLst : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Error");
                }
        };
};
#endif
