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

#define dst_img_width 150	//调整后图片的宽度
#define dst_img_heigh 200	//调整后图片的高度

int main()
{
	Mat src_img;
	int i,j;
	string src_img_name = "test/";
	string dst_img_name = "test_change_size/";
	char facei[5],facej[5];	//图片名的下标

	/*
	for(i = 1; i <= 15; i++)	//15个人的人脸数据
	{
		for(j = 1; j <= 11; j++)	//每个人有11种不同的表情
		{
			itoa(i,facei,10);	//变量转化成字符型
			itoa(j,facej,10);

			
			src_img_name += facei;	//原图命名格式，比如第5个人的第6张图：5_s6.bmp
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

			dst_img_name += facei;	//调整后图片命名：5_s6n.bmp
			dst_img_name += "_s";
			dst_img_name += facej;
			dst_img_name += "n.bmp";

			imwrite(dst_img_name,dst_img_rsize);
			src_img_name = "file/",dst_img_name = "file_change_size/";	//每次循环后要重新清0字符数组的内容，目的文件夹一定要先建立，否则无效果
		}
	}
	*/

	for(i = 1; i <= 8; i++)	//15个人的人脸数据
	{
		
			itoa(i,facei,10);	//变量转化成字符型
			

			src_img_name += facei;	//原图命名格式，比如第5个人的第6张图：5_s6.bmp
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

			dst_img_name += facei;	//调整后图片命名：5_s6n.bmp
			dst_img_name += "_s";
			dst_img_name += "n.jpg";

			imwrite(dst_img_name,dst_img_rsize);
			src_img_name = "test/",dst_img_name = "test_change_size/";	//每次循环后要重新清0字符数组的内容，目的文件夹一定要先建立，否则无效果

			printf("Image%d's size changed! Done!\n",i);
		
	}
	system("pause");

	return 0;
}