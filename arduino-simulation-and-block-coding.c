// Demonstrate a simple block-defined logic flow and simulated execution
#include <stdio.h> // Logs

typedef struct { const char* name; int on; int ms; } Block; // Block type

static void run_blocks(const Block* b, int n) { // Execute blocks
  for (int i = 0; i < n; ++i) { // Iterate
    printf("BLOCK '%s' LED=%s DUR=%dms\n", b[i].name, b[i].on?"ON":"OFF", b[i].ms); // Print
  } // End iterate
}

int main(void) { // Entry
  printf("Arduino Simulation and Block Coding\n"); // Title
  Block program[] = { {"Start",1,500}, {"Hold",1,300}, {"Stop",0,200} }; // Program blocks
  run_blocks(program, 3); // Run flow
  return 0; // Exit
} // End main
