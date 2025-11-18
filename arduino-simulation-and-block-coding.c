/*
 * Course: Arduino Simulation And Block Coding
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Arduino Simulation And Block Coding" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/arduino-simulation-and-block-coding/
 * Repository: https://github.com/engasm89/arduino-simulation-and-block-coding
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

// Demonstrate a simple block-defined logic flow and simulated execution
#include <stdio.h> // Logs

typedef struct { const char* name; int on; int ms; } Block; // Block type

static void run_blocks(const Block* b, int n) { // Execute blocks
  for (int i = 0; i < n; ++i) { // Iterate
    printf("BLOCK '%s' LED=%s DUR=%dms\n", b[i].name, b[i].on?"ON":"OFF", b[i].ms); // Print
  } // End iterate
}

int main(void) { // Program entry point
  printf("Arduino Simulation and Block Coding\n"); // Title
  Block program[] = { {"Start",1,500}, {"Hold",1,300}, {"Stop",0,200} }; // Program blocks
  run_blocks(program, 3); // Run flow
  return 0; // Exit
} // End of main function
