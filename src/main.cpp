#include "dfl/dfl.hpp"

using namespace dfl;
int main() {    
    auto pipeline
    =   pipe::stride(2)
    >>= pipe::transform([](auto i){ return i*i; });

    mod::take  (100, 
    mod::repeat(gen::range(10)))
    >>= pipeline 
    >>= sink::print<'\n'>();
}
