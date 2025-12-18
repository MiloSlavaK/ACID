void mergeSort(vector<int> &a, size_t start, size_t end) 
{
  if (end - start < 2) {
    return;
  }
  if (end - start == 2)  {
    // сравниваем и меняем местами
    return;
  }
  mergeSort(a, start, start + (end-start)/2);
  mergeSort(a, start + (end - start)/2, end);

  //сливаем
}
