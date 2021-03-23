////////////////////////////////////////////////////////////////////////////////
// Main File:        cache2Dcols.c
// This File:        cache2Dcols.c
// Other Files:      cache1D.c cache2Drows.c
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
int arr2D[3000][500];

int main() {
  int row,col;
  for (col = 0; col < 500; col++) {
    for (row = 0; row < 3000; row++) {
      arr2D[row][col] = row + col;
    }
  }
  return 0;
}