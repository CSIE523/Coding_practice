#include<stdio.h>
#include<stdlib.h>
#define swap(A, B) (A^=B, B^=A, A^=B)


int arr[6];
int compare(const void *a, const void *b)
{
      int c = *(int *)a;
      int d = *(int *)b;
      if(c < d) {return -1;}               
      else if (c == d) {return 0;}    
      else return 1;                         
}

void dic_sort(){
    int *sort;
    int pos1; //i
    int pos2; //j
    for(int i=5;i>=1;i--){
        if(arr[i]>arr[i-1]){
            pos1 = i-1; 
            break;
        }
    }
    for(int i=5;i>=1;i--){
        if(arr[i]>arr[pos1]){
            pos2=i; 
            break;
        }
    }
    swap(arr[pos1], arr[pos2]); 
    sort=malloc(sizeof(int)*(5-pos1));
    for(int i=pos1+1;i<6;i++){
        sort[i-pos1]=arr[i];
    }
    
    qsort(sort, 6-pos1, sizeof(int), compare);
    for(int i=pos1+1;i<6;i++){
        arr[i]=sort[i-pos1];
    }
    free(sort);
}

int main(){
	int n;
	scanf("%d", &n);
    for(int i=0;i<6;i++)
        arr[i]=i+1;

    for(int i=1;i<n;i++)
	    dic_sort();

    for(int i=0;i<6;i++)
        printf("%d", arr[i]);
}