 #include<stdio.h>
 #include<stdlib.h>
 #define N 9

//ֱ�Ӳ�������

 void insert_sort(int a[], int n)//nΪ����a��Ԫ�ظ���(int *a, int n)
 {
			 //����N-1�ֲ������
	     for (int i = 1; i<n; i++)
		    {
			 //�����ҵ�Ԫ��a[i]��Ҫ�����λ��
				 int j = 0;
				while ((a[j]<a[i]) && (j<i))
				 {
					 j++;
				 }
		 //��Ԫ�ز��뵽��ȷ��λ��
		    if (i != j)  //���i==j��˵��a[i]�պ�����ȷ��λ��
		    {
		        int temp = a[i];
		        for (int k = i; k > j; k--)
		             {                         
			         a[k] = a[k - 1];         //ȫ������
				      }
		         a[j] = temp;
			 }
			for (int xi = 0; xi<N; xi++)
				printf("%d  ", a[xi]);
			    printf("\n");
	}
		 
 }
 //int  main()
 //{  //test git hub
	//  int num[N] = { 89, 38, 11, 78, 96, 44, 19, 25, 38};
	// insert_sort(num, N);
	// for (int xi = 0; xi<N; xi++)
	// printf("%d  ", num[xi]);
 //    printf("\n");
 //    return 0;
 //}