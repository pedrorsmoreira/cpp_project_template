#include <iostream>
#include "dummy_counter.h"

int main()
{
    DummyCounter counter(15);
    std::cout << __cplusplus << std::endl;
    std::cout << "testing output" << std::endl;

    while (counter.Current() < 23)
    {
        std::cout << "Current is at " << counter.Current() << ". Incrementing..." << std::endl;
        counter.Inc();
    }

    std::cout << "end" << std::endl;

    return 0;
}