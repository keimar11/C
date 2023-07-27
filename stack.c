#include <stdio.h>

#define STACK_SIZE 100
#define SUCCESS 1
#define FAILURE 0

typedef int data_t;

typedef struct {
	int num;
	data_t data[STACK_SIZE];
} stack_t;

int	push(stack_t *stk, data_t push_data)
{
	if (stk->num < STACK_SIZE)
	{
		stk->data[stk->num] = push_data;
		stk->num++;
		return (SUCCESS);
	}
	else
		return (FAILURE);
}

int	pop(stack_t *stk, data_t *pop_data)
{
	if (stk->num > 0)
	{
		stk->num--;
		*pop_data = stk->data[stk->num];
		return (SUCCESS);
	}
	else
		return (FAILURE);
}

void stackPrint(stack_t *stk)
{
	int	i;

	printf("stack: ");
	for (i = 0;i < stk->num; i++) printf("%3d", stk->data[i]);
	printf("\n");
}

int	main(void)
{
	stack_t stk;
	int	i,p;

	stk.num = 0;
	for(i = 1;i <= 5; i++)
	{
		push(&stk, i);
		printf("push %2d |", i);
		stackPrint(&stk);
	}
	for(i = 1; i <= 3; i++)
	{
		pop(&stk ,&p);
		printf("pop  %2d |", p);
		stackPrint(&stk);
	}
	for (i = 6;i <= 11; i++)
	{
		push(&stk, i);
		printf("push %2d |", i);
		stackPrint(&stk);
	}
	while (stk.num)
	{
		pop(&stk, &p);
		printf("pop  %2d |", p);
		stackPrint(&stk);
	}
	return (0);
}
