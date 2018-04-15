//https://www.boost.org/doc/libs/1_67_0/more/getting_started/unix-variants.html
//(4 Build a Simple Program Using Boost)

#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );
}
