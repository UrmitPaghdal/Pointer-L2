#include<stdio.h>
main(){
	
	int a, i;
		printf(" Enter Your Size : ");
			scanf("%d", &a);
	
	int arr[a];
	
	for(i=0; i<a; i++){
		printf("arr[%d] = ", i);
			scanf("%d", &arr[i]);
	}
	
	for(i=0; i<a/2; i++){
		int temp = arr[i];
			arr[i] = arr[a-1-i];
				arr[a-1-i] = temp;
	}
	
	for(i=0; i<a; i++){
		printf("%d \n", arr[i]);
	}
}
