/*
 * main.cpp
 *
 *  Created on: 2011-4-7
 *      Author: egame
 */
#include <opencv/cv.h>
#include <opencv/highgui.h>

int main(int args,char *argv[]){
	printf("%s",argv[0]);
	// load an image
	IplImage *loadImage = cvLoadImage(argv[1],CV_LOAD_IMAGE_ANYCOLOR);
	// ���ͼ���С
	CvSize size;
	size.width = loadImage->width;
	size.height = loadImage->height;
	// ����һ����СΪsize�Ŀ�ͼ��
	IplImage *newImage = cvCreateImage(size,loadImage->depth,3);
	// �Ѽ��ص�ͼ����д����ͼ����
	cvCopy(loadImage,newImage,NULL);
	// ����ͼ��
	cvNamedWindow("new Image",CV_WINDOW_AUTOSIZE);
	// չʾͼ��
	cvShowImage("new Image",newImage);
	// ����ͼ��
	char *newImageStr = strcpy(argv[0],"newImage.jpg");
	cvSaveImage(newImageStr,newImage);
	cvWaitKey(0);
	return 0;
}
