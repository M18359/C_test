#define _CRT_SECURE_NO_WARNINGS
#include "nlink_utils.h"
#include "nlink_linktrack_tagframe0.h"


int main()
{
	/*FILE* pf = fopen("111.txt","r");
	if (pf == NULL)
	{
		perror("pf");
	}*/
	uint8_t data[1024];
	size_t data_length;
	{
		const char* string = "55 01 01 02 8e 0a 00 a5 ff ff e8 03 00 da ff ff fa ff ff 00 00 00 35 0c 00 a3 15 00 cd 1a 00 4c 12 00 00 00 00 00 00 00 00 00 00 00 00 00 27 ac e2 3c a2 7d 0b 3c d2 70 3b bd cf a5 80 3e 3e fc 1b 41 1f a1 26 bd 26 5d 57 41 bd 80 57 41 3f 63 57 41 71 38 f5 25 44 fa 8a 22 28 bf 5a b7 00 be 20 4f 3d bf 1c 0b 52 3d f4 26 3d 40 0c ae 00 00 cb 17 01 00 f0 0b 10 ff 54 13 1d 48 00 00 bc fd";
		data_length = NLink_StringToHex(string, data);
		if (g_nlt_tagframe0.UnpackData(data, data_length)) {
			nlt_tagframe0_result_t* result = &g_nlt_tagframe0.result;
			int i = 0;
			for (i = 0; i < 3; i++)
			{
				printf("vel:%f ", result->vel_3d[i]);
				printf("pos:%f ", result->pos_3d[i]);
				printf("\n");
			}
			/*	nint24_t pos_3d[3];
			nint24_t vel_3d[3];
			nint24_t dis_arr[8];*/
		}
	}


	/*fclose(pf);
	pf = NULL;*/
	return 0;
}