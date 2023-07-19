STATIC_YOINK("blink_linux_aarch64");  // for raspberry pi
STATIC_YOINK("blink_xnu_aarch64");    // is apple silicon
#include <string>
#include <iostream>
#include <istream>
#include <ostream>
#include <iterator>
#include <cosmo.h>
#include "base64.h"
int main()
{
        // don't skip the whitespace while reading
    std::cin >> std::noskipws;

    // use stream iterators to copy the stream to a string
    std::istream_iterator<char> it(std::cin);
    std::istream_iterator<char> end;
    std::string results(it, end);

    std::cout << "\x1b]52;c;" << macaron::Base64::Encode(results) << "\x07";
    

}