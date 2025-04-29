//#include <stdio.h>
//
//int main()
//{
//// 직각삼각형 모양의 별
//// j의 종료값을 변경함
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 1; j <= 5; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//}
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (int i = 1; i <= 5; i++)
//	{
//		for (int j = 1; j <= 6 - i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//1부터 순서대로 출력
//	/*
//	   1 2 3 4 5 
//	   6 7 8 9 10
//	   11 12 13 14 15
//	   16 17 18 19 20
//	*/
//	int num = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 1; j <= 5; j++)
//		{
//			//j의 종료값(배수)
//			num = 5 * i + j;
//			printf("%d ", 5 * i + j);
//		}
//		printf("\n");
//	}
//
//	//특정 수에서 멈추기
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 1; j <= 5; j++)
//		{
//			//j의 종료값(배수)
//			num = 5 * i + j;
//			if (num > 17) break;
//			printf("%d ", num);
//		}
//		printf("\n");
//	}
//
//
//
//
//	return 0;
//}