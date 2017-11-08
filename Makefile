#############################################################################
# Makefile for building: SchoolMap
# Generated by qmake (3.0) (Qt 5.6.2)
# Project:  SchoolMap.pro
# Template: app
# Command: E:\Qt\Qt5.6.2\5.6\msvc2015_64\bin\qmake.exe -spec win32-msvc2015 "CONFIG+=debug" "CONFIG+=qml_debug" -o Makefile SchoolMap.pro
#############################################################################

MAKEFILE      = Makefile

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = E:\Qt\Qt5.6.2\5.6\msvc2015_64\bin\qmake.exe
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
		debug \
		release


debug: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: SchoolMap.pro E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\win32-msvc2015\qmake.conf E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\spec_pre.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\common\angle.conf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\common\msvc-base.conf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\common\msvc-desktop.conf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\qconfig.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dcore.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dcore_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dinput.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dinput_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dlogic.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dlogic_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquick.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquick_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquickinput.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquickinput_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquickrender.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquickrender_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3drender.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3drender_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axbase.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axbase_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axcontainer.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axcontainer_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axserver.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axserver_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_bluetooth.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_bluetooth_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_bootstrap_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_clucene_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_concurrent.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_concurrent_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_core.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_core_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_dbus.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_dbus_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_designer.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_designer_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_designercomponents_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_gui.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_gui_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_help.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_help_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_labscontrols_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_labstemplates_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_location.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_location_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_multimedia.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_multimedia_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_multimediawidgets.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_multimediawidgets_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_network.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_network_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_nfc.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_nfc_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_opengl.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_opengl_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_openglextensions.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_openglextensions_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_platformsupport_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_positioning.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_positioning_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_printsupport.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_printsupport_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qml.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qml_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qmldevtools_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qmltest.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qmltest_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quick.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quick_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quickparticles_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quickwidgets.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quickwidgets_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_script.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_script_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_scripttools.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_scripttools_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_sensors.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_sensors_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_serialbus.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_serialbus_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_serialport.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_serialport_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_sql.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_sql_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_svg.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_svg_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_testlib.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_testlib_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_uiplugin.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_uitools.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_uitools_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webchannel.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webchannel_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webengine.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webengine_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginecore.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginecore_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginecoreheaders_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginewidgets.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginewidgets_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_websockets.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_websockets_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webview.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webview_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_widgets.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_widgets_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_winextras.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_winextras_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_xml.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_xml_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_xmlpatterns.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_xmlpatterns_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_zlib_private.pri \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\qt_functions.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\qt_config.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\qt_config.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\win32-msvc2015\qmake.conf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\spec_post.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\exclusive_builds.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\default_pre.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\default_pre.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\resolve_config.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\exclusive_builds_post.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\default_post.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\qml_debug.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\rtti.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\precompile_header.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\warn_on.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\qt.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\resources.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\moc.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\opengl.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\uic.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\file_copies.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\windows.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\testcase_targets.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\exceptions.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\yacc.prf \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\lex.prf \
		SchoolMap.pro \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\lib\qtmaind.prl \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\lib\Qt5Widgets.prl \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\lib\Qt5Gui.prl \
		E:\Qt\Qt5.6.2\5.6\msvc2015_64\lib\Qt5Core.prl
	$(QMAKE) -spec win32-msvc2015 "CONFIG+=debug" "CONFIG+=qml_debug" -o Makefile SchoolMap.pro
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\spec_pre.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\common\angle.conf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\common\msvc-base.conf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\common\msvc-desktop.conf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\qconfig.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dcore.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dcore_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dinput.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dinput_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dlogic.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dlogic_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquick.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquick_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquickinput.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquickinput_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquickrender.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3dquickrender_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3drender.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_3drender_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axbase.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axbase_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axcontainer.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axcontainer_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axserver.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_axserver_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_bluetooth.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_bluetooth_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_bootstrap_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_clucene_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_concurrent.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_concurrent_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_core.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_core_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_dbus.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_dbus_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_designer.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_designer_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_designercomponents_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_gui.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_gui_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_help.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_help_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_labscontrols_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_labstemplates_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_location.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_location_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_multimedia.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_multimedia_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_multimediawidgets.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_network.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_network_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_nfc.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_nfc_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_opengl.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_opengl_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_openglextensions.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_openglextensions_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_platformsupport_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_positioning.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_positioning_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_printsupport.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_printsupport_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qml.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qml_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qmldevtools_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qmltest.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qmltest_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quick.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quick_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quickparticles_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quickwidgets.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_quickwidgets_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_script.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_script_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_scripttools.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_scripttools_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_sensors.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_sensors_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_serialbus.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_serialbus_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_serialport.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_serialport_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_sql.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_sql_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_svg.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_svg_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_testlib.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_testlib_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_uiplugin.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_uitools.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_uitools_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webchannel.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webchannel_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webengine.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webengine_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginecore.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginecore_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginecoreheaders_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginewidgets.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webenginewidgets_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_websockets.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_websockets_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webview.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_webview_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_widgets.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_widgets_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_winextras.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_winextras_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_xml.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_xml_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_xmlpatterns.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\modules\qt_lib_zlib_private.pri:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\qt_functions.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\qt_config.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\qt_config.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\win32-msvc2015\qmake.conf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\spec_post.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\exclusive_builds.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\default_pre.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\default_pre.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\resolve_config.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\exclusive_builds_post.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\default_post.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\qml_debug.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\rtti.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\precompile_header.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\warn_on.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\qt.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\resources.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\moc.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\opengl.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\uic.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\file_copies.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\win32\windows.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\testcase_targets.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\exceptions.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\yacc.prf:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\mkspecs\features\lex.prf:
SchoolMap.pro:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\lib\qtmaind.prl:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\lib\Qt5Widgets.prl:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\lib\Qt5Gui.prl:
E:\Qt\Qt5.6.2\5.6\msvc2015_64\lib\Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-msvc2015 "CONFIG+=debug" "CONFIG+=qml_debug" -o Makefile SchoolMap.pro

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
	-$(DEL_FILE) SchoolMap.exp
	-$(DEL_FILE) SchoolMap.vc.pdb
	-$(DEL_FILE) SchoolMap.ilk
	-$(DEL_FILE) SchoolMap.idb
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) SchoolMap.lib SchoolMap.pdb

debug-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	@set MAKEFLAGS=$(MAKEFLAGS)
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile