#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int age;
	char name[105];
    int number;
}member;

int compare(const void*x, const void*y)
{
    member *a = (member*)x;
    member *b = (member*)y;

    if(a->age > b->age)
        return 1;
    else if(a->age < b->age)
        return -1;
    else
        if(a->number > b->number)
            return 1;
        else
            return -1;
}

int main()
{
	int n;
	scanf("%d", &n);
	member* mem;
	mem = (member*)malloc(n * sizeof(member));

	for (int i = 0; i < n; i++){
		scanf("%d %s", &mem[i].age, mem[i].name);
        	mem[i].number = i;
    }

	qsort(mem, n, sizeof(mem[0]), compare);

	for (int i = 0; i < n; i++)
		printf("%d %s\n", mem[i].age, mem[i].name);
}
