 #include "stdio.h"
//输入三个单词找其中最大的，也就是cmpstr中最大的
//strcmp函数的使用：s1=s2 : 0
//				    s1>s2 : >1
//				    s1<s2 : <1(返回负数)
void main_cmpstr() {
	char a[3][20];
	char str[30];
	int i;
	for (i = 0; i < 3; i++) {//输入三个单词
		gets(a[i]);
	}
	if (strcmp(a[0], a[1]) > 0) {//比较前两个的大小，把最大的放入str字符中
		strcpy(str, a[0]);
	}
	else {
		strcpy(str, a[1]);
	}
	if (strcmp(str, a[2]) < 0) {//比较str和第三个数的大小，如果第三个数大于str,就复制到str中去，否则跳过
		strcpy(str, a[2]);
	}
	printf("最大的单词是：%s", str);
}