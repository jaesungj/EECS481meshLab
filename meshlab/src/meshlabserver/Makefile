#############################################################################
# Makefile for building: ../distrib/meshlabserver
# Generated by qmake (2.01a) (Qt 4.8.1) on: Mon Nov 23 16:52:27 2015
# Project:  meshlabserver.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile meshlabserver.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DNO_XSERVER_DEPENDENCY -DQT_NO_DEBUG -DQT_SCRIPT_LIB -DQT_XMLPATTERNS_LIB -DQT_XML_LIB -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4/QtXml -I/usr/include/qt4/QtXmlPatterns -I/usr/include/qt4/QtScript -I/usr/include/qt4 -I. -I.. -I../../../vcglib -I../external/glew-1.7.0/include -I/usr/X11R6/include -I.
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/home/ubuntu/eecs481/EECS481meshLab/meshlab/src/distrib
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -L/usr/X11R6/lib -L../distrib -lcommon -lQtScript -lQtXmlPatterns -lQtXml -lQtOpenGL -lQtGui -lQtCore -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = mainserver.cpp qrc_meshlab.cpp
OBJECTS       = mainserver.o \
		qrc_meshlab.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		../general.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		meshlabserver.pro
QMAKE_TARGET  = meshlabserver
DESTDIR       = ../distrib/
TARGET        = ../distrib/meshlabserver

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

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) ../distrib/ || $(MKDIR) ../distrib/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: meshlabserver.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		../general.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtScript.prl \
		/usr/lib/i386-linux-gnu/libQtXmlPatterns.prl \
		/usr/lib/i386-linux-gnu/libQtXml.prl \
		/usr/lib/i386-linux-gnu/libQtOpenGL.prl \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile meshlabserver.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
../general.pri:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/opengl.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtScript.prl:
/usr/lib/i386-linux-gnu/libQtXmlPatterns.prl:
/usr/lib/i386-linux-gnu/libQtXml.prl:
/usr/lib/i386-linux-gnu/libQtOpenGL.prl:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile meshlabserver.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/meshlabserver1.0.0 || $(MKDIR) .tmp/meshlabserver1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/meshlabserver1.0.0/ && $(COPY_FILE) --parents ../meshlab/meshlab.qrc .tmp/meshlabserver1.0.0/ && $(COPY_FILE) --parents mainserver.cpp .tmp/meshlabserver1.0.0/ && (cd `dirname .tmp/meshlabserver1.0.0` && $(TAR) meshlabserver1.0.0.tar meshlabserver1.0.0 && $(COMPRESS) meshlabserver1.0.0.tar) && $(MOVE) `dirname .tmp/meshlabserver1.0.0`/meshlabserver1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/meshlabserver1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_rcc_make_all: qrc_meshlab.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_meshlab.cpp
qrc_meshlab.cpp: ../meshlab/meshlab.qrc \
		../common/script_system/meshlabfilterXMLspecificationformat.xsd \
		../common/script_system/math.js \
		../meshlab/images/open_project.png \
		../meshlab/images/logo_epoch.png \
		../meshlab/images/eye48.png \
		../meshlab/images/no_edit.png \
		../meshlab/images/open.png \
		../meshlab/images/eye_256_splash.png \
		../meshlab/images/smooth.png \
		../meshlab/images/logo_epoch_2.png \
		../meshlab/images/layers.png \
		../meshlab/images/selected_vert.png \
		../meshlab/images/dummy.png \
		../meshlab/images/lighton.png \
		../meshlab/images/selected_face.png \
		../meshlab/images/save.png \
		../meshlab/images/info.png \
		../meshlab/images/new_project.png \
		../meshlab/images/view_raster.png \
		../meshlab/images/backlines.png \
		../meshlab/images/100mesh.html \
		../meshlab/images/reload.png \
		../meshlab/images/logo.png \
		../meshlab/images/stop.png \
		../meshlab/images/facebook.gif \
		../meshlab/images/onscreenHelp.txt \
		../meshlab/images/logo_aimatshape.png \
		../meshlab/images/splitV.png \
		../meshlab/images/textures.png \
		../meshlab/images/layer_edit_locked.png \
		../meshlab/images/wire.png \
		../meshlab/images/import_mesh.png \
		../meshlab/images/search.png \
		../meshlab/images/snapshot.png \
		../meshlab/images/points.png \
		../meshlab/images/lightoff.png \
		../meshlab/images/flatlines.png \
		../meshlab/images/bbox.png \
		../meshlab/images/splitH.png \
		../meshlab/images/flat.png \
		../meshlab/images/layer_eye_open.png \
		../meshlab/images/layer_eye_close.png \
		../meshlab/images/layer_edit_unlocked.png \
		../meshlab/images/ok.png \
		../meshlab/images/cursors/plain_zoom.png \
		../meshlab/images/cursors/plain_pick.png \
		../meshlab/images/cursors/plain.png \
		../meshlab/images/cursors/plain_pan.png \
		../meshlab/images/cursors/plain_trackball.png
	/usr/bin/rcc -name meshlab ../meshlab/meshlab.qrc -o qrc_meshlab.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_rcc_clean 

####### Compile

mainserver.o: mainserver.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainserver.o mainserver.cpp

qrc_meshlab.o: qrc_meshlab.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_meshlab.o qrc_meshlab.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

