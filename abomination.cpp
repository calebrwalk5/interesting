#include <iostream>
using namespace std;
#define int section
#define cout mov
#define main _start
#define char db
#define return call

section _start() {
  db msg = "hello, world";
  mov << msg << "\n";
  call 0;
}
