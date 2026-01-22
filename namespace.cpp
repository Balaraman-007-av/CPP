#include <iostream>
#include <string>
using namespace std;
namespace cse{
    string str="Welcome to our CSE department";
}

namespace ece{
    string str="Welcome to our ECE department";
}

namespace aids{
    string str="Welcome to our AIDS department";
}

int main()
{
    std::cout<<cse::str<<std::endl;
    std::cout<<ece::str<<std::endl;
    std::cout<<aids::str<<std::endl;
}