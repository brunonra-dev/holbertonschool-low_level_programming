# 0x01. C - Variables, if, else, while

## Tasks

0. Positive anything is better than negative nothing

```c
if (n > 0)
{
	printf("%d is positive\n", n);
} 
else if (n == 0)
{
	printf("%d is zero\n", n);
} 
else
{
	printf("%d is negative\n", n);
}
```
Print whether the number stored in the variable n is positive or negative.

1. The last digit

```c
last = n % 10;

if (last > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else if (last == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, last);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
```

Print the last digit of the number stored in the variable n.

2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

```c
char abc = 'a';

while (abc <= 'z')
{
	putchar(abc);
	abc++;
}
putchar('\n');
```

Prints the alphabet in lowercase, followed by a new line.

3. alphABET

````c
char abc = 'a';
char ABC = 'A';

while (abc <= 'z')
{
	putchar(abc);
	abc++;
}

while (ABC <= 'Z')
{
	putchar(ABC);
	ABC++;
}
putchar('\n');
```

Prints the alphabet in lowercase, and then in uppercase, followed by a new line.

4. When I was having that alphabet soup, I never thought that it would pay off

```c
char abc = 'a';

while (abc <= 'z')
{
	if (abc != 'e' && abc != 'q')
	{
		putchar(abc);
	}
	abc++;
}

putchar('\n');
```

Prints the alphabet in lowercase, followed by a new line.

5. Numbers

```c
int num = 0;

while (num < 10)
{
	printf("%d", num);
	num++;
}
printf("\n");
```

Prints all single digit numbers of base 10 starting from 0, followed by a new line.

6. Numberz

```c
int num = 48;

while (num <= 57)
{
	putchar(num);
	num++;
}
putchar('\n');
```

Prints all single digit numbers of base 10 starting from 0, followed by a new line.


