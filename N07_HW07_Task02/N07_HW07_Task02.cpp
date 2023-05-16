// N07_HW07_Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<set>
#include<list>
#include<algorithm>
#include <iterator>

template <class T>
void print_container(T a) {

    //for (const auto & elem : a)
        //std::cout << elem << " ";

    typename T::iterator i = a.begin(); 
    while (i != a.end()) 
    {
        std::cout << *i << std::endl;
        i++; 
    }

    std::cout << std::endl;
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four one three two. помните почему такой порядок? :)

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four
}

