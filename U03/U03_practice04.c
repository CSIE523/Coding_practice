#include<stdio.h>

void hanoi(int n, char A, char B, char C) {
    
    if (n>0) {
    hanoi (n - 1, A, C, B);
    printf("Move D%d from %c to %c\n", n, A, C);
    hanoi( n-1, B, A, C);
  }
}

int main(){
	int n;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
}