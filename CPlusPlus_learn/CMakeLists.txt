cmake_minimum_required(VERSION 3.21)
project(CPlusPlus_learn)

set(CMAKE_CXX_STANDARD 14)

# 遍历项目根目录下所有的 .cpp 文件
#file (GLOB files *.cpp)
#file (GLOB_RECURSE files *.cpp)
file (GLOB files *.cpp */*.cpp */*/*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()