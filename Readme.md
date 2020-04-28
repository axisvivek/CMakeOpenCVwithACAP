> Example of using OpenCV with ACAP using CMake

```bat
(base) vivek@VIVEK-PC:$ rm CMakeCache.txt
(base) vivek@VIVEK-PC:$ cmake .
-- Toolchain file defaulted to '/opt/axis/acapsdk/3.00.1/cortexa9hf-neon/sysroots/x86_64-pokysdk-linux/usr/share/cmake/OEToolchainConfig.cmake'
-- The C compiler identification is GNU 8.3.0
-- The CXX compiler identification is GNU 8.3.0
-- Check for working C compiler: /opt/axis/acapsdk/3.00.1/cortexa9hf-neon/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-gcc
-- Check for working C compiler: /opt/axis/acapsdk/3.00.1/cortexa9hf-neon/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-gcc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /opt/axis/acapsdk/3.00.1/cortexa9hf-neon/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++
-- Check for working CXX compiler: /opt/axis/acapsdk/3.00.1/cortexa9hf-neon/sysroots/x86_64-pokysdk-linux/usr/bin/arm-poky-linux-gnueabi/arm-poky-linux-gnueabi-g++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found OpenCV: /mnt/d/WindowsSubsytemLinux/April2020/cmaketest/tutorials/install_aarch32/usr/local (found suitable version "4.3.0", minimum required is "4")
-- OpenCV library status:
--     version: 4.3.0
--     libraries: opencv_calib3d;opencv_core;opencv_dnn;opencv_features2d;opencv_flann;opencv_gapi;opencv_highgui;opencv_imgcodecs;opencv_imgproc;opencv_ml;opencv_objdetect;opencv_photo;opencv_stitching;opencv_video;opencv_videoio
--     include path: /mnt/d/WindowsSubsytemLinux/April2020/cmaketest/tutorials/install_aarch32/usr/local/include/opencv4
-- Configuring done
-- Generating done
-- Build files have been written to: /mnt/d/WindowsSubsytemLinux/April2020/cmaketest/tutorials
(base) vivek@VIVEK-PC:$ make
Scanning dependencies of target hello_opencv
[ 50%] Linking CXX executable hello_opencv
[100%] Built target hello_opencv
(base) vivek@VIVEK-PC:/mnt/d/WindowsSubsytemLinux/April2020/cmaketest/tutorials$ create-package.sh
make[100%] Built target hello_opencv
eap-create.sh
Reading local package.conf... ok
Package architecture: cortexa9hf-neon
Validating Package config...
Saving Package config: 'package.conf'...ok
Creating Package: 'hello_opencv_1_0_0_armv7hf.eap'... ok
Copying LICENSE file... ok

To install and run the package, you can use a browser and surf to the following page,
(replace axis_device_ip with the IP number of your Axis video product)

http://axis_device_ip/#settings/apps

Or simply use the script and type
eap-install.sh install



```
