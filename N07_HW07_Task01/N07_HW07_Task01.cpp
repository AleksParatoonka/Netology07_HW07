// N07_HW07_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>

template <class T>
void remove_diblicates(std::vector<T>& vec) {
    sort(vec.begin(), vec.end());
    /*std::cout << "[Test] : ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }*/
    //std::cout << std::endl;
    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
    std::cout << std::endl;
}

/*void remove_diblicates(std::vector<int>& vec) {

    sort(vec.begin(), vec.end());
    std::cout << "[Test] : ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
    std::cout << std::endl;
}*/

int main()

{
    //std::vector<int> vec{ 4, 1, 3, 6, 25, 54 };
    std::vector<int> vec{ 1, 1, 2, 5, 6, 1, 2, 4 };

    std::cout << "[IN] : ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    remove_diblicates(vec);

    std::cout << "[OUT] : ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    //----
    /*std::cout << std::endl;

    std::vector <std::string > animals = { "dog", "lama", "cat", "cat", "dog" };
    std::cout << "[IN] : ";
    for (int i = 0; i < animals.size(); i++) {
        std::cout << animals[i] << " ";
    }
    std::cout << std::endl;

    remove_diblicates(animals);

    std::cout << "[OUT] : ";
    for (int i = 0; i < animals.size(); i++) {
        std::cout << animals[i] << " ";
    }
    std::cout << std::endl;*/

}
