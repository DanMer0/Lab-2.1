#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <ostream>

int main()
{
    using namespace std;
    std::vector<int> vec = { 10, 12, -5, 24, -32, -56, 100, -345 };
    std::vector<int> vec_positive;
    {
        std::ofstream file("file.txt");
        for (int i = 0; i < vec.size(); ++i)
            if (vec[i] < 0)
                file << vec[i] << ' ';
            else if (vec[i] > 0)
                vec_positive.push_back(vec[i]);
        std::copy(vec_positive.begin(), vec_positive.end(), std::ostream_iterator<int>(file, " "));
    }
}