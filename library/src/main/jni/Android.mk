#

TARGET_PLATFORM := android-19

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE   := ImageFilter

LOCAL_SRC_FILES := nativ_FilterFunc.cpp \
					AverageSmoothFilter.cpp \
					GaussianBlurFilter.cpp \
					HDRFilter.cpp \
					SoftGlowFilter.cpp \
					LightFilter.cpp \
					LomoAddBlackRound.cpp \
					NeonFilter.cpp \
					OilFilter.cpp \
					SketchFilter.cpp \
					TvFilter.cpp \
					SharpenFilter.cpp \
					ReliefFilter.cpp \
					PixelateFilter.cpp \
					BlockFilter.cpp \
					GammaCorrectionFilter.cpp \
					MotionBlurFilter.cpp \
					BrightContrastFilter.cpp \
					ColorTranslator.cpp \
					HueSaturationFilter.cpp \
					GothamFilter.cpp \

LOCAL_ARM_MODE := arm
COMMON_CFLAGS := -Werror -DANDROID -DDISABLE_IMPORTGL

ifeq ($(TARGET_ARCH),x86)
	LOCAL_CFLAGS   := $(COMMON_CFLAGS)
else
	LOCAL_CFLAGS   := -mfpu=vfp -mfloat-abi=soft -mhard-float -fno-short-enums  -D_NDK_MATH_NO_SOFTFP=1 $(COMMON_CFLAGS)
endif
LOCAL_LDLIBS := -llog

LOCAL_CPPFLAGS += -std=gnu++11

include $(BUILD_SHARED_LIBRARY)

