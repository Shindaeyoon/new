//#include <stdio.h> // 문제 23-1
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//void SwapPoint(Point* pos1, Point* pos2) {
//	Point temp = *pos1;
//	*pos1 = *pos2;
//	*pos2 = temp;
//}
//
//int main(void) {
//	int result;
//	Point pos1 = { 2,4 };
//	Point pos2 = { 5,7 };
//	SwapPoint(&pos1, &pos2);
//	printf("pos1: [%d, %d] \n", pos1.xpos, pos1.ypos);
//	printf("pos2: [%d, %d] \n", pos2.xpos, pos2.ypos);
//	return 0;
//}

//#include<stdio.h> // StructImportant
//#pragma warning(disable:4996)
//
//typedef struct student {
//	char name[20];
//	char stdnum[20];
//	char school[20];
//	char major[20];
//	int year;
//} Student;
//
//void ShowStudentInfo(Student* sptr) {
//	printf("학생 이름: %s \n", sptr->name);
//	printf("학생 고유번호: %s \n", sptr->stdnum);
//	printf("학교 이름: %s \n", sptr->school);
//	printf("선택 전공: %s \n", sptr->major);
//	printf("학년: %d \n", sptr->year);
//}
//
//int main(void) {
//	Student arr[7];
//	int i;
//
//	for (i = 0; i < 7; i++) {
//		printf("이름 : "); scanf("%s", arr[i].name);
//		printf("번호 : "); scanf("%s", arr[i].stdnum);
//		printf("학교 : "); scanf("%s", arr[i].school);
//		printf("전공 : "); scanf("%s", arr[i].major);
//		printf("학년 : "); scanf("%d", &arr[i].year);
//	}
//
//	for (i = 0; i < 7; i++)
//		ShowStudentInfo(&arr[i]);
//	return 0;
//}


//#include<stdio.h> // CircleIncludePoint
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//typedef struct circle {
//	Point cen;
//	double rad;
//} Circle;
//
//void ShowCircleInfo(Circle* cptr) {
//	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
//	printf("radius ;%g \n\n", cptr->rad);
//}
//
//int main(void) {
//	Circle c1 = { {1,2},3.5 };
//	Circle c2 = { 2,4,3.9 };
//	ShowCircleInfo(&c1);
//	ShowCircleInfo(&c2);
//	return 0;
//}


#include <stdio.h>
#pragma warning(disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;

int main(void) {
	Point pos;
	printf("좌표 입력: ");
	printf("가나: ");
	scanf("%d %d", &pos.xpos, &pos.ypos);
	printf("%d %d", pos.xpos, pos.ypos);
	return 0;
}