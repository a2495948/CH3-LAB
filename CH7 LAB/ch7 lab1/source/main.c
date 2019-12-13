#include <stdio.h>
#include <stdlib.h>

typedef struct _student
{
	char name[5];
	int chinese;
	int english;
	int math;
	int sum;
	float avg;
}student;

int main()
{
	student data[5];
	FILE *stream1;
	FILE *stream2;
	int i;

	 fopen_s(&stream1,"D://gradedata.txt" , "r");
	 fopen_s(&stream2,"D://gradeoutput.txt", "w");

	if (stream1 == NULL || stream2 == NULL)
	{
		printf("檔案開啟失敗\n");
	}
	else
	{
		fprintf_s(stream2,"%s\t%s\t%s\t%s\t%s\t%s\n" ,"姓名","國文","英文","數學","總和","平均");
		for (i = 0; i < 5; i++)
		{
			fscanf_s(stream1, "%s", data[i].name,6);
			fscanf_s(stream1, "%d", &data[i].chinese);
			fscanf_s(stream1, "%d", &data[i].english);
			fscanf_s(stream1, "%d", &data[i].math);
			data[i].sum = data[i].chinese + data[i].english + data[i].math;
			data[i].avg = data[i].sum / 3.0;

			fprintf_s(stream2, "%s\t%d\t%d\t%d\t%d\t%.2f\n", data[i].name, data[i].chinese, data[i].english, data[i].math, data[i].sum, data[i].avg);

		}
		fclose(stream1);
		fclose(stream2);
	}
	system("pause");
	return 0;

}