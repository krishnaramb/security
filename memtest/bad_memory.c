#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void test1()
{ 
  const int NUM_HEIGHTS = 3;
  int *heights = malloc(NUM_HEIGHTS *sizeof(*heights));
  for (int i =0; i< NUM_HEIGHTS; i++)
   {
	heights[i] = i*i;
	printf("%d: %d\n",i, heights[i]);
    }

}

 int main (int argc, char * args[])
 {
	test1();
        return 0;

 } 
