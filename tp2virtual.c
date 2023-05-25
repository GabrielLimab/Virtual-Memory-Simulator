#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to create the memory and return it
int* createMemory(int memorySize, int pageSize){
  // Variables
  int* memory = malloc(memorySize/pageSize * sizeof(int));
  int i;

  // Fill memory with -1
  for(i = 0; i < memorySize/pageSize; i++){
    memory[i] = -1;
  }

  // print memory
  for(i = 0; i < memorySize/pageSize; i++){
    printf("%d ", memory[i]);
  }
  printf("\n");

  return memory;
}

int main(int argc, char* argv[]){
  // Variables
  char* algorithm = argv[1];
  char* inputFile = argv[2];
  int pageSize = atoi(argv[3]); 
  int memorySize = atoi(argv[4]);

  // Print variables
  printf("Algorithm: %s\n", algorithm);
  printf("Input file: %s\n", inputFile);
  printf("Memory size: %d\n", memorySize);
  printf("Page size: %d\n", pageSize);

  // Create memory
  int* memory = createMemory(memorySize, pageSize);
  

  return 0;
}