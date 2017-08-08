 #include<stdio.h>
 #include<stdlib.h>
 #define N 9

//直接插入排序

 void insert_sort(int a[], int n)//n为数组a的元素个数(int *a, int n)
 {
			 //进行N-1轮插入过程
	     for (int i = 1; i<n; i++)
		    {
			 //首先找到元素a[i]需要插入的位置
				 int j = 0;
				while ((a[j]<a[i]) && (j<i))
				 {
					 j++;
				 }
		 //将元素插入到正确的位置
		    if (i != j)  //如果i==j，说明a[i]刚好在正确的位置
		    {
		        int temp = a[i];
		        for (int k = i; k > j; k--)
		             {                         
			         a[k] = a[k - 1];         //全部后移
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