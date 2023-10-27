#include "tests.c"
#include "bits.c"
#include <assert.h>
#include <stdio.h>

int test_data[] = {0xfff, 12 - 127, -5 - 127, -23 - 127 , -20 - 127};

int main(){
  int size = sizeof(test_data) / sizeof(int);

  for(int i = -50; i < 100; ++i){
    unsigned a, b;
    a = test_floatPower2(i-127);
    b = floatPower2(i - 127);
    printf("0x%u 0x%u\n", a, b);
    assert(a == b);
  }

  for(int i = 0; i < size ; ++i){
    unsigned a, b;
    a = test_floatPower2(i);
    b = floatPower2(i);
    printf("0x%u 0x%u\n", a, b);
    assert(a == b);
  }
}
