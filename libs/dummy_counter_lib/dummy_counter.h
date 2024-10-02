#ifndef DUMMY_COUNTER
#define DUMMY_COUNTER

class DummyCounter {
public:
    DummyCounter(int start);
    void Inc();
    int Current();
private:
    int mCounter;
};

#endif