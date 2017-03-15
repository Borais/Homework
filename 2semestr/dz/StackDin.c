#include <stdio.h>
#include <stdlib.h>
#define STACK_UNDERFLOW -101


struct Stak {
int number;
int *elem;} *stack=NULL;


void push(struct Stak *stack, int value) {
    stack->elem = (int*) realloc (stack->elem, sizeof(int)*(stack->number+1));
    stack->elem[stack->number] = value;
    stack->number++;
}
int pop(struct Stak *stack) {
    if (stack->number <= 0) {
             printf("STACK_UNDERFLOW\n");
        exit(STACK_UNDERFLOW);
    }
    stack->elem= (int*) realloc (stack->elem,sizeof(int)*(stack->number));
    stack->number--;
    return stack->elem[stack->number];

}
int peek(struct Stak*stack) {
    if (stack->number <= 0) {
        exit(STACK_UNDERFLOW);
    }
    return stack->elem[stack->number - 1];
}

void printst(struct Stak * stack) {
	if (stack->number > 0) {
		int i = 0;
		for (i = 0; i < stack->number; i++) {
    printf("%d\n", stack->elem[i]);
		}

	} else
		printf("Empty\n");
}

int main(void){
    int k,l;
    stack=(struct Stak*) malloc (sizeof(struct Stak));
    stack->number=0;
    stack->elem= (int*) malloc (sizeof(int));
    while (k!=0)
{
     printf("\n1.Add element\n2.Del elem\n3.Print peek element\n4.Print stack\n0.End\n");
    scanf("%d", &k);
    switch(k){
        case 1: printf("\nElem=");
    scanf("%d", &l);
    push(stack, l);
    break;
case 2:
	printf("\nElem  %d deleted\n", pop(stack));
	break;
case 3:	printf("\nPeek elem=%d\n", peek(stack) );
        break;
case 4: printf("\nStack:\n");
        printst(stack);
        break;
case 0: break;
default:
            printf( "Error.\n" );
/*    if ( k==1 ){
        printf("\nElem=");
        scanf("%d", &l);
        push(stack, l);
        break;
    }
else if ( k==2 ){
	printf("\nElem  %d deleted\n", pop(stack));
	break;}
else if (k==3){
        printf("\nPeek elem=%d\n", peek(stack) );
        break;}
else if (k==4){printf("\nStack:\n");
        printst(stack);
        break;}
else{break;
            printf( "Error.\n" );
            return 0;*/
}
}
return 0;
}
