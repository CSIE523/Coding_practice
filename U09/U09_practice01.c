#include<stdio.h>

int main(){
	int n1, n2;
	int arr1[4], arr2[4];
	int A=0, B=0;
	int rcd[4]={0, 0, 0, 0};
	while(scanf("%d %d", &n1, &n2)!=EOF){
		for(int i=3;i>=0;i--){
			arr1[i]=n1%10;
			arr2[i]=n2%10;
			n1/=10;
			n2/=10;
		}
		
		for(int i=0;i<4;i++){
			if(arr1[i]==arr2[i]&&rcd[i]!=1)
				A++;
			else{
				for(int j=0;j<4;j++){
					if(arr1[i]==arr2[j]&&rcd[j]!=1){
						rcd[j]=1;
						B++;
						break;
					}
				}
			}
		}
		
		printf("%d A %d B\n", A, B);
		A=0;
		B=0;
        for(int i=0;i<4;i++)
            rcd[i]=0;
	}
}