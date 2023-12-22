#include <vector>
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void task1(vector<double>& v)
{
    double sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += v[i];

    double data = sum / v.size();
    v.push_back(data);
}

template <class T>
void print_vector(const vector<T>& v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
    cout << endl;
}

template <class T>
void print_list(list<T> l)
{
    typename list<T>::iterator it = l.begin();
    while (it != l.end())
    {
        cout << *(it) << ' ';
        it++;
    }
    cout << endl;
}

list<int> even_numbers_in_vector(const vector<int>& v)
{
    list<int> evens;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
            evens.push_back(v[i]);
    }
    return evens;
}

vector<int> even_numbers_in_list(list<int>& l)
{
    vector<int> result;
    list<int>::iterator it = l.begin();
    while (it != l.end())
    {
        if (*it % 2 == 0)
            result.push_back(*it);
        it++;
    }
    return result;
}

void print_permutations(string line)
{
    while (next_permutation(line.begin(), line.end()))
        cout << line << ' ';
    cout << endl;
}

int main()
{
    /*vector<double> v = { 10, 15, 40, -20 };
    task1(v);
    print_vector(v);*/

    vector<int> v = { 0, -1, -3, -5, 1, 2, 3, 5, 6, 7, 0, 8, 9, 10, 0, 0, 0 };
    list<int> evens = even_numbers_in_vector(v);
    print_list(evens);

    cout << count(v.begin(), v.end(), 0) << endl;
    cout << count_if(v.begin(), v.end(), [](int num) {return num > 0; }) << endl;

    /*list<int> l = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v = even_numbers_in_list(l);
    print_vector(v);*/

    print_permutations("abcd");

}
