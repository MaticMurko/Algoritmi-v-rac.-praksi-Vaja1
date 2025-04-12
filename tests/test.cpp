#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

// Include the functions from your code
#include "Vaja1.cpp"

void test_min() {
    vector<int> v = {4, 2, 9, -1};
    assert(min(v) == -1);
}

void test_max() {
    vector<int> v = {4, 2, 9, -1};
    assert(max(v) == 9);
}

void test_prirediPlus() {
    vector<int> v = {4, 2, 9};
    prirediPlus(v, 2);
    assert(v[0] == 2);
    assert(v[1] == 0);
    assert(v[2] == 7);
}

int main() {
    test_min();
    test_max();
    test_prirediPlus();
    cout << "All tests passed ✅" << endl;
    return 0;
}
