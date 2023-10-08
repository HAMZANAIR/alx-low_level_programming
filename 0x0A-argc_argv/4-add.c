#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int num;
int sum;
int i;
int j;
if (argc == 1) {
printf("0\n");
return 0;
}

sum = 0;
for (i = 1; i < argc; i++) {
for (j = 0; argv[i][j] != '\0'; j++) {
if (argv[i][j] < '0' || argv[i][j] > '9') {
printf("Error\n");
return 1;
}
}
num = atoi(argv[i]);
if (num < 0) {
printf("Error\n");
return 1;
}
sum += num;
}

printf("%d\n", sum);

return 0;
}

