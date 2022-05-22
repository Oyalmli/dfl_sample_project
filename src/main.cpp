#include "dfl/dfl.hpp"
#include <iostream>

using namespace dfl;
int main() {
    auto range_gen = gen::range(10);
    auto pipeline
    =   pipe::stride(2)
    >>= pipe::transform([](auto i){ return i*i; })
    >>= sink::for_each([](auto i){ 
            std::cout << i << '\n'; 
        });
    range_gen >>= pipeline;
}
