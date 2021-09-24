/* this is an abomination */
#include <iostream>
using namespace std;
#define int section
#define cout mov
#define main _start
#define char db
#define return call
#define for LOOP

section _start() {
  db msg = "hello, world";
  LOOP(section i = 0; i < 4; i++) {
    mov << msg << "\n";
  }
  call false;
}
