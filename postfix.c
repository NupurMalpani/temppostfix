#include"stack.h"
int main(){
	
    	char a[256];
    	printf("please enter the expression");
    	scanf("%s",a);
  	int *p = eval(a);
  	if(p == NULL)
  		printf("there was some error");
  	else
  		printf("result is %d", p);
	return 0;
} 
int *p eval(a){
	stack *s = init();
	space = 1;
	digit = 2;
	operator = 3;
	int curr = space;
	int next;
	int num;
	int op1, op2;
	if(a == '\0')
		return NULL;
	switch(a[0]){
		case '+':case '-':case '*': case '/':
			next = operator ;
			break;
		case '1':case '2':case '3': case '4':case '5':case '6':case'7':case '9': case '0':
			next = digit;
			break;
		case ' ':
			next = space;
			break;
	}
	if(a == '\0' && next == digit){
		int i = a[-1] - '0'
		return &i;
	}
	if(a == '\0' && ( next == space || next == operator))
		return NULL;
	while(a != '\0'){
		switch(curr){
			case space:
				switch(next){
					case space:case operator:
						break;
					case digit:
						num = 0
				
				}
			case digit:
				switch(next){
					case space:
						push(num,s);
						break;
					case digit:
						num = num * 10 + int(curr) - int('0'); 
						break;
					case operator:
						if(isempty(s))
							return NULL;
						
						op2 = pop(s);
						if(isempty(s))
							return NULL;
						op1 = pop(s)
								
						
						
				}
		}








}
