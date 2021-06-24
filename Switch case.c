#include<stdio.h>
main()
  {
	printf("Pick your choice: \n1. French Fries,Rs.99\n2. Burger,Rs.129\n3. Sandwich,Rs.149\n4. Pasta,Rs.179\n5. Pizza,Rs.239");
	int ch = 0;
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			printf("Food item - French Fries\nPrice-Rs.99");
			break;
		case 2:
			printf("Food item - Burger\nPrice-Rs.129");
			break;
		case 3:
			printf("Food item - Sandwich\nPrice-Rs149");
			break;
		case 4:
			printf("Food item - Pasta\nPrice-Rs.179");
			break;
		case 5:
			printf("Food item - Pizza\nPrice-Rs.239");
			break;
			default : printf("Invalid");		
	}
}
