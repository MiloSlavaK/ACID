//запоминаем опорный элемент p - например средний p = a[(left + right)/2]
//i=left и j=right - индексы левой и правой границы
// i перемещаем вправо пока не найдемэлемент, больший или равный опорному
// j перемещаем влево пока не найдем элемент, меньший или равный опорному
// меняем местами a[i] и a[j], i++, j--
// i > j - останавливаемся
// итог - разделили массив на 2 части, теперь вызываем данную функцию еще раз для каждой

#include <iostream>

void quickSort(int a[], int left, int right) {
  if (left>right) {return;}
  int p = a[(left+right)/2];
  int i = left;
  int j = right;
  while (i<=j) {
    while (a[i] < p) i++;
    while (a[j] > p) j--;
    if (i<=j) {
      int t = a[i];
      a[i]=a[j];
      a[j]=t;
      i++;
      j--;
    }
  }
  quickSort(a, left, j);
  quickSort(a, i, right);
}
int main() {
  
}
