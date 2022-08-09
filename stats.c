/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief program that contains statistical functions
 *
 * An application that prints a set of array, finds the mean, median, maximum and minimum
 * and sorts them.
 *
 * @author Roland Pelayo
 * @date 8/9/2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  printf("\nMedian is %d",find_median(test, SIZE));
  printf("\nMean is %f",find_mean(test, SIZE));
  printf("\nMaximum is %d",find_maximum(test, SIZE));
  printf("\nMinimum is %d",find_minimum(test, SIZE));
}

/* Add other Implementation File Code Here */
void print_array(unsigned char arr[], int arr_len)
{

}

unsigned int find_median(unsigned char arr[], int arr_len)
{

}

float find_mean(unsigned char arr[], int arr_len)
{

}

unsigned int find_maximum(unsigned char arr[], int arr_len)
{

}

unsigned int find_minimum(unsigned char arr[], int arr_len)
{

}

unsigned char* sort_array(unsigned char arr[], int arr_len)
{

}