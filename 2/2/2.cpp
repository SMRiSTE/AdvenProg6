#include <iostream>
#include <set>
#include <list>
#include <vector>

template <class T>
void print_container(const T& kon) {
    for (const auto& elem : kon) {
        std::cout << elem << ", ";
    }
    std::cout << "\n";
}

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list);

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector);
}
