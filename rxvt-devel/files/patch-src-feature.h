Don't overstrike for bold fonts
Default print to /dev/null

--- src/feature.h.orig	Sat Dec 24 03:43:13 2005
+++ src/feature.h	Sat Dec 24 03:45:11 2005
@@ -71,8 +71,8 @@
  * overstrike just for multi char fonts
  * Note: NO_BOLDOVERSTRIKE implies NO_BOLDOVERSTRIKE_MULTI
  */
-/* #define NO_BOLDOVERSTRIKE */
-/* #define NO_BOLDOVERSTRIKE_MULTI */
+#define NO_BOLDOVERSTRIKE
+#define NO_BOLDOVERSTRIKE_MULTI
 
 /*
  * Don't bother cleaning up pixel droppings.  If you don't use bold
@@ -144,7 +144,7 @@
 /*
  * Printer pipe which will be used for emulation of attached vt100 printer
  */
-#define PRINTPIPE	"lpr"
+#define PRINTPIPE	">/dev/null"
 
 /*
  * Allow 80/132 mode switching on startup
