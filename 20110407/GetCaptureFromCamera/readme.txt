CvCapture 
��Ƶ��ȡ�ṹ 

typedef struct CvCapture CvCapture;
�ṹCvCapture û�й����ӿڣ���ֻ�ܱ�������Ϊ��Ƶ��ȡ������һ�������� 

----------

cvCreateCameraCapture 
��ʼ��������ͷ�л�ȡ��Ƶ 

CvCapture* cvCreateCameraCapture( int index );
index 
Ҫʹ�õ�����ͷ���������ֻ��һ������ͷ�������ĸ�����ͷҲ����ν����ʹ�ò���-1Ӧ�ñ���ԡ� 
����cvCreateCameraCapture��������ͷ����Ƶ������ͳ�ʼ��CvCapture�ṹ��Ŀǰ��Windows�¿�ʹ�����ֽӿڣ�Video for Windows��VFW����Matrox Imaging Library��MIL���� Linux��Ҳ�����ֽӿڣ�V4L��FireWire��IEEE1394���� 

�ͷ�����ṹ��ʹ�ú���cvReleaseCapture�� 

----------

cvCreateFileCapture 
��ʼ�����ļ��л�ȡ��Ƶ 

CvCapture* cvCreateFileCapture( const char* filename );
filename 
��Ƶ�ļ����� 
����cvCreateFileCapture��ָ���ļ��е���Ƶ������ͳ�ʼ��CvCapture�ṹ�� 

������Ľṹ����ʹ�õ�ʱ����Ӧ��ʹ��cvReleaseCapture�����ͷŵ��� 