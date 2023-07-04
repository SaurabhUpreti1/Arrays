#include<stdio.h>
int main(){
	int i=0,n,arr[100],s=0;
	printf("enter elements in array;");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
	if(i%2==0){
		i+=arr[i];
	}
	else{
		s=s+arr[i];
	}
	}
printf("difference of even and odd indices in array is:%d",i-s);
	
	
	
}