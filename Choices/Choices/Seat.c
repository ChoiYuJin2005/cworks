#include <stdio.h>
/*
   ���尴 ���� ���� �¼��� �� �� ���
   - ����� ���� �¼� �� ���� ������ �������� ���
	- ����� ���� �¼� �� ���� ������ �������� �ʴ� ���
*/
int main()
{
	int customer;    //���尴 ��
	int colume;      //�� ��
	int row;         //��(��) ��

	printf("���尴 �� �Է�: ");
	scanf_s("%d", &customer);

	printf("�¼��� ��: ");
	scanf_s("%d", &colume);

	if (customer % colume == 0) {
		row = customer / colume; //����� int��(����)
	}
	else
	{
		row = customer / colume + 1;
	}

	printf("%d���� ���� �ʿ��մϴ�.\n", row);

	return 0;
}