//#include <stdio.h> // p.445 문제 2
//#include <string.h>
//#pragma warning(disable:4996)
//
//int main(vooid) {
//	char str1[20];
//	char str2[20] = "Hello World";
//	char str3[40];
//
//	printf("첫 번째 문자열 입력 :");
//	fgets(str1, 20, stdin);
//	str1[strlen(str1) - 1] = '\0';
//
//	printf("두 번째 문자열 입력 :");
//	fgets(str2, 20, stdin);
//	str2[strlen(str2) - 1] = '\0';
//
//	printf("조합의 결과 :");
//	strcpy(str3, str1);
//	strcat(str3, str2);
//	fputs(str3, stdout);
//
//	return 0;
//}


//#include <stdio.h> // p.446 문제 3
//#include <string.h>
//
//int main(void) {
//	char str1[20];
//	char str2[20];
//
//	printf("첫 번째 사람 정보 입력 :");
//	fgets(str1, 20, stdin);
//	str1[strlen(str1) - 1] = '\0';
//
//	printf("두 번째 사람 정보 입력 :");
//	fgets(str2, 20, stdin);
//	str2[strlen(str2) - 1] = '\0';
//
//
//	int str1Len = strlen(str1);
//	int str2Len = strlen(str2);
//
//	if (str1Len != str2Len) {
//		printf("이름이 동일합니다.");
//		return 0;
//	}
//	else {
//		for (int i = 0; i < str1Len; i++) {
//			if (str1[i] != str2[i]) {
//				printf("이름이 동일하지 않습니다.");
//				return 0;
//			}
//		}
//	}
//
//	printf("나이가 같습니다.");
//	//for (int n=0; n < len; n++) {
//	//	if (str1[n] == str2[n])
//	//		printf("1\n");
//	//	else
//	//		printf("0\n");
//	//}
//	//fputs(str1, stdout);
//	//fputs(str2,  stdout);
//}