#include <stdio.h>
/*
   입장객 수에 따른 좌석의 줄 수 계산
   - 입장색 수가 좌석 열 수로 나누어 떨어지는 경우
	- 입장색 수가 좌석 열 수로 나누어 떨어지지 않는 경우
*/
int main()
{
	int customer;    //입장객 수
	int colume;      //열 수
	int row;         //줄(행) 수

	printf("입장객 수 입력: ");
	scanf_s("%d", &customer);

	printf("좌석열 수: ");
	scanf_s("%d", &colume);

	if (customer % colume == 0) {
		row = customer / colume; //계산결과 int형(정수)
	}
	else
	{
		row = customer / colume + 1;
	}

	printf("%d개의 줄이 필요합니다.\n", row);

	return 0;
}