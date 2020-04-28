#include <iostream>
#include <fstream>
#include <opencv2/opencv.hpp>
using namespace std;

using namespace cv;
using namespace std;
int main( int argc, char** argv )
{
     // Create and open a text file
  ofstream MyFile("/usr/local/packages/hello_opencv/vivek.txt");

  // Write to the file
  MyFile << "OPENCV Version installed:\n"<<CV_VERSION_MAJOR<<"."<<CV_VERSION_MINOR<<"."<<CV_VERSION_REVISION;

  // Close the file
  MyFile.close();
    return 0;
}

