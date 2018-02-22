LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := NdkTest
LOCAL_SRC_FILES := NdkTest.cpp

LOCAL_C_INCLUDES := $(NDK_ROOT)/sources/cxx-stl/stlport/stlport
LOCAL_LDLIBS := $(NDK_ROOT)/sources/cxx-stl/stlport/libs/armeabi/libstlport_static.a

#增加 log 函数对应的log 库  liblog.so  libthread_db.a
LOCAL_LDLIBS += -llog

include $(BUILD_SHARED_LIBRARY)
#include $(LOCAL_PATH)/sip/Android.mk

#include $(LOCAL_PATH)/sip/android_toolchain/Android.mk