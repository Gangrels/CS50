/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
  
  int lower = 0;
  int upper = n - 1;
  
  while(lower <= upper)
  {
    
    int middle = (upper + lower) / 2;
    
   
    if(values[middle] == value)
    {
      return true;
    }
    else if (values[middle] < value)
    {
      lower = middle + 1;
    }
    else if (values[middle] > value)
    {
      upper = middle - 1;
    }
  }
  
  return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
	
	for(int i = 0; i < n - 1; i++)
	{
		
		int smallest = values[i];
		int position = i;
		
	
		for (int k = i + 1; k < n; k++)
		{
			
			if(values[k] < smallest)
			{
				smallest = values[k];
				position = k;
			}
		}
		
	
		int temp = values[i];
		values[i] = smallest;
		values[position] = temp;
	}
    return;
}