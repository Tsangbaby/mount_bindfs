TARGET := iphone:clang:latest:14.0
ARCHS = arm64 arm64e

include $(THEOS)/makefiles/common.mk

BUNDLE_NAME = BindFSPrefs

BindFSPrefs_FILES = BindFSPrefs.m
BindFSPrefs_FRAMEWORKS = UIKit
BindFSPrefs_PRIVATE_FRAMEWORKS =
BindFSPrefs_INSTALL_PATH = /Library/PreferenceBundles
BindFSPrefs_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/bundle.mk
