#include<stdio.h>
#include<stdlib.h>
/*we are assuming we  increase size as stack increases we realloc;size is the size of the stack; top points  to top of stack n array is the array used*/
typedef struct stack{
	int *array;
	int top;
	int  size;
}stack;
stack *init();
void push(int i , stack *s);
int pop (stack *s);
int isempty(stack *s); 

