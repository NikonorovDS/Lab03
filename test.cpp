#include "laba3.h"

#include <cassert>

void
test_positive() {
    double min = 0;
    double max = 0;
    find_minmax({1, 2, 3}, min, max);
    assert(min == 1);
    assert(max == 3);
}


void
test_otric() {
    double min = 0;
    double max = 0;
    find_minmax({-1, -2, -3}, min, max);
    assert(min == -3);
    assert(max == -1);
}


void
test_odinak() {
    double min = 0;
    double max = 0;
    find_minmax({55, 55, 55}, min, max);
    assert(min == 55);
    assert(max == 55);
}




void
test_odin() {
    double min = 0;
    double max = 0;
    find_minmax({1337}, min, max);
    assert(min == 1337);
    assert(max == 1337);
}


void
test_pusto() {
    double min = 0;
    double max = 0;
    find_minmax({}, min, max);
    assert(min == );
    assert(max == );
}
int
main()
{
      test_positive();
      test_otric();
      test_odinak();
      test_odin();
      test_pusto();
}
