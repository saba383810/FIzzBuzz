#include<stdio.h>

int main (){

	int in_num,cnt;

	printf("1~100までの値を入力してください >>");
	scanf("%d",&in_num);
	if(1 <= in_num && in_num <=100){
		
		for(cnt = 1;cnt <= in_num;cnt++){
	
			if(cnt % 3 == 0 && cnt % 5 == 0){
					
				printf("FizzBuzz!\n");

			}else if (cnt % 3 == 0){
		
				printf("Fizz!\n");
		
			}else if (cnt % 5 == 0){
		
				printf("Buzz!\n");
		
			}else{
		
				printf("%d\n",cnt);
		
			}
		}
	}
}
