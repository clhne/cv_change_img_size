/************************************************************************/
/*       change image size                                              */
/*       Author : clhne													*/
/*       Date   : 2017-8-29                                             */
/************************************************************************/

#include <iostream>
#include <stdio.h>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui//highgui.hpp"

using namespace std;
using namespace cv;

#define dst_img_width 150	//������ͼƬ�Ŀ��
#define dst_img_heigh 200	//������ͼƬ�ĸ߶�

int main()
{
	Mat src_img;
	int i,j;
	string src_img_name = "test/";
	string dst_img_name = "test_change_size/";
	char facei[5],facej[5];	//ͼƬ�����±�

	/*
	for(i = 1; i <= 15; i++)	//15���˵���������
	{
		for(j = 1; j <= 11; j++)	//ÿ������11�ֲ�ͬ�ı���
		{
			itoa(i,facei,10);	//����ת�����ַ���
			itoa(j,facej,10);

			
			src_img_name += facei;	//ԭͼ������ʽ�������5���˵ĵ�6��ͼ��5_s6.bmp
			src_img_name += "_s";
			src_img_name += facej;
			src_img_name += ".bmp";
			
			src_img = imread(src_img_name,1);
			if(!src_img.data)
			{
				printf("No image!--Please check the path\n");
				system("pause");

				return -1;
			}
			Mat dst_img_rsize(dst_img_width,src_img_heigh,src_img.type());
			resize(src_img,dst_img_rsize,dst_img_rsize.size(),0,0,INTER_LINEAR);

			dst_img_name += facei;	//������ͼƬ������5_s6n.bmp
			dst_img_name += "_s";
			dst_img_name += facej;
			dst_img_name += "n.bmp";

			imwrite(dst_img_name,dst_img_rsize);
			src_img_name = "file/",dst_img_name = "file_change_size/";	//ÿ��ѭ����Ҫ������0�ַ���������ݣ�Ŀ���ļ���һ��Ҫ�Ƚ�����������Ч��
		}
	}
	*/

	for(i = 1; i <= 8; i++)	//15���˵���������
	{
		
			itoa(i,facei,10);	//����ת�����ַ���
			

			src_img_name += facei;	//ԭͼ������ʽ�������5���˵ĵ�6��ͼ��5_s6.bmp
			src_img_name += ".jpg";

			src_img = imread(src_img_name,1);
			if(!src_img.data)
			{
				printf("No image!--Please check the path\n");
				system("pause");

				return -1;
			}
			Mat dst_img_rsize(dst_img_width,dst_img_heigh,src_img.type());
			resize(src_img,dst_img_rsize,dst_img_rsize.size(),0,0,INTER_LINEAR);

			dst_img_name += facei;	//������ͼƬ������5_s6n.bmp
			dst_img_name += "_s";
			dst_img_name += "n.jpg";

			imwrite(dst_img_name,dst_img_rsize);
			src_img_name = "test/",dst_img_name = "test_change_size/";	//ÿ��ѭ����Ҫ������0�ַ���������ݣ�Ŀ���ļ���һ��Ҫ�Ƚ�����������Ч��

			printf("Image%d's size changed! Done!\n",i);
		
	}
	system("pause");

	return 0;
}