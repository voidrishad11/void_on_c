#include <stdio.h>
#include <math.h>

int main() {
  int n, n2, sum, avg, i, j, count;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &n2);
    int a1[n2], a2[n2];
    for (i = 0, sum = 0; i < n2; i++) {
      scanf("%d", &a1[i]);
      sum = sum + a1[i];
    }
    avg = sum / n2;
    if (sum % n2 == 0) {
      for (i = 0; i < n2; i++) {
        a2[i] = avg - a1[i];
      }
      i = 0;
      j = 1;
      count = 0;
      while (i < n2 && j < n2) {
        if ((a2[i] == 0 || a2[i] - a2[j]) != 0) {
          j++;
        } else if (a2[i] == a2[j]) {
          int k = i + 1;
          while (k < n2 && a2[k] == a2[i]) {
            k++;
          }
          count += k - i - 1;
          i = k;
        }
      }
      if (count == n2 - 1) {
        printf("Yes\n");
      } else {
        printf("No\n");
      }
    } else {
      printf("No\n");
    }
  }
  return 0;
}
