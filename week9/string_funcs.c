// string_funcs.c
#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 100

int main(void) {
	// ��������� ���ڿ� 2���� �޾ƿ�.
	char str1[STRING_LENGTH],
		str2[STRING_LENGTH],
		str3[STRING_LENGTH]; // ���糪 ������ ���ڿ�

	printf("Enter first string >>> ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1] = '\0'; 
	// fgets �Լ��� ������� ��, ���� ���ڿ�����
	// ������ ���� '\n' ��� '\0' ���� �����մϴ�.

	printf("Enter second string >>> ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = '\0';

	printf("\n-----------\n");

	// ���� �Լ�

	// ���ڿ��� ���̸� ���
	printf("str1�� ����: %d\nstr2�� ����:%d\n", (int)strlen(str1), (int)strlen(str2));

	// str1�� str3���� ������ ���
	strcpy_s(str3, sizeof(str3), str1); // strcpy() ��� �����ؾ���. [str3�� ���̰� �ʹ� ������ overflow����, ���� strcpy_s ���[
	printf("���� �� str3: %s\n", str3);

	// str1���� str2�� �����ϰ� ���
	strcat_s(str1, sizeof(str1), str2);
	printf("str1�� str2�� ���� ��:\n%s", str1);


	return 0;
}