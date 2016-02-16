#############################################################################
# Makefile for building: CTests
# Generated by qmake (3.0) (Qt 5.5.0)
# Project:  CTests.pro
# Template: app
# Command: /opt/qt/5.5/gcc_64/bin/qmake -spec linux-clang CONFIG+=debug -o Makefile CTests.pro
#############################################################################

MAKEFILE      = Makefile

####### Compiler, tools and options

CC            = clang
CXX           = clang++
DEFINES       = 
CFLAGS        = -pipe -g -Wall -W -fPIC $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -fPIC $(DEFINES)
INCPATH       = -I. -I/opt/qt/5.5/gcc_64/mkspecs/linux-clang
QMAKE         = /opt/qt/5.5/gcc_64/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = CTests1.0.0
DISTDIR = /home/yioannidis/Downloads/c/Weeks\ Material\ 2015/Week14/2016/testC/.tmp/CTests1.0.0
LINK          = clang++
LFLAGS        = -ccc-gcc-name g++ -Wl,-rpath,/opt/qt/5.5/gcc_64
LIBS          = $(SUBLIBS)  
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main2.c 
OBJECTS       = main2.o
DIST          = CTests.pro  main2.c
QMAKE_TARGET  = CTests
DESTDIR       = #avoid trailing-slash linebreak
TARGET        = CTests


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: CTests.pro ../../../../../../.qmake.cache /opt/qt/5.5/gcc_64/mkspecs/linux-clang/qmake.conf /opt/qt/5.5/gcc_64/mkspecs/features/spec_pre.prf \
		/opt/qt/5.5/gcc_64/mkspecs/common/unix.conf \
		/opt/qt/5.5/gcc_64/mkspecs/common/linux.conf \
		/opt/qt/5.5/gcc_64/mkspecs/common/sanitize.conf \
		/opt/qt/5.5/gcc_64/mkspecs/common/gcc-base.conf \
		/opt/qt/5.5/gcc_64/mkspecs/common/gcc-base-unix.conf \
		/opt/qt/5.5/gcc_64/mkspecs/common/clang.conf \
		/opt/qt/5.5/gcc_64/mkspecs/qconfig.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dcore.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dcore_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dinput.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dinput_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dquick.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dquick_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dquickrenderer.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dquickrenderer_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3drenderer.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3drenderer_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_core.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_declarative.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_enginio.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_help.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_location.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_location_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_network.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_script.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_script_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_scripttools.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_uiplugin.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webchannel.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webengine.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webengine_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webenginecore.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webenginecore_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webenginewidgets.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webenginewidgets_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webkit.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_websockets.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webview_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/opt/qt/5.5/gcc_64/mkspecs/features/qt_functions.prf \
		/opt/qt/5.5/gcc_64/mkspecs/features/qt_config.prf \
		/opt/qt/5.5/gcc_64/mkspecs/linux-clang/qmake.conf \
		/opt/qt/5.5/gcc_64/mkspecs/features/spec_post.prf \
		../../../../../../.qmake.cache \
		/opt/qt/5.5/gcc_64/mkspecs/features/exclusive_builds.prf \
		/opt/qt/5.5/gcc_64/mkspecs/features/default_pre.prf \
		/opt/qt/5.5/gcc_64/mkspecs/features/resolve_config.prf \
		/opt/qt/5.5/gcc_64/mkspecs/features/default_post.prf \
		/opt/qt/5.5/gcc_64/mkspecs/features/warn_on.prf \
		/opt/qt/5.5/gcc_64/mkspecs/features/testcase_targets.prf \
		/opt/qt/5.5/gcc_64/mkspecs/features/exceptions.prf \
		/opt/qt/5.5/gcc_64/mkspecs/features/yacc.prf \
		/opt/qt/5.5/gcc_64/mkspecs/features/lex.prf \
		CTests.pro
	$(QMAKE) -spec linux-clang CONFIG+=debug -o Makefile CTests.pro
/opt/qt/5.5/gcc_64/mkspecs/features/spec_pre.prf:
/opt/qt/5.5/gcc_64/mkspecs/common/unix.conf:
/opt/qt/5.5/gcc_64/mkspecs/common/linux.conf:
/opt/qt/5.5/gcc_64/mkspecs/common/sanitize.conf:
/opt/qt/5.5/gcc_64/mkspecs/common/gcc-base.conf:
/opt/qt/5.5/gcc_64/mkspecs/common/gcc-base-unix.conf:
/opt/qt/5.5/gcc_64/mkspecs/common/clang.conf:
/opt/qt/5.5/gcc_64/mkspecs/qconfig.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dcore.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dcore_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dinput.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dinput_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dquick.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dquick_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dquickrenderer.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3dquickrenderer_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3drenderer.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_3drenderer_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_concurrent.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_core.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_core_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_dbus.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_declarative.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_designer.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_designer_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_enginio.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_gui.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_gui_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_help.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_help_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_location.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_location_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_multimedia.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_network.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_network_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_nfc.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_opengl.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_positioning.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_printsupport.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qml.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qml_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qmltest.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quick.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quick_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_script.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_script_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_scripttools.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_sensors.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_serialport.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_sql.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_sql_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_svg.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_svg_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_testlib.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_uiplugin.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_uitools.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webchannel.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webengine.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webengine_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webenginecore.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webenginecore_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webenginewidgets.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webenginewidgets_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webkit.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_websockets.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_webview_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_widgets.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_x11extras.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xcb_qpa_lib_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xml.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xml_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
/opt/qt/5.5/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/opt/qt/5.5/gcc_64/mkspecs/features/qt_functions.prf:
/opt/qt/5.5/gcc_64/mkspecs/features/qt_config.prf:
/opt/qt/5.5/gcc_64/mkspecs/linux-clang/qmake.conf:
/opt/qt/5.5/gcc_64/mkspecs/features/spec_post.prf:
../../../../../../.qmake.cache:
/opt/qt/5.5/gcc_64/mkspecs/features/exclusive_builds.prf:
/opt/qt/5.5/gcc_64/mkspecs/features/default_pre.prf:
/opt/qt/5.5/gcc_64/mkspecs/features/resolve_config.prf:
/opt/qt/5.5/gcc_64/mkspecs/features/default_post.prf:
/opt/qt/5.5/gcc_64/mkspecs/features/warn_on.prf:
/opt/qt/5.5/gcc_64/mkspecs/features/testcase_targets.prf:
/opt/qt/5.5/gcc_64/mkspecs/features/exceptions.prf:
/opt/qt/5.5/gcc_64/mkspecs/features/yacc.prf:
/opt/qt/5.5/gcc_64/mkspecs/features/lex.prf:
CTests.pro:
qmake: FORCE
	@$(QMAKE) -spec linux-clang CONFIG+=debug -o Makefile CTests.pro

qmake_all: FORCE


all: Makefile $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/


clean: compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


####### Sub-libraries

check: first

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

main2.o: main2.c 
	$(CC) -c $(CFLAGS) $(INCPATH) -o main2.o main2.c

####### Install

install:  FORCE

uninstall:  FORCE

FORCE:

