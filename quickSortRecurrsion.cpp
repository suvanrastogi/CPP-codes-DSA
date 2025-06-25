
#include <iostream>
using namespace std;
int partition(int *arr, int s, int e) {
  int pivotElement = arr[s];
  // counting how many numbers are smaller than the selected pivot element
  int count = 0;

  for (int i = s + 1; i <= e; i++) {
    if (arr[i] <= pivotElement) {
      count++;
    }
  }
  // for loop ends
  int pivotIndex = s + count;
  // place the pivot to its correct position where all the smaller elemnets than the pivot can be placed 
  swap(arr[pivotIndex], arr[s]);

  int i = s;
  int j = e;
//bring all the smaller and greater element than pivot to the left and right side of the array

  while (i < pivotIndex && j > pivotIndex) {
    while (arr[i] < pivotElement) {
      i++;
    }
    while (arr[j] > pivotElement) {
      j--;
    }
    if (i < pivotIndex && j > pivotIndex) {
      swap(arr[i++], arr[j++]);
    }
  }
  return pivotIndex;
}

void quickSort(int *arr, int s, int e) {
  if (s > e) {
    return;
  }
  int p = partition(arr, s, e);

  quickSort(arr, s, p - 1);

  quickSort(arr, p + 1, e);
}

int main() {
  // Write C++ code here
  int arr[] = {342, 949, 15,  103, 358, 491, 505, 51,  449, 518, 96,  440, 699,
               77,  978, 320, 387, 890, 577, 140, 554, 682, 975, 43,  85,  415,
               72,  78,  584, 259, 347, 112, 185, 114, 924, 778, 758, 522, 521,
               308, 261, 55,  407, 560, 518, 991, 136, 313, 542, 220, 923, 593,
               739, 680, 273, 127, 943, 490, 535, 831, 147, 854, 365, 756, 465,
               659, 962, 81,  430, 750, 729, 93,  114, 37,  396, 460, 557, 589,
               795, 770, 224, 380, 849, 122, 133, 835};
  int size = sizeof(arr) / sizeof(arr[0]);
  int s = 0;
  int e = size - 1;
  quickSort(arr, s, e);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}