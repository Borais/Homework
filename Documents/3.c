#include <stdio.h>

int main()
{
	int x;
	/*
	�.�. ��������� � * � % ����������
	������� ���������� ��������� -12,
	����� ����� ������� 0,
	� ��� ����� �������� 5.
	��������� ������� 5
	*/
	x = -3 * 4 % -6 + 5;
	printf("%d", x);
	return 0;
}