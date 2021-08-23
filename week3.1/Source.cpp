#include <stdio.h>

int i, j, k,s;

void check()
{
	s = (i + j + k)/5;
	switch (s)
	{

	case 15: printf("Grade:B+\n");
		break;
	case 14: printf("Grade:B\n");
		break;
	case 13: printf("Grade:C+\n");
		break;
	case 12: printf("Grade:C\n");
		break;
	case 11: printf("Grade:D+\n");
		break;
	case 10: printf("Grade:D\n");
		break;
	default:printf("Grade:F\n");
		break;

	case 16:
	case 17:
	case 18:
	case 19:
	case 20: printf("Grade:A\n");
		break;

	}
}

int main()
{
	printf("คะแนนเก็บของนักเรียน(30): ");
	scanf_s("%d", &i);

	printf("คะแนนสอบกลางภาคของนักเรียน(30): ");
	scanf_s("%d", &j);

	printf("คะแนนสอบปลายภาคของนักเรียน(40): ");
	scanf_s("%d", &k);
	printf("\n");

	check();

	return 0;
}