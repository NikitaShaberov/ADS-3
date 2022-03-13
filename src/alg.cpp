// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int count = 0;
    int sred;
    int i = 0, j = size - 1;
    while (i <= j) {
      int sredn = (j + i) / 2;
      if (arr[sredn] == value) {
         count++;
         sred = sredn;
         break;
        }
        if (value < arr[sredn])
          j = sredn - 1;
        else
          i = sredn + 1;
    }
    if (sred >= 0) {
      for (int m = 0; m < sred; m++) {
          if (arr[m] == value)
              count++;
        }
       for (int l = size - 1; l > sred; l--) {
          if (arr[l] == value)
              count++;
        }
    }
    return n;
}
