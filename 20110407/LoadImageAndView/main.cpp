/*
 * main.cpp
 *
 *  Created on: 2011-4-7
 *      Author: egame
 */
#include <opencv/cv.h>
#include <opencv/highgui.h>

int main(int args,char *argv[]){
	printf("ͼƬ·��:%s",argv[1]);
	// CV_LOAD_IMAGE_GRAYSCALE ���ԻҶ�ͼ������
	IplImage *image = cvLoadImage(argv[1],CV_LOAD_IMAGE_GRAYSCALE);
	// CV_WINDOW_AUTOSIZE ��̬�����������ı䴰�ڴ�С
	cvNamedWindow("load an image and view It",CV_WINDOW_AUTOSIZE);
	cvShowImage("load an image and view It",image);
	// �ȴ���һ��ָ��
	cvWaitKey(0);
	return 0;
}
