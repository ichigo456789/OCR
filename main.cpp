#ifdef _CH_
#pragma package <opencv>
#endif

#ifndef _EiC
#include <cv.h>
#include "OCR.h"
#endif

int main( int argc, char** argv )
{
    IplImage* imagev = cvLoadImage("../sampleUppercase.pbm", 0);
	//////////////////
	//My OCR
	//////////////////
	OCR ocr("../OCR/", 26, 3);
	ocr.classify(imagev, 1);
    return 0;
}
