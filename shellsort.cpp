#include <iostream>

using namespace std;

void shellSort(int arr[], int n) {
  int gap = n / 2;

  while (gap > 0) {
    for (int i = gap; i < n; i++) {
      int temp = arr[i];
      int j;

      for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
        arr[j] = arr[j - gap];
      }

      arr[j] = temp;
    }

    gap /= 2;
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

int main() {
  int arr[] = {4,3,2,1};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Arreglo original: \n";
  printArray(arr, n);

  shellSort(arr, n);

  cout << "Arreglo ordenado: \n";
  printArray(arr, n);

  return 0;
}
