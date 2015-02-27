/* compile with gcc -ftrapv <filename> */
#include <bits/stdc++.h>

using namespace std;

void signalHandler(int sig) {
  printf("Overflow detected\n");
}

int main() {
  signal(SIGABRT, &signalHandler);

  int largeInt = INT_MAX;
  int normalInt = +2;
  int overflowInt = largeInt + normalInt;  /* should cause overflow */
  // printf("%d",overflowInt);
  cout << overflowInt;

  /* if compiling with -ftrapv, we shouldn't get here */
  return 0;
}