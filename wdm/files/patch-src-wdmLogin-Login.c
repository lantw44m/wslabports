Disable all buttons except login.

--- src/wdmLogin/Login.c.orig	Sat Feb 28 19:18:06 2004
+++ src/wdmLogin/Login.c	Tue Sep 14 22:39:55 2004
@@ -56,7 +56,9 @@
 #define FOREVER 1
 
 WMRect screen;
+#if 0
 static int help_heigth = 140;
+#endif
 static int text_width = 150, text_heigth = 26;
 
 static char displayArgDefault[] = "";
@@ -87,12 +89,16 @@
 	int msgFlag;
 	WMFrame *wmF;
 	WMPopUpButton *wmBtn;
+#if 0
 	WMFrame *exitF;
 	WMPopUpButton *exitBtn;
+#endif
 	WMFrame *cmdF;
+#if 0
 	WMButton *helpBtn;
 	WMButton *startoverBtn;
 	WMButton *goBtn;
+#endif
 	WMFrame *helpF;
 	WMScrollView *helpSV;
 	WMFrame *helpTextF;
@@ -383,6 +389,7 @@
 	XSynchronize(WMScreenDisplay(panel->scr), True);
 	ClearMsgs(panel);
 	WMSetFrameRelief(panel->msgF, WRGroove);
+	WMSetFrameTitlePosition(panel->msgF, WTPAtTop);
 	WMSetFrameTitle(panel->msgF, _("ERROR"));
 	WMSetLabelText(panel->msgL, msg);
 	panel->msgFlag = True;
@@ -515,6 +522,7 @@
 /* Actions */
 
 
+#if 0
 static void
 goPressed(WMWidget * self, LoginPanel * panel)
 {
@@ -539,14 +547,18 @@
 	PrintInfoMsg(panel, _("exiting"));
 	OutputAuth(LoginName, LoginPswd);
 }
+#endif
 
+#if 0
 static void
 startoverPressed(WMWidget * self, LoginPanel * panel)
 {
 	ClearMsgs(panel);
 	InitializeLoginInput(panel);
 }
+#endif
 
+#if 0
 static void
 helpPressed(WMWidget * self, LoginPanel * panel)
 {
@@ -566,6 +578,7 @@
 				WMWidgetHeight(panel->win) - help_heigth);
 	}
 }
+#endif
 
 static void
 changeWm(WMWidget * self, LoginPanel * panel)
@@ -574,6 +587,7 @@
 	WMSetFocusToWidget(panel->entryText);
 }
 
+#if 0
 static void
 changeOption(WMPopUpButton * self, LoginPanel * panel)
 {
@@ -583,6 +597,7 @@
 	OptionCode = item;
 	WMSetFocusToWidget(panel->entryText);
 }
+#endif
 
 static void
 handleKeyPress(XEvent * event, void *clientData)
@@ -607,6 +622,7 @@
 
 /* create and destroy our panel */
 
+#if 0
 static void
 CreateLogo(LoginPanel * panel)
 {
@@ -716,6 +732,7 @@
 	WMReleasePixmap(pixmap);
 
 }
+#endif
 
 static void
 CreateAuthFrame(LoginPanel * panel)
@@ -796,13 +813,13 @@
 
 	panel->msgF = WMCreateFrame(panel->winF1);
 	WMSetFrameRelief(panel->msgF, WRFlat);
-	WMSetFrameTitlePosition(panel->msgF, WTPAtBottom);
+	WMSetFrameTitlePosition(panel->msgF, WTPAtTop);
 	WMMoveWidget(panel->msgF, (WMWidgetWidth(panel->win) - 290), 136);
-	WMResizeWidget(panel->msgF, 275, 40);
+	WMResizeWidget(panel->msgF, 150, 45);
 	WMSetFrameTitle(panel->msgF, "");
 
 	panel->msgL = WMCreateLabel(panel->msgF);
-	WMResizeWidget(panel->msgL, 260, 26);
+	WMResizeWidget(panel->msgL, 120, 26);
 	WMMoveWidget(panel->msgL, 5, 2);
 	font = WMBoldSystemFontOfSize(panel->scr, 14);
 	if(font)
@@ -824,7 +841,7 @@
 	WMSetFrameRelief(panel->wmF, WRGroove);
 	WMSetFrameTitlePosition(panel->wmF, WTPAtTop);
 	WMSetFrameTitle(panel->wmF, _("Start WM"));
-	WMMoveWidget(panel->wmF, 13, 178);
+	WMMoveWidget(panel->wmF, (WMWidgetWidth(panel->win) - 133), 136);
 	WMResizeWidget(panel->wmF, 118, 45);
 
 	panel->wmBtn = WMCreatePopUpButton(panel->wmF);
@@ -838,6 +855,7 @@
 		i++;
 	}
 
+#if 0
 	panel->exitF = WMCreateFrame(panel->winF1);
 	WMSetFrameRelief(panel->exitF, WRGroove);
 	WMSetFrameTitlePosition(panel->exitF, WTPAtTop);
@@ -856,8 +874,10 @@
 		WMAddPopUpButtonItem(panel->exitBtn, _(ExitStr[i]));
 		i++;
 	}
+#endif
 }
 
+#if 0
 static void
 CreateButtons(LoginPanel * panel)
 {
@@ -891,7 +911,9 @@
 	WMSetButtonText(panel->goBtn, _("Go!"));
 	WMResizeWidget(panel->goBtn, 80, 25);
 }
+#endif
 
+#if 0
 static void
 CreateHelpFrames(LoginPanel * panel)
 {
@@ -933,6 +955,7 @@
 
 	wfree(HelpText);
 }
+#endif
 
 static LoginPanel *
 CreateLoginPanel(WMScreen *scr, WDMLoginConfig *cfg)
@@ -958,24 +981,33 @@
 
 	CreateAuthFrame(panel);
 
+#if 0
 	CreateLogo(panel);
+#endif
 
 	CreatePopups(panel);
 
+#if 0
 	CreateButtons(panel);
+#endif
 
 	CreateMsgsFrames(panel);
 
+#if 0
 	CreateHelpFrames(panel);
+#endif
 
 	WMRealizeWidget(panel->win);
 	WMMapSubwidgets(panel->win);
 
 	WMMapSubwidgets(panel->winF1);
+#if 0
 	WMMapSubwidgets(panel->logoF1);
 	WMMapSubwidgets(panel->logoF2);
+#endif
 	WMMapSubwidgets(panel->authF);
 	WMMapSubwidgets(panel->wmF);
+#if 0
 	WMMapSubwidgets(panel->exitF);
 	WMMapSubwidgets(panel->cmdF);
 	WMMapSubwidgets(panel->msgF);
@@ -985,9 +1017,12 @@
 	WMMapSubwidgets(panel->helpTextF);
 	WMSetScrollViewContentView(panel->helpSV,
 				   WMWidgetView(panel->helpTextF));
+#endif
 
 	WMSetPopUpButtonSelectedItem(panel->wmBtn, 0);
+#if 0
 	WMSetPopUpButtonSelectedItem(panel->exitBtn, 0);
+#endif
 
 	panel->msgFlag = False;
 
