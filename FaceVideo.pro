QT       += core gui concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets



win32{
#添加opencv，seetaface头文件
INCLUDEPATH += D:\Qt\opencv452\include
INCLUDEPATH += D:\Qt\opencv452\include\opencv2
INCLUDEPATH += D:\Qt\SeetaFace\include
INCLUDEPATH += D:\Qt\SeetaFace\include\seeta
#添加opencv，seetace的库
LIBS+=D:\Qt\opencv452\x64\mingw\lib\libopencv*
LIBS+=D:\Qt\SeetaFace\lib\libSeeta*
}

unix{
INCLUDEPATH += /opt/opencv452/include/opencv4
INCLUDEPATH += /opt/opencv452/include
INCLUDEPATH += /opt/opencv452/include/opencv4/opencv2
INCLUDEPATH += /opt/opencv452/include/seeta
LIBS += -L/opt/opencv452/lib  -lopencv_world  -lSeetaFaceDetector -lSeetaFaceRecognizer -lSeetaFaceLandmarker -lSeetaFaceTracker  -lSeetaNet  -lSeetaQualityAssessor
}


unix{
INCLUDEPATH += /usr/local/include/opencv4
INCLUDEPATH +=  /usr/local/include
INCLUDEPATH +=  /usr/local/include/opencv4/opencv2
INCLUDEPATH += /usr/local/include/seeta
LIBS += -L/usr/local/lib  -lopencv_world  -lSeetaFaceDetector -lSeetaFaceRecognizer -lSeetaFaceLandmarker -lSeetaFaceTracker  -lSeetaNet  -lSeetaQualityAssessor
}




CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    facemodel.cpp \
    main.cpp \
    facevideo.cpp \
    softkey.cpp

HEADERS += \
    facemodel.h \
    facevideo.h \
    softkey.h

FORMS += \
    facevideo.ui \
    softkey.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
