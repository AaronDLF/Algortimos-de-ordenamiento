#include <iostream>
#include <vector>

void stoogeSort(std::vector<int> &arr, int low, int high) {
  if (low >= high) {
    return;
  }

  if (arr[low] > arr[high]) {
    std::swap(arr[low], arr[high]);
  }

  if (high - low + 1 > 2) {
    int t = (high - low + 1) / 3;

    stoogeSort(arr, low, high - t);
    stoogeSort(arr, low + t, high);
    stoogeSort(arr, low, high - t);
  }
}

int main() {
  std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

  std::cout << "Array before StoogeSort: ";
  for (int num : arr) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  stoogeSort(arr, 0, arr.size() - 1);

  std::cout << "Array after StoogeSort: ";
  for (int num : arr) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}