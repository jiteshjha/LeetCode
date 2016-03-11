//https://leetcode.com/problems/two-sum/

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
  /**
   * Note: The returned array must be malloced, assume caller calls free().
   */

   void exchange(int *a, int *b)
  {
      int temp;
      temp = *a;
      *a   = *b;
      *b   = temp;
  }

  int partition(int A[], int si, int ei)
  {
      int x = A[ei];
      int i = (si - 1);
      int j;

      for (j = si; j <= ei - 1; j++)
      {
          if(A[j] <= x)
          {
              i++;
              exchange(&A[i], &A[j]);
          }
      }
      exchange (&A[i + 1], &A[ei]);
      return (i + 1);
  }

  /* Implementation of Quick Sort
  A[] --> Array to be sorted
  si  --> Starting index
  ei  --> Ending index
  */
  void quickSort(int A[], int si, int ei)
  {
      int pi;    /* Partitioning index */
      if(si < ei)
      {
          pi = partition(A, si, ei);
          quickSort(A, si, pi - 1);
          quickSort(A, pi + 1, ei);
      }
  }

  int * copyArr(int * arr, int len) {
    int * result = (int *)calloc(len, sizeof(int));
    int i = 0;
    for(i = 0; i < len; i++)
      result[i] = arr[i];
    return result;
  }
   int* twoSum(int* nums, int numsSize, int target) {
       int l, r;
       int * result = (int *)calloc(2, sizeof(int));
       int * res = copyArr(nums, numsSize);
          quickSort(nums, 0, numsSize-1);
       l = 0;
      r = numsSize-1;
      while (l < r)
      {
           if(nums[l] + nums[r] == target)
                break;
           else if(nums[l] + nums[r] < target)
                l++;
           else // A[i] + A[j] > sum
                r--;
      }


       int i;
       for(i = 0; i < numsSize; i++) {
           printf("%d\t", nums[i]);
       }
       printf("\n%d %d\n", l, r);
       if(nums[l] != nums[r]) {

       for(i = 0; i < numsSize; i++) {
           if(nums[l] == res[i]) {

              result[0] = i;
              break;
            }
       }
       for(i = 0; i < numsSize; i++) {
           if(nums[r] == res[i]) {
              result[1] = i;
              break;
            }
       }
     }
     else {
       int t;
       for(i = 0; i < numsSize; i++) {
           if(nums[l] == res[i]) {

              result[0] = i;
              t = i;
              break;
            }
       }
       for(i = t + 1; i < numsSize; i++) {
           if(nums[r] == res[i]) {
              result[1] = i;
              break;
            }
       }
     }

       if(result[0] > result[1]) {
           int temp = result[0];
           result[0] = result[1];
           result[1] = temp;
       }
       printf("%d %d", result[0], result[1]);
       return result;

   }

int main() {
  int nums[] = {0,4,3,0};
  int numSize = 4;
  int target = 0;
  int * ans = twoSum(nums, numSize, target);
  return 0;
}
