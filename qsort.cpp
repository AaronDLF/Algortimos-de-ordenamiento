#include <iostream>

int partition(int array[], int left, int right) {
  int pivot = array[left];
  int pIndex = left;

  for (int i = left + 1; i <= right; i++) {  // Note: i starts from left + 1
    if (array[i] <= pivot) {
      std::swap(array[i], array[pIndex + 1]);  // Swap with the next element after pIndex
      pIndex++;
    }
  }

  std::swap(array[left], array[pIndex]);  // Place pivot in its correct position
  return pIndex;
}

void quicksort(int array[], int left, int right) {
  if (left >= right) {
    return;
  }

  int pivotIndex = partition(array, left, right);
  quicksort(array, left, pivotIndex - 1);
  quicksort(array, pivotIndex + 1, right);
}

int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  int dataSize = sizeof(data) / sizeof(data[0]);

  quicksort(data, 0, dataSize - 1);

  std::cout << "Sorted array: ";
  for (int i = 0; i < dataSize; i++) {
    std::cout << data[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
