CreateImage
����ͷ���������� 

IplImage* cvCreateImage( CvSize size, int depth, int channels );
size 
ͼ�����. 
depth 
ͼ��Ԫ�ص�λ��ȣ����������������֮һ�� 
IPL_DEPTH_8U - �޷���8λ���� 
IPL_DEPTH_8S - �з���8λ���� 
IPL_DEPTH_16U - �޷���16λ���� 
IPL_DEPTH_16S - �з���16λ���� 
IPL_DEPTH_32S - �з���32λ���� 
IPL_DEPTH_32F - �����ȸ����� 
IPL_DEPTH_64F - ˫���ȸ����� 
channels 
ÿ��Ԫ�أ����أ�����ɫͨ������.������ 1, 2, 3 �� 4.ͨ���ǽ����ȡ�ģ�����ͨ���Ĳ�ɫͼ�����������ǣ� 
b0 g0 r0 b1 g1 r1 ... 
��Ȼͨ�� IPL ͼ���ʽ���Դ����ǽ����ȡ��ͼ�񣬲���һЩOpenCV Ҳ�ܴ�����, �����������ֻ�ܴ��������ȡͼ��. 
���� cvCreateImage ����ͷ���������ݣ�������������е���д��ʽ 

header = cvCreateImageHeader(size,depth,channels);
cvCreateData(header); //ֻ�Ǵ����ռ䣬�������ʼ���ռ��ڵ�����

----------

Copy
����һ���������һ������ 

void cvCopy( const CvArr* src, CvArr* dst, const CvArr* mask=NULL );
src 
�������顣 
dst 
������顣 
mask 
����������8���ص�ͨ�������飬��ָ������������б��ı��Ԫ�ء� 
����cvCopy�����������и���ѡ���ĳɷֵ�������飺 
���mask(I)!=0,��dst(I)=src(I)�� 
���������������е�һ����IplImage���͵Ļ�����ROI��COI����ʹ�á�����������������ͬ�������͡�ά���ʹ�С������Ҳ������������ɢ�����飨��������²�֧��mask���� 

----------

cvSaveImage 
����ͼ���ļ� 

int cvSaveImage( const char* filename, const CvArr* image );
filename 
�ļ����� 
image 
Ҫ�����ͼ�� 
����cvSaveImage����ͼ��ָ���ļ���ͼ���ʽ�ĵ�ѡ��������filename����չ������ο�cvLoadImage��ֻ��8λ��ͨ������3ͨ����ͨ��˳��Ϊ'BGR' ������ʹ������������档�����ʽ����Ȼ���ͨ��������Ҫ��������cvCvtScale ��cvCvtColorת��������ʹ��ͨ�õ�cvSave����ͼ��ΪXML����YAML��ʽ�� 