> source /opt/axis/acapsdk/3.00.1/cortexa9hf-neon/environment-setup-cortexa9hf-neon-poky-linux-gnueabi

> arm-poky-linux-gnueabi-g++

> arm-poky-linux-gnueabi-gcc

> git clone https://github.com/opencv/opencv.git

> git clone https://github.com/opencv/opencv_contrib.git
git

```bash

####################
  # build for aarch32
  ####################
  
  mkdir build_aarch32
  cd build_aarch32
  
  cmake -DCMAKE_TOOLCHAIN_FILE="../platforms/linux/arm-gnueabi.toolchain.cmake" -D CMAKE_INSTALL_PREFIX="/usr/local" -D BUILD_SHARED_LIBS=OFF -D CMAKE_BUILD_TYPE=RELEASE -D BUILD_DOCS=OFF -D BUILD_EXAMPLES=OFF -D BUILD_opencv_apps=OFF -D WITH_CAROTENE=OFF -D BUILD_opencv_python2=OFF -D BUILD_opencv_python3=OFF -D BUILD_PERF_TESTS=OFF -D BUILD_TESTS=OFF -D FORCE_VTK=OFF -D WITH_FFMPEG=OFF -D WITH_GDAL=OFF -D WITH_IPP=OFF -D WITH_OPENEXR=OFF -D WITH_OPENGL=OFF -D WITH_QT=OFF -D WITH_TBB=OFF -D WITH_XINE=OFF -D BUILD_JPEG=ON -D BUILD_ZLIB=ON -D BUILD_PNG=ON -D BUILD_TIFF=OFF -D BUILD_BUILD_JASPER=OFF -D WITH_ITT=OFF -D WITH_LAPACK=OFF -D WITH_OPENCL=OFF -D WITH_TIFF=OFF -D WITH_PNG=ON -D WITH_OPENCLAMDFFT=OFF -D WITH_OPENCLAMDBLAS=OFF -D WITH_VA_INTEL=OFF -D WITH_WEBP=OFF -D WITH_JASPER=OFF OPENCV_EXTRA_MODULES_PATH="/mnt/d/Git/OpenCV/Build/opencv_contrib/modules" ..
  
  make -j$(nproc)
  
  mkdir install_aarch32
  make DESTDIR=./install_aarch32 install

```
