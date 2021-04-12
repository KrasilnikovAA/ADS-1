// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
 int k=0;
cin>>size;
for (int i=0;i<size;i++)
  cin>>arr[i];
cin>>value;
  for (int i=0;i<size;i++)
    if (arr[i]=value)
      k++;
  if (k>0)
    return k;
  else
  return 0; // если ничего не найдено
}
