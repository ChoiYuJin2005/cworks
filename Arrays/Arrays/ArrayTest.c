#include <stdio.h>
#define MAX_LEN 4

int main()
{
	//�迭 ��� ���� �� ����
	int scores[MAX_LEN]; //�迭�� ũ��� ����� ���!
	int idxOfScores = 0; //�迭�� �ε����� ������ ����

	//��� �߰�(����)
	if (idxOfScores < MAX_LEN)
		scores[idxOfScores++] = 80; 
	if (idxOfScores < MAX_LEN)
		scores[idxOfScores++] = 70;
	if (idxOfScores < MAX_LEN)
		scores[idxOfScores++] = 95;
	if (idxOfScores < MAX_LEN)
		scores[idxOfScores++] = 80;
	if (idxOfScores < MAX_LEN)
		scores[idxOfScores++] = 100;

	//��� ���� 
	if (idxOfScores > 0) idxOfScores--;
	if (idxOfScores > 0) idxOfScores--;
	if (idxOfScores > 0) idxOfScores--;
	if (idxOfScores > 0) idxOfScores--;
	//if (idxOfScores > 0) idxOfScores--;

	//��ü ���
	//���� �� ���� ó��
	printf("���� �迭 ����\n");
	if (idxOfScores == 0)
	{
		printf("(��� ����)\n");
	}
	else
	{
		printf("���� ��� ��: %d\n", idxOfScores);
		for (int i = 0; i < idxOfScores; i++)
		{
			printf("%d\n", scores[i]);
		}
	}

	return 0;
}