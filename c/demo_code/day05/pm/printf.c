#include <stdio.h>

main()
{
	printf("%010d\n",20);

	printf("%-10d\n",20);

	printf("%+010d\n",20);

	/* %0*3$d ת��Ϊ�Ե�3������Ϊ���ȣ���0���������� */
	printf("%0*3$d\n",20,30,40,50,60,70);
	printf("%0*6$d\n",20,30,40,50,60,70);

	/* %0*d  ת��Ϊ�Ե�1������Ϊ���ȣ���0���������� */
	printf("%0*d\n",20,30,40,50,60,70);

	/* */
	printf("%020.3f\n",12345.6789,123456.789123);
	
	/* %0.*f ����2������ת��Ϊ�Ե�1������Ϊ���ȣ���0�����ĸ����� */
	printf("%0.*f\n",9,123.4567);

	/* %0.*2$f ����1������ת��Ϊ�Ե�2������Ϊ���ȣ���0�����ĸ�����
		2������m�����棬��ʾ�Ե�m������Ϊ����
	*/
	printf("%0.*2$f\n",125.123456,10,12,15,18);
	printf("%0.*4$f\n",125.123456789,10,12,15,18);

	/* %0.*2$d ����1������ת��Ϊ�Ե�2������Ϊ���ȣ���0���������� */
	printf("%0.*2$d\n",125,10,12,15,18);

	printf("%0.*2$d\n",1234567,10,12,15,18);

	printf("%0.*4$d\n",7654321,10,12,15,18);


	/* %0.*d ����2������ת��Ϊ�Ե�1������Ϊ���ȣ���0���������� */
	printf("%0.*d\n",9,12);

}