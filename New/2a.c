#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int max_distinct_numbers(int *a, int n) {
  int count[1000001] = {0};
  for (int i = 0; i < n; i++) {
    count[a[i]]++;
  }
  int max_distinct = 0;
  for (int i = 1; i <= 1000000; i++) {
    if (count[i] > max_distinct) {
      max_distinct = count[i];
    }
  }
  return max_distinct;
}

int *find_permutation(int *a, int n) {
  int *b = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    b[i] = i + 1;
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (max_distinct_numbers(a, n) < max_distinct_numbers(a, n, b[i], b[j])) {
        swap(b[i], b[j]);
      }
    }
  }
  return b;
}

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[j]);
    }
    int *b = find_permutation(a, n);
    for (int j = 0; j < n; j++) {
      printf("%d ", b[j]);
    }
    printf("\n");
    free(a);
    free(b);
  }
  return 0;
}
