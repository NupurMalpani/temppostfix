#include"stack.h"
#define SPACE 1
#define DIGIT  2
#define OPERATOR 3
int final;
int *eval(char *a){
	stack *s = init();
	int curr = SPACE;
	int next;
	int num;
	int op1, op2;
	if(a[0] == '\0')
		return NULL;
	printf("outside teh loop");
	printf("%s", a);	
	while(a[0] != '\0'){
		printf("inside the loop");
		switch(a[0]){
			case '+':case '-':case '*': case '/':
				next = OPERATOR ;
				break;
			case '1':case '2':case '3': case '4':case '5':case '6':case'7':case '9': case '0':
				next = DIGIT;
				break;
			case ' ':
				next = SPACE;
				break;
		}
		switch(curr){
			case SPACE:
				switch(next){
					case SPACE:case OPERATOR:
						break;
					case DIGIT:
						num = 0;
						break;
				}
			case DIGIT:
				switch(next){
					case SPACE:
						push(num,s);
						printf("we pushed due to space");
						break;
					case DIGIT:
						num = num * 10 + a[0] - '0'; 
						break;
					case OPERATOR:
						push(num,s);
						printf("we pushed due to operator");
						break;
				}	
			case OPERATOR:
				if(isempty(s))
					return NULL;
				op2 = pop(s);
				if(isempty(s))
					return NULL;
				op1 = pop(s);
				printf("we pushed due to operator");
				switch(a[0]){
					case '+':
						num = op2 + op1;
						push(num,s);
						break;
					case '-':
						num = op1 - op2;
						push(num,s);
						break;
					case '*':
						num = op1 * op2;
						push(num,s);
						break;
					case '/':
						num = op2 / op1; 
						push(num,s);
						break;
				}
		}
		curr = next; 
		a++;
	}
	num = pop(s);
	printf("in eval %d",num);
	final = num;
	return &final;
}



int main(){
	
    	char a[256];
    	printf("please enter the expression");
    	scanf("%256[^\n]",a);
  	int *p = (int *)eval(a);
  	if(!p)
  		printf("there was some error");
  	else
  		printf("result is %d", *p);
	return 0;
} 

