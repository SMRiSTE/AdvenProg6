﻿#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec = { 1, 1, 2, 5, 6, 1, 2, 4 };

    std::sort(vec.begin(),vec.end());
    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());

    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
}