// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int k=0;
cin>>size;
for (int i=0;i<size;i++)
{
  cin>>arr[i];
}
cin>>value;
  for (int i=0;i<size;i++)
  {
    if (arr[i]=value)
    {
      k++;
    }
  }
    return k;// если ничего не найдено
}
