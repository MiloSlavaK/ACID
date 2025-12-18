#include <iostream>

int main() {
  int a[] = {5, 4, 7, 6, 9, 1};
  int N = 6;
  // i - индекс последнего упорядоченного элемента
  for (int i = 0; i < N-1; i++) {
    // элемент a[i+1] нужно вставить на нужное место от 0 до i+1
    int tmp = a[i+1];
    int j=i;
    while (j>0 && a[j]>tmp) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1]=tmp;
  }
}
