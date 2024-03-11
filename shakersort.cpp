#include <iostream>

using namespace std;

void shakerSort(int arr[], int n) {
  // Inicializar los índices para el barrido bidireccional
  int left = 0, right = n - 1;
  int iterador = 0;
  int contadorWhile = 0;
  int itIf = 0;
  int itIf2 = 0;
  int for1 = 0;
  int for2 = 0;

  // Bucle principal para el ordenamiento
  while (left < right) {
    // Barrido izquierdo para llevar el elemento más grande al final
    for (int i = left; i < right; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
        itIf++;
      }
      for1++;
      iterador++;
    }
    right--; // Reducir el límite derecho

    // Barrido derecho para llevar el elemento más pequeño al inicio
    for (int i = right; i > left; i--) {
      if (arr[i] < arr[i - 1]) {
        swap(arr[i], arr[i - 1]);
        itIf2++;
      }
      for2++;
      iterador++;
    }
    left++; // Ampliar el límite izquierdo
    contadorWhile++;
    cout << "Arreglo ordenado: ";
      for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
      }
    cout << endl;
  }
  cout<<"\nCantidad total de iteraciones realizadas = "<< iterador <<endl;
  cout<<"\nCantidad total de iteraciones para el for1 = "<<for1<<endl;
  cout<<"\nCantidad total de iteraciones para el if1 = "<<itIf<<endl;
  cout<<"\nCantidad total de iteraciones para el for2 = "<<for2<<endl;
  cout<<"\nCantidad total de iteraciones para el if2 = "<<itIf2<<endl;
  cout<<"\nCantidad total de iteraciones para el while = "<<contadorWhile<<endl;
}

int main() {
  int arr[] = { 8,7,6, 5, 4, 3, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Arreglo sin ordenar: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  shakerSort(arr, n);

  cout << "Arreglo ordenado: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}