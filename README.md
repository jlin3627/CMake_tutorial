Setting path to GCC
https://www.reddit.com/r/C_Programming/comments/4nmo70/setting_path_for_gcc_in_windows_10/

Check Path
In cmd: Echo %PATH%

Check if gcc is installed
In cmd: gcc     reply: gcc:fatal error:no input files\n compilation terminated

Build cmake file
https://cmake.org/cmake/help/latest/guide/tutorial/index.html
http://derekmolloy.ie/hello-world-introductions-to-cmake/

CMD step by step (on windows)
Cd /d “D:/Software Projects/CMake Projects/tutorial/MyTutorialPractice
DIR -> same as ls -lsap check the files in the folder

Cmake.exe -G “MinGW Makefiles”

Run Make file:
mingw32-make.exe


Mingw tutorial
http://www.mingw.org/wiki/MinGW_for_First_Time_Users_HOWTO

g++ helloworld.cpp -o helloworld.exe

to execute in cygwin:
./helloworld.exe
