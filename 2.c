  #include <stdio.h>

  int main() {
      int T, i;
      char n[101];
      scanf("%d", &T);
      for(i=1; i<=T; i++) {
          scanf("%s", n);
          int j=0;
          while(n[j] != '\0') {
              j++;
          }
          if((n[j-1]) % 2 == 0) {
              printf("even\n");
          } else {
              printf("odd\n");
          }
      }
      return 0;
  }
