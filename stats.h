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
 * @file stats.h
 * @brief program that contains statistical functions
 *
 * An application that prints a set of array, finds the mean, median, maximum and minimum
 * and sorts them.
 *
 * @author Roland Pelayo
 * @date 8/9/2022
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * This function takes a char array and the size of the array. This will 
 * print the array in the screen.
 *
 * @param char array to print on screen
 * @param length of array
 *
 * @return void
 */

void print_array(unsigned char arr[], int arr_len);

/**
 * @brief Given an array of data and a length, finds the median of the array
 *
 * This function takes a char array and the size of the array. This will 
 * sort the array and then find the middle value which is the median.
 *
 * @param char array to which median is to be found
 * @param length of array
 *
 * @return the median of the array of numbers
 */
unsigned int find_median(unsigned char arr[], int arr_len);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * This function takes a char array and the size of the array. This will 
 * take the average of the values in the array and returns a float value.
 *
 * @param char array to which mean is to be found
 * @param length of array
 *
 * @return the mean of the array of numbers
 */
float find_mean(unsigned char arr[], int arr_len);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * This function takes a char array and the size of the array. This will 
 * sort the array from smallest to largest, then returns the largest value.
 *
 * @param char array to which maximum number is to be found
 * @param length of array
 *
 * @return maximum number
 */
unsigned int find_maximum(unsigned char arr[], int arr_len);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * This function takes a char array and the size of the array. This will 
 * sort the array from smallest to largest, then returns the smallest value.
 *
 * @param char array to which minimum number is to be found
 * @param length of array
 *
 * @return minimum number
 */
unsigned int find_minimum(unsigned char arr[], int arr_len);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * This function takes a char array and the size of the array. This will 
 * sort the array from smallest to largest.
 *
 * @param char array to be sorted
 * @param length of array
 *
 * @return sorted array
 */
unsigned char* sort_array(unsigned char arr[], int arr_len);

#endif /* __STATS_H__ */
