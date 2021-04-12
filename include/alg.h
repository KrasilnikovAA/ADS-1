// Copyright 2021 NNTU-CS
#ifndef INCLUDE_ALG_H_
#define INCLUDE_ALG_H_

int cbinsearch(int *arr, int size, int value);
int kol=0;
cin>>size;
for (int i=0;i<size;i++)
  cin>>arr[i];
cin>>value;
for(int i=0;i<size;i++)
{
  if (arr[i]=value)
    kol++;
}
return kol;
#endif  // INCLUDE_ALG_H_
