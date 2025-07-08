#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using std::cout, std::endl;

int main(int argc, char *argv[])
{
	// COMPILADOR
	cout << "C++ compiler version: " << __cplusplus << endl;
	cout << "OpenCV version : " << CV_VERSION << endl;
	cout << "Major version : " << CV_MAJOR_VERSION << endl;
	cout << "Minor version : " << CV_MINOR_VERSION << endl;
	cout << "Subminor version : " << CV_SUBMINOR_VERSION << endl;
	// VERIFICAMOS LA IMAGEN
    if( argc != 2 )
    {
        cout << "Error usage: demo.out <Image_Path>" << "\n";
        return -1;
    }
    // LEEMOS LA IMAGEN
	Mat image;
    image = imread(argv[1], IMREAD_GRAYSCALE );
    if(!image.data)
    {
        printf("No image data \n");
        return -1;
    }
    // RESULTADO
	namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}
