// string_funcs.c
#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 100

int main(void) {
	// 사용자한테 문자열 2개를 받아요.
	char str1[STRING_LENGTH],
		str2[STRING_LENGTH],
		str3[STRING_LENGTH]; // 복사나 결합할 문자열

	printf("Enter first string >>> ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1] = '\0'; 
	// fgets 함수를 사용했을 때, 받은 문자열에서
	// 마지막 문자 '\n' 대신 '\0' 으로 변경합니다.

	printf("Enter second string >>> ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = '\0';

	printf("\n-----------\n");

	// 내장 함수

	// 문자열의 길이를 출력
	printf("str1의 길이: %d\nstr2의 길이:%d\n", (int)strlen(str1), (int)strlen(str2));

	// str1은 str3으로 복사해 출력
	strcpy_s(str3, sizeof(str3), str1); // strcpy() 사용 주의해야함. [str3의 길이가 너무 적으면 overflow오류, 따라서 strcpy_s 사용[
	printf("복사 후 str3: %s\n", str3);

	// str1에서 str2를 결합하고 출력
	strcat_s(str1, sizeof(str1), str2);
	printf("str1와 str2를 결합 후:\n%s", str1);


	return 0;
}