#include "dfl/dfl.hpp"

using namespace dfl;
int main() {
    auto generator = gen::range(10);
    auto modified_generator = 
        mod::take  (100, 
        mod::repeat(generator));
    
    auto pipeline
    =   pipe::stride(2)
    >>= pipe::transform([](auto i){ return i*i; });

    auto sink = sink::print("\n");

    modified_generator >>= pipeline >>= sink;
}
