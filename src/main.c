#include <stdio.h>

int add(int x,int y){
	return x + y;
}
int sub(int x, int y){
	return x - y;
}
int mul(int x, int y){
	return x * y;
}
int div(int x, int y){
	return  x / y;
}

void start(){
	int num_a,num_b;
	char operation;

	printf("Enter Number: ");
	scanf("%i",&num_a);
	printf("Enter Number: ");
	scanf("%i",&num_b);

	printf("(+,/,-,x) : ");
	scanf(" %c",&operation);
	if(operation == '+'){
		printf("Ans : %d\n",add(num_a,num_b));
	}else if(operation == '-'){
		printf("Ans : %d\n",sub(num_a,num_b));
	}else if(operation == 'x'){
		printf("Ans : %d\n",mul(num_a,num_b));
	}else if(operation == '/'){
		printf("Ans : %d\n",div(num_a,num_b));
	}else{
		printf("Wrong Inpute!\n");
	}

}
int main(){
        while(1){
	    start();
	}
	return 0;
}
