Adjust size.
--- src/wdmLogin/config.c.orig	Sat Feb 28 19:18:06 2004
+++ src/wdmLogin/config.c	Tue Sep 14 22:20:58 2004
@@ -27,7 +27,7 @@
 
 static Bool WDMCheckPLGeometry(WMPropList *pl, void *def, void *target);
 
-static WMRect default_geometry = {{INT_MIN, INT_MIN}, {530, 240}};
+static WMRect default_geometry = {{INT_MIN, INT_MIN}, {305, 200}};
 
 static WDMDictionaryStruct wdmLogin_config_struct[] = 
 {
