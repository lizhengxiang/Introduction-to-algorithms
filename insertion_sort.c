#include<stdio.h>
#include<stdlib.h>
#define N 100

//定义插入排序函数
int* insertion_sort(int *arr){
	int j, i;
	for(j = 1; j < N; j++){
		//注意这个地方不要犯错和边界值
		int key = arr[j];
		i = j-1;
		while(i >= 0 && arr[i] > key){
			arr[i+1] = arr[i];
			--i;
		}
		arr[i+1] = key;
	}
	return arr;

}

int main(){
	int i;
	int arr[100]; //定义待排序的数组
	for( i = 0; i < N; i++){
		arr[i] = rand()%100;//生成随机数，并输值
		printf("%d\t",arr[i]);
		if((i+1) % 10 == 0)
			printf("\n");

	}
	printf("\n");
	insertion_sort(arr); //调用插入排序函数
	for(i = 0; i < N; i++){
		printf("%d\t", arr[i]);
		if((i+1) % 10 == 0)
			printf("\n");
	}
	return 0;
}
