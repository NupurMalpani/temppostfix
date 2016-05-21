#include"stack.h"
stack *init() {
	stack *s;
        s = (stack *)malloc(sizeof(stack));
	s->top = -1;
	s->size = 30;
	s->array = (int*)malloc(sizeof(int) * (s->size));
	return s;
}
void push(int i, stack *s){
	s->top += 1;
	if(s->top > s->size){
		s->size = s->size + 10;
		s->array = (int*)realloc(s->array,sizeof(int) * (s->size));
	}
	s->array[s->top] = i;

}
int pop(stack *s){
	int i;
	i = s->array[s->top];
	s->top -= 1;
	return i;
}
int isempty(stack *s){
	if(s->top == -1)
		return 1;
	return 0;
}
