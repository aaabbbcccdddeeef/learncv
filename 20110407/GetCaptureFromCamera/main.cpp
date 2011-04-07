/*
 * main.cpp
 *
 *  Created on: 2011-4-7
 *      Author: egame
 */
#include <opencv/cv.h>
#include <opencv/highgui.h>
int main(int args,char *argv[]){
	// ��Ƶ�ṹ
	CvCapture *capture = NULL;
	// �������ͷ����
	// CV_CAP_ANY �Զ�
	capture = cvCreateCameraCapture(CV_CAP_ANY);
	if (!capture) {
		exit(0);
	}
	cvNamedWindow("camera",CV_WINDOW_AUTOSIZE);
	// ͼƬ�ṹ
	IplImage *image = NULL;
	while(image = cvQueryFrame(capture)){
		// ��ɫ����
		cvNot(image,image);
		// ��ʵͼ��
		cvShowImage("camera",image);
		// �����������룬���������������while
		if( cvWaitKey(2) >= 0 )
			break;
	}
	// �ͷ���Ƶ
	cvReleaseCapture(&capture);
	return 0;
}
