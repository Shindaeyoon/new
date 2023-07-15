//#include <stdio.h> // StructMemArrCopy
//#pragma warning(disable:4996)
//
//typedef struct person {
//	char name[30];
//	char phoneNum[30];
//	int age;
//} Person;
//
//void ShowPersonInfo(Person man) {
//	printf("Name : %s \n", man.name);
//	printf("Phone : %s \n", man.phoneNum);
//	printf("Age : %d \n", man.age);
//}
//
//Person ReadPersonInfo(void) {
//	Person man;
//	printf("Name? "); scanf("%s", man.name);
//	printf("Phone? "); scanf("%s", man.phoneNum);
//	printf("Age? "); scanf("%d", &man.age);
//	return man;
//}
//
//int main(void) {
//	Person man = ReadPersonInfo();
//	ShowPersonInfo(man);
//	return 0;
//}


//#include <stdio.h> // StructFunctionCallByRef
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//void OrgSymTrans(Point* ptr) {
//	ptr->xpos = (ptr->xpos) * -1;
//	ptr->ypos = (ptr->ypos) * -1;
//}
//
//void ShowPosition(Point pos) {
//	printf("[%d, %d] \n", pos.xpos, pos.ypos);
//}
//
//int main(void) {
//	Point pos = { 7,-5 };
//	OrgSymTrans(&pos);
//	ShowPosition(pos);
//	OrgSymTrans(&pos);
//	ShowPosition(pos);
//	return 0;
//}


//#include <stdio.h> // StructOperation
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//int main(void) {
//	Point pos1 = { 1,2 };
//	Point pos2;
//	pos2 = pos1;
//
//	printf("크기 : %d \n", sizeof(pos1));
//	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
//	printf("크기 : %d \n", sizeof(pos2));
//	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
//	return 0;
//}


//#include <stdio.h> // StructAddMin
//
//typedef struct point {
//	int xpos;
//	int ypos;
//} Point;
//
//Point AddPoint(Point pos1, Point pos2) {
//	Point pos = { pos1.xpos + pos2.xpos,pos1.ypos + pos2.ypos };
//	return pos;
//}
//
//Point MinPoint(Point pos1,Point pos2){
//	Point pos = { pos1.xpos - pos2.xpos,pos1.ypos - pos2.ypos };
//	return pos;
//}
//
//int main(void) {
//	Point pos1 = { 5,6 };
//	Point pos2 = { 2,9 };
//	Point result;
//
//	result = AddPoint(pos1, pos2);
//	printf("[%d, %d] \n", result.xpos, result.ypos);
//	result = MinPoint(pos1, pos2);
//	printf("[%d, %d] \n", result.xpos, result.ypos);
//	return 0;
//}