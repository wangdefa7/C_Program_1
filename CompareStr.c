 #include "stdio.h"
//���������������������ģ�Ҳ����cmpstr������
//strcmp������ʹ�ã�s1=s2 : 0
//				    s1>s2 : >1
//				    s1<s2 : <1(���ظ���)
void main_cmpstr() {
	char a[3][20];
	char str[30];
	int i;
	for (i = 0; i < 3; i++) {//������������
		gets(a[i]);
	}
	if (strcmp(a[0], a[1]) > 0) {//�Ƚ�ǰ�����Ĵ�С�������ķ���str�ַ���
		strcpy(str, a[0]);
	}
	else {
		strcpy(str, a[1]);
	}
	if (strcmp(str, a[2]) < 0) {//�Ƚ�str�͵��������Ĵ�С�����������������str,�͸��Ƶ�str��ȥ����������
		strcpy(str, a[2]);
	}
	printf("���ĵ����ǣ�%s", str);
}