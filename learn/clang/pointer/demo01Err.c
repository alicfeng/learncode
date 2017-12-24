#include <stdio.h>

void change(int a,int b){
	//debug
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 10;
	int b = 20;
	printf("before:a=%d;b=%d\n",a,b);
	change(a,b);
	printf("after:a=%d;b=%d\n",a,b);
	return 0;
}
