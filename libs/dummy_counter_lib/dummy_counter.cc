#include "dummy_counter.h"

DummyCounter::DummyCounter(int val)
    : mCounter(val)
{ }

void DummyCounter::Inc()
{
    ++mCounter;
}

int DummyCounter::Current()
{
    return mCounter;
}