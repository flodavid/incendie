#############################################################################
# Makefile for building: Incendie
# Generated by qmake (3.0) (Qt 5.5.1)
# Project:  incendie.pro
# Template: app
# Command: C:\Applications\Qt\5.5\mingw492_32\bin\qmake.exe -o Makefile incendie.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = C:\Applications\Qt\5.5\mingw492_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: incendie.pro C:/Applications/Qt/5.5/mingw492_32/mkspecs/win32-g++/qmake.conf C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/spec_pre.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/qdevice.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/device_config.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/qconfig.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcollision.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcollision_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcore.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dinput.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dlogic.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquick.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquickrenderer.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquickrenderer_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3drenderer.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3drenderer_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_clucene_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_core.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_core_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_declarative.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_declarative_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designer.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designer_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_gui.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_gui_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_help.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_help_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_location.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_location_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_network.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_network_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qml.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qml_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quick.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quick_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_script.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_script_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_scripttools.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sql.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sql_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_svg.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_svg_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uiplugin.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xml.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xml_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/qt_functions.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/qt_config.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/qt_config.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/win32-g++/qmake.conf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/spec_post.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/exclusive_builds.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/default_pre.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/default_pre.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/resolve_config.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/exclusive_builds_post.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/default_post.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/rtti.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/precompile_header.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/warn_on.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/qt.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/resources.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/moc.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/opengl.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/windows.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/testcase_targets.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/exceptions.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/yacc.prf \
		C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/lex.prf \
		incendie.pro \
		C:/Applications/Qt/5.5/mingw492_32/lib/qtmain.prl \
		C:/Applications/Qt/5.5/mingw492_32/lib/Qt5Gui.prl \
		C:/Applications/Qt/5.5/mingw492_32/lib/Qt5Core.prl
	$(QMAKE) -o Makefile incendie.pro
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/spec_pre.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/qdevice.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/device_config.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/qconfig.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcollision.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcollision_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcore.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dcore_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dinput.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dinput_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dlogic.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquick.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquick_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquickrenderer.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3dquickrenderer_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3drenderer.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_3drenderer_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axbase_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_axserver_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_clucene_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_concurrent_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_core.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_core_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_dbus_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_declarative.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_declarative_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designer.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designer_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_enginio_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_gui.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_gui_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_help.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_help_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_location.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_location_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimedia_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_network.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_network_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_nfc_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_opengl_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_platformsupport_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_positioning_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_printsupport_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qml.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qml_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qmltest_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quick.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quick_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_script.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_script_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_scripttools.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_scripttools_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sensors_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_serialport_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sql.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_sql_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_svg.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_svg_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_testlib_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uiplugin.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_uitools_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webchannel_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkit_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_websockets_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_widgets_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_winextras_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xml.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xml_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/qt_functions.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/qt_config.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/qt_config.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/win32-g++/qmake.conf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/spec_post.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/exclusive_builds.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/default_pre.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/default_pre.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/resolve_config.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/exclusive_builds_post.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/default_post.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/rtti.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/precompile_header.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/warn_on.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/qt.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/resources.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/moc.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/opengl.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/win32/windows.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/testcase_targets.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/exceptions.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/yacc.prf:
C:/Applications/Qt/5.5/mingw492_32/mkspecs/features/lex.prf:
incendie.pro:
C:/Applications/Qt/5.5/mingw492_32/lib/qtmain.prl:
C:/Applications/Qt/5.5/mingw492_32/lib/Qt5Gui.prl:
C:/Applications/Qt/5.5/mingw492_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile incendie.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
