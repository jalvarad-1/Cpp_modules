#include "PmergeMe.hpp"

size_t VectorMergeInsertSort::size()
{
    return this->_vect.size();
}

size_t ListMergeInsertSort::size()
{
    return this->_lst.size();
}

VectorMergeInsertSort::VectorMergeInsertSort(std::string str)
{
    std::istringstream iss(str);
    int number;

    while (iss >> number)
    {
        if (std::find(_vect.begin(), _vect.end(), number) != _vect.end()) 
            throw ErrorVect();
        _vect.push_back(number);
    }

    int n = _vect.size();
    std::cout << "Before:";
    for (int i = 0; i < n; i++) {
        std::cout << " " << _vect[i];
    }
    std::cout << std::endl;

    sort(0, n - 1);

    std::cout << "After:";
    for (int i = 0; i < n; i++) {
        std::cout << " " <<_vect[i];
    }
    std::cout << std::endl;

}

ListMergeInsertSort::ListMergeInsertSort(std::string str)
{
    std::istringstream iss(str);
    int number;

    while (iss >> number)
    {
        if (std::find(_lst.begin(), _lst.end(), number) != _lst.end()) 
            throw ErrorLst();
        _lst.push_back(number);
    }
    /*std::cout << "Before:";
    for (std::list<int>::iterator it = _lst.begin(); it != _lst.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;*/
    sort(_lst.begin(), --_lst.end());

    /*std::cout << "After:";
    for (std::list<int>::iterator it = _lst.begin(); it != _lst.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;*/
}

void VectorMergeInsertSort::insertionSort(int p, int r)
{
    for (int i = p; i < r; i++) {
        int tempVal = _vect[i + 1];
        int j = i + 1;
        while (j > p && _vect[j - 1] > tempVal) {
            _vect[j] = _vect[j - 1];
            j--;
        }
        _vect[j] = tempVal;
    }
}

void ListMergeInsertSort::insertionSort(std::list<int>::iterator p, std::list<int>::iterator r)
{
    if (p == r)
        return;
    
    std::list<int>::iterator i, j;
    for (i = p; i != r; ++i) {
        int tempVal = *i;
        j = i;

        while (j != p && *std::prev(j) > tempVal)
        {
            *j = *std::prev(j);
            --j;
        }
        *j = tempVal;
    }
}

void VectorMergeInsertSort::merge(int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    std::vector<int> LA(_vect.begin() + p, _vect.begin() + q + 1);
    std::vector<int> RA(_vect.begin() + q + 1, _vect.begin() + r + 1);

    int RIDX = 0, LIDX = 0;
    for (int i = p; i <= r; i++)
    {
        if (RIDX == n2)
            _vect[i] = LA[LIDX++];
        else if (LIDX == n1)
            _vect[i] = RA[RIDX++];
        else if (RA[RIDX] > LA[LIDX])
            _vect[i] = LA[LIDX++];
        else
            _vect[i] = RA[RIDX++];
    }
}

void ListMergeInsertSort::merge(std::list<int>::iterator p, std::list<int>::iterator q, std::list<int>::iterator r)
{
    std::list<int> left(p, std::next(q, 1));
    std::list<int> right(std::next(q, 1), std::next(r, 1));

    std::list<int> merged;
    merged.merge(left);
    merged.merge(right);

    std::copy(merged.begin(), merged.end(), p);
}

void VectorMergeInsertSort::sort(int p, int r)
{
    if (r - p > K)
    {
        int q = (p + r) / 2;
        sort(p, q);
        sort(q + 1, r);
        merge(p, q, r);
    }
    else
        insertionSort(p, r);
}

void ListMergeInsertSort::sort(std::list<int>::iterator p, std::list<int>::iterator r) {

    if (std::distance(p, r) > K)
    {
        std::list<int>::iterator q = p;
        std::advance(q, std::distance(p, r) / 2);
        sort(p, q);
        sort(std::next(q), r);
        merge(p, q, r);
    }
    else
        insertionSort(p, std::next(r));
}
