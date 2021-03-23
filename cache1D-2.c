////////////////////////////////////////////////////////////////////////////////
// Main File:        cache1D.c
// This File:        cache1D.c
// Other Files:      cache2Drows.c cache2Dcols.c
// Semester:         CS 354 Fall 2018
//
// Author:           Haotian Zhu
// Email:            hzhu226@wisc.edu 
// CS Login:         haotian
//
/////////////////////////// OTHER SOURCES OF HELP //////////////////////////////
//                   fully acknowledge and credit all sources of help,
//                   other than Instructors and TAs.
//
// Persons:          Identify persons by name, relationship to you, and email.
//                   Describe in detail the the ideas and help they provided.
//
// Online sources:   avoid web searches to solve your problems, but if you do
//                   search, be sure to include Web URLs and description of 
//                   of any information you find.
//////////////////////////// 80 columns wide ///////////////////////////////////
int arr[1000000];
int main() {
  int i;
  for (i = 0; i < 1000000; i++) {
  arr[i] = i;
  }
  return 0;
}