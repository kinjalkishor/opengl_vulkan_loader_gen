#include "gl_loader_compat.h"

#include "../base_print.h"
#define print_msg printfln

//#define print_msg


// GL_VERSION_1_0
PFNGLACCUMPROC glfn_glAccum = nullptr;
PFNGLALPHAFUNCPROC glfn_glAlphaFunc = nullptr;
PFNGLARETEXTURESRESIDENTPROC glfn_glAreTexturesResident = nullptr;
PFNGLARRAYELEMENTPROC glfn_glArrayElement = nullptr;
PFNGLBEGINPROC glfn_glBegin = nullptr;
PFNGLBINDTEXTUREPROC glfn_glBindTexture = nullptr;
PFNGLBITMAPPROC glfn_glBitmap = nullptr;
PFNGLBLENDFUNCPROC glfn_glBlendFunc = nullptr;
PFNGLCALLLISTPROC glfn_glCallList = nullptr;
PFNGLCALLLISTSPROC glfn_glCallLists = nullptr;
PFNGLCLEARPROC glfn_glClear = nullptr;
PFNGLCLEARACCUMPROC glfn_glClearAccum = nullptr;
PFNGLCLEARCOLORPROC glfn_glClearColor = nullptr;
PFNGLCLEARDEPTHPROC glfn_glClearDepth = nullptr;
PFNGLCLEARINDEXPROC glfn_glClearIndex = nullptr;
PFNGLCLEARSTENCILPROC glfn_glClearStencil = nullptr;
PFNGLCLIPPLANEPROC glfn_glClipPlane = nullptr;
PFNGLCOLOR3BPROC glfn_glColor3b = nullptr;
PFNGLCOLOR3BVPROC glfn_glColor3bv = nullptr;
PFNGLCOLOR3DPROC glfn_glColor3d = nullptr;
PFNGLCOLOR3DVPROC glfn_glColor3dv = nullptr;
PFNGLCOLOR3FPROC glfn_glColor3f = nullptr;
PFNGLCOLOR3FVPROC glfn_glColor3fv = nullptr;
PFNGLCOLOR3IPROC glfn_glColor3i = nullptr;
PFNGLCOLOR3IVPROC glfn_glColor3iv = nullptr;
PFNGLCOLOR3SPROC glfn_glColor3s = nullptr;
PFNGLCOLOR3SVPROC glfn_glColor3sv = nullptr;
PFNGLCOLOR3UBPROC glfn_glColor3ub = nullptr;
PFNGLCOLOR3UBVPROC glfn_glColor3ubv = nullptr;
PFNGLCOLOR3UIPROC glfn_glColor3ui = nullptr;
PFNGLCOLOR3UIVPROC glfn_glColor3uiv = nullptr;
PFNGLCOLOR3USPROC glfn_glColor3us = nullptr;
PFNGLCOLOR3USVPROC glfn_glColor3usv = nullptr;
PFNGLCOLOR4BPROC glfn_glColor4b = nullptr;
PFNGLCOLOR4BVPROC glfn_glColor4bv = nullptr;
PFNGLCOLOR4DPROC glfn_glColor4d = nullptr;
PFNGLCOLOR4DVPROC glfn_glColor4dv = nullptr;
PFNGLCOLOR4FPROC glfn_glColor4f = nullptr;
PFNGLCOLOR4FVPROC glfn_glColor4fv = nullptr;
PFNGLCOLOR4IPROC glfn_glColor4i = nullptr;
PFNGLCOLOR4IVPROC glfn_glColor4iv = nullptr;
PFNGLCOLOR4SPROC glfn_glColor4s = nullptr;
PFNGLCOLOR4SVPROC glfn_glColor4sv = nullptr;
PFNGLCOLOR4UBPROC glfn_glColor4ub = nullptr;
PFNGLCOLOR4UBVPROC glfn_glColor4ubv = nullptr;
PFNGLCOLOR4UIPROC glfn_glColor4ui = nullptr;
PFNGLCOLOR4UIVPROC glfn_glColor4uiv = nullptr;
PFNGLCOLOR4USPROC glfn_glColor4us = nullptr;
PFNGLCOLOR4USVPROC glfn_glColor4usv = nullptr;
PFNGLCOLORMASKPROC glfn_glColorMask = nullptr;
PFNGLCOLORMATERIALPROC glfn_glColorMaterial = nullptr;
PFNGLCOLORPOINTERPROC glfn_glColorPointer = nullptr;
PFNGLCOPYPIXELSPROC glfn_glCopyPixels = nullptr;
PFNGLCOPYTEXIMAGE1DPROC glfn_glCopyTexImage1D = nullptr;
PFNGLCOPYTEXIMAGE2DPROC glfn_glCopyTexImage2D = nullptr;
PFNGLCOPYTEXSUBIMAGE1DPROC glfn_glCopyTexSubImage1D = nullptr;
PFNGLCOPYTEXSUBIMAGE2DPROC glfn_glCopyTexSubImage2D = nullptr;
PFNGLCULLFACEPROC glfn_glCullFace = nullptr;
PFNGLDELETELISTSPROC glfn_glDeleteLists = nullptr;
PFNGLDELETETEXTURESPROC glfn_glDeleteTextures = nullptr;
PFNGLDEPTHFUNCPROC glfn_glDepthFunc = nullptr;
PFNGLDEPTHMASKPROC glfn_glDepthMask = nullptr;
PFNGLDEPTHRANGEPROC glfn_glDepthRange = nullptr;
PFNGLDISABLEPROC glfn_glDisable = nullptr;
PFNGLDISABLECLIENTSTATEPROC glfn_glDisableClientState = nullptr;
PFNGLDRAWARRAYSPROC glfn_glDrawArrays = nullptr;
PFNGLDRAWBUFFERPROC glfn_glDrawBuffer = nullptr;
PFNGLDRAWELEMENTSPROC glfn_glDrawElements = nullptr;
PFNGLDRAWPIXELSPROC glfn_glDrawPixels = nullptr;
PFNGLEDGEFLAGPROC glfn_glEdgeFlag = nullptr;
PFNGLEDGEFLAGPOINTERPROC glfn_glEdgeFlagPointer = nullptr;
PFNGLEDGEFLAGVPROC glfn_glEdgeFlagv = nullptr;
PFNGLENABLEPROC glfn_glEnable = nullptr;
PFNGLENABLECLIENTSTATEPROC glfn_glEnableClientState = nullptr;
PFNGLENDPROC glfn_glEnd = nullptr;
PFNGLENDLISTPROC glfn_glEndList = nullptr;
PFNGLEVALCOORD1DPROC glfn_glEvalCoord1d = nullptr;
PFNGLEVALCOORD1DVPROC glfn_glEvalCoord1dv = nullptr;
PFNGLEVALCOORD1FPROC glfn_glEvalCoord1f = nullptr;
PFNGLEVALCOORD1FVPROC glfn_glEvalCoord1fv = nullptr;
PFNGLEVALCOORD2DPROC glfn_glEvalCoord2d = nullptr;
PFNGLEVALCOORD2DVPROC glfn_glEvalCoord2dv = nullptr;
PFNGLEVALCOORD2FPROC glfn_glEvalCoord2f = nullptr;
PFNGLEVALCOORD2FVPROC glfn_glEvalCoord2fv = nullptr;
PFNGLEVALMESH1PROC glfn_glEvalMesh1 = nullptr;
PFNGLEVALMESH2PROC glfn_glEvalMesh2 = nullptr;
PFNGLEVALPOINT1PROC glfn_glEvalPoint1 = nullptr;
PFNGLEVALPOINT2PROC glfn_glEvalPoint2 = nullptr;
PFNGLFEEDBACKBUFFERPROC glfn_glFeedbackBuffer = nullptr;
PFNGLFINISHPROC glfn_glFinish = nullptr;
PFNGLFLUSHPROC glfn_glFlush = nullptr;
PFNGLFOGFPROC glfn_glFogf = nullptr;
PFNGLFOGFVPROC glfn_glFogfv = nullptr;
PFNGLFOGIPROC glfn_glFogi = nullptr;
PFNGLFOGIVPROC glfn_glFogiv = nullptr;
PFNGLFRONTFACEPROC glfn_glFrontFace = nullptr;
PFNGLFRUSTUMPROC glfn_glFrustum = nullptr;
PFNGLGENLISTSPROC glfn_glGenLists = nullptr;
PFNGLGENTEXTURESPROC glfn_glGenTextures = nullptr;
PFNGLGETBOOLEANVPROC glfn_glGetBooleanv = nullptr;
PFNGLGETCLIPPLANEPROC glfn_glGetClipPlane = nullptr;
PFNGLGETDOUBLEVPROC glfn_glGetDoublev = nullptr;
PFNGLGETERRORPROC glfn_glGetError = nullptr;
PFNGLGETFLOATVPROC glfn_glGetFloatv = nullptr;
PFNGLGETINTEGERVPROC glfn_glGetIntegerv = nullptr;
PFNGLGETLIGHTFVPROC glfn_glGetLightfv = nullptr;
PFNGLGETLIGHTIVPROC glfn_glGetLightiv = nullptr;
PFNGLGETMAPDVPROC glfn_glGetMapdv = nullptr;
PFNGLGETMAPFVPROC glfn_glGetMapfv = nullptr;
PFNGLGETMAPIVPROC glfn_glGetMapiv = nullptr;
PFNGLGETMATERIALFVPROC glfn_glGetMaterialfv = nullptr;
PFNGLGETMATERIALIVPROC glfn_glGetMaterialiv = nullptr;
PFNGLGETPIXELMAPFVPROC glfn_glGetPixelMapfv = nullptr;
PFNGLGETPIXELMAPUIVPROC glfn_glGetPixelMapuiv = nullptr;
PFNGLGETPIXELMAPUSVPROC glfn_glGetPixelMapusv = nullptr;
PFNGLGETPOINTERVPROC glfn_glGetPointerv = nullptr;
PFNGLGETPOLYGONSTIPPLEPROC glfn_glGetPolygonStipple = nullptr;
PFNGLGETSTRINGPROC glfn_glGetString = nullptr;
PFNGLGETTEXENVFVPROC glfn_glGetTexEnvfv = nullptr;
PFNGLGETTEXENVIVPROC glfn_glGetTexEnviv = nullptr;
PFNGLGETTEXGENDVPROC glfn_glGetTexGendv = nullptr;
PFNGLGETTEXGENFVPROC glfn_glGetTexGenfv = nullptr;
PFNGLGETTEXGENIVPROC glfn_glGetTexGeniv = nullptr;
PFNGLGETTEXIMAGEPROC glfn_glGetTexImage = nullptr;
PFNGLGETTEXLEVELPARAMETERFVPROC glfn_glGetTexLevelParameterfv = nullptr;
PFNGLGETTEXLEVELPARAMETERIVPROC glfn_glGetTexLevelParameteriv = nullptr;
PFNGLGETTEXPARAMETERFVPROC glfn_glGetTexParameterfv = nullptr;
PFNGLGETTEXPARAMETERIVPROC glfn_glGetTexParameteriv = nullptr;
PFNGLHINTPROC glfn_glHint = nullptr;
PFNGLINDEXMASKPROC glfn_glIndexMask = nullptr;
PFNGLINDEXPOINTERPROC glfn_glIndexPointer = nullptr;
PFNGLINDEXDPROC glfn_glIndexd = nullptr;
PFNGLINDEXDVPROC glfn_glIndexdv = nullptr;
PFNGLINDEXFPROC glfn_glIndexf = nullptr;
PFNGLINDEXFVPROC glfn_glIndexfv = nullptr;
PFNGLINDEXIPROC glfn_glIndexi = nullptr;
PFNGLINDEXIVPROC glfn_glIndexiv = nullptr;
PFNGLINDEXSPROC glfn_glIndexs = nullptr;
PFNGLINDEXSVPROC glfn_glIndexsv = nullptr;
PFNGLINDEXUBPROC glfn_glIndexub = nullptr;
PFNGLINDEXUBVPROC glfn_glIndexubv = nullptr;
PFNGLINITNAMESPROC glfn_glInitNames = nullptr;
PFNGLINTERLEAVEDARRAYSPROC glfn_glInterleavedArrays = nullptr;
PFNGLISENABLEDPROC glfn_glIsEnabled = nullptr;
PFNGLISLISTPROC glfn_glIsList = nullptr;
PFNGLISTEXTUREPROC glfn_glIsTexture = nullptr;
PFNGLLIGHTMODELFPROC glfn_glLightModelf = nullptr;
PFNGLLIGHTMODELFVPROC glfn_glLightModelfv = nullptr;
PFNGLLIGHTMODELIPROC glfn_glLightModeli = nullptr;
PFNGLLIGHTMODELIVPROC glfn_glLightModeliv = nullptr;
PFNGLLIGHTFPROC glfn_glLightf = nullptr;
PFNGLLIGHTFVPROC glfn_glLightfv = nullptr;
PFNGLLIGHTIPROC glfn_glLighti = nullptr;
PFNGLLIGHTIVPROC glfn_glLightiv = nullptr;
PFNGLLINESTIPPLEPROC glfn_glLineStipple = nullptr;
PFNGLLINEWIDTHPROC glfn_glLineWidth = nullptr;
PFNGLLISTBASEPROC glfn_glListBase = nullptr;
PFNGLLOADIDENTITYPROC glfn_glLoadIdentity = nullptr;
PFNGLLOADMATRIXDPROC glfn_glLoadMatrixd = nullptr;
PFNGLLOADMATRIXFPROC glfn_glLoadMatrixf = nullptr;
PFNGLLOADNAMEPROC glfn_glLoadName = nullptr;
PFNGLLOGICOPPROC glfn_glLogicOp = nullptr;
PFNGLMAP1DPROC glfn_glMap1d = nullptr;
PFNGLMAP1FPROC glfn_glMap1f = nullptr;
PFNGLMAP2DPROC glfn_glMap2d = nullptr;
PFNGLMAP2FPROC glfn_glMap2f = nullptr;
PFNGLMAPGRID1DPROC glfn_glMapGrid1d = nullptr;
PFNGLMAPGRID1FPROC glfn_glMapGrid1f = nullptr;
PFNGLMAPGRID2DPROC glfn_glMapGrid2d = nullptr;
PFNGLMAPGRID2FPROC glfn_glMapGrid2f = nullptr;
PFNGLMATERIALFPROC glfn_glMaterialf = nullptr;
PFNGLMATERIALFVPROC glfn_glMaterialfv = nullptr;
PFNGLMATERIALIPROC glfn_glMateriali = nullptr;
PFNGLMATERIALIVPROC glfn_glMaterialiv = nullptr;
PFNGLMATRIXMODEPROC glfn_glMatrixMode = nullptr;
PFNGLMULTMATRIXDPROC glfn_glMultMatrixd = nullptr;
PFNGLMULTMATRIXFPROC glfn_glMultMatrixf = nullptr;
PFNGLNEWLISTPROC glfn_glNewList = nullptr;
PFNGLNORMAL3BPROC glfn_glNormal3b = nullptr;
PFNGLNORMAL3BVPROC glfn_glNormal3bv = nullptr;
PFNGLNORMAL3DPROC glfn_glNormal3d = nullptr;
PFNGLNORMAL3DVPROC glfn_glNormal3dv = nullptr;
PFNGLNORMAL3FPROC glfn_glNormal3f = nullptr;
PFNGLNORMAL3FVPROC glfn_glNormal3fv = nullptr;
PFNGLNORMAL3IPROC glfn_glNormal3i = nullptr;
PFNGLNORMAL3IVPROC glfn_glNormal3iv = nullptr;
PFNGLNORMAL3SPROC glfn_glNormal3s = nullptr;
PFNGLNORMAL3SVPROC glfn_glNormal3sv = nullptr;
PFNGLNORMALPOINTERPROC glfn_glNormalPointer = nullptr;
PFNGLORTHOPROC glfn_glOrtho = nullptr;
PFNGLPASSTHROUGHPROC glfn_glPassThrough = nullptr;
PFNGLPIXELMAPFVPROC glfn_glPixelMapfv = nullptr;
PFNGLPIXELMAPUIVPROC glfn_glPixelMapuiv = nullptr;
PFNGLPIXELMAPUSVPROC glfn_glPixelMapusv = nullptr;
PFNGLPIXELSTOREFPROC glfn_glPixelStoref = nullptr;
PFNGLPIXELSTOREIPROC glfn_glPixelStorei = nullptr;
PFNGLPIXELTRANSFERFPROC glfn_glPixelTransferf = nullptr;
PFNGLPIXELTRANSFERIPROC glfn_glPixelTransferi = nullptr;
PFNGLPIXELZOOMPROC glfn_glPixelZoom = nullptr;
PFNGLPOINTSIZEPROC glfn_glPointSize = nullptr;
PFNGLPOLYGONMODEPROC glfn_glPolygonMode = nullptr;
PFNGLPOLYGONOFFSETPROC glfn_glPolygonOffset = nullptr;
PFNGLPOLYGONSTIPPLEPROC glfn_glPolygonStipple = nullptr;
PFNGLPOPATTRIBPROC glfn_glPopAttrib = nullptr;
PFNGLPOPCLIENTATTRIBPROC glfn_glPopClientAttrib = nullptr;
PFNGLPOPMATRIXPROC glfn_glPopMatrix = nullptr;
PFNGLPOPNAMEPROC glfn_glPopName = nullptr;
PFNGLPRIORITIZETEXTURESPROC glfn_glPrioritizeTextures = nullptr;
PFNGLPUSHATTRIBPROC glfn_glPushAttrib = nullptr;
PFNGLPUSHCLIENTATTRIBPROC glfn_glPushClientAttrib = nullptr;
PFNGLPUSHMATRIXPROC glfn_glPushMatrix = nullptr;
PFNGLPUSHNAMEPROC glfn_glPushName = nullptr;
PFNGLRASTERPOS2DPROC glfn_glRasterPos2d = nullptr;
PFNGLRASTERPOS2DVPROC glfn_glRasterPos2dv = nullptr;
PFNGLRASTERPOS2FPROC glfn_glRasterPos2f = nullptr;
PFNGLRASTERPOS2FVPROC glfn_glRasterPos2fv = nullptr;
PFNGLRASTERPOS2IPROC glfn_glRasterPos2i = nullptr;
PFNGLRASTERPOS2IVPROC glfn_glRasterPos2iv = nullptr;
PFNGLRASTERPOS2SPROC glfn_glRasterPos2s = nullptr;
PFNGLRASTERPOS2SVPROC glfn_glRasterPos2sv = nullptr;
PFNGLRASTERPOS3DPROC glfn_glRasterPos3d = nullptr;
PFNGLRASTERPOS3DVPROC glfn_glRasterPos3dv = nullptr;
PFNGLRASTERPOS3FPROC glfn_glRasterPos3f = nullptr;
PFNGLRASTERPOS3FVPROC glfn_glRasterPos3fv = nullptr;
PFNGLRASTERPOS3IPROC glfn_glRasterPos3i = nullptr;
PFNGLRASTERPOS3IVPROC glfn_glRasterPos3iv = nullptr;
PFNGLRASTERPOS3SPROC glfn_glRasterPos3s = nullptr;
PFNGLRASTERPOS3SVPROC glfn_glRasterPos3sv = nullptr;
PFNGLRASTERPOS4DPROC glfn_glRasterPos4d = nullptr;
PFNGLRASTERPOS4DVPROC glfn_glRasterPos4dv = nullptr;
PFNGLRASTERPOS4FPROC glfn_glRasterPos4f = nullptr;
PFNGLRASTERPOS4FVPROC glfn_glRasterPos4fv = nullptr;
PFNGLRASTERPOS4IPROC glfn_glRasterPos4i = nullptr;
PFNGLRASTERPOS4IVPROC glfn_glRasterPos4iv = nullptr;
PFNGLRASTERPOS4SPROC glfn_glRasterPos4s = nullptr;
PFNGLRASTERPOS4SVPROC glfn_glRasterPos4sv = nullptr;
PFNGLREADBUFFERPROC glfn_glReadBuffer = nullptr;
PFNGLREADPIXELSPROC glfn_glReadPixels = nullptr;
PFNGLRECTDPROC glfn_glRectd = nullptr;
PFNGLRECTDVPROC glfn_glRectdv = nullptr;
PFNGLRECTFPROC glfn_glRectf = nullptr;
PFNGLRECTFVPROC glfn_glRectfv = nullptr;
PFNGLRECTIPROC glfn_glRecti = nullptr;
PFNGLRECTIVPROC glfn_glRectiv = nullptr;
PFNGLRECTSPROC glfn_glRects = nullptr;
PFNGLRECTSVPROC glfn_glRectsv = nullptr;
PFNGLRENDERMODEPROC glfn_glRenderMode = nullptr;
PFNGLROTATEDPROC glfn_glRotated = nullptr;
PFNGLROTATEFPROC glfn_glRotatef = nullptr;
PFNGLSCALEDPROC glfn_glScaled = nullptr;
PFNGLSCALEFPROC glfn_glScalef = nullptr;
PFNGLSCISSORPROC glfn_glScissor = nullptr;
PFNGLSELECTBUFFERPROC glfn_glSelectBuffer = nullptr;
PFNGLSHADEMODELPROC glfn_glShadeModel = nullptr;
PFNGLSTENCILFUNCPROC glfn_glStencilFunc = nullptr;
PFNGLSTENCILMASKPROC glfn_glStencilMask = nullptr;
PFNGLSTENCILOPPROC glfn_glStencilOp = nullptr;
PFNGLTEXCOORD1DPROC glfn_glTexCoord1d = nullptr;
PFNGLTEXCOORD1DVPROC glfn_glTexCoord1dv = nullptr;
PFNGLTEXCOORD1FPROC glfn_glTexCoord1f = nullptr;
PFNGLTEXCOORD1FVPROC glfn_glTexCoord1fv = nullptr;
PFNGLTEXCOORD1IPROC glfn_glTexCoord1i = nullptr;
PFNGLTEXCOORD1IVPROC glfn_glTexCoord1iv = nullptr;
PFNGLTEXCOORD1SPROC glfn_glTexCoord1s = nullptr;
PFNGLTEXCOORD1SVPROC glfn_glTexCoord1sv = nullptr;
PFNGLTEXCOORD2DPROC glfn_glTexCoord2d = nullptr;
PFNGLTEXCOORD2DVPROC glfn_glTexCoord2dv = nullptr;
PFNGLTEXCOORD2FPROC glfn_glTexCoord2f = nullptr;
PFNGLTEXCOORD2FVPROC glfn_glTexCoord2fv = nullptr;
PFNGLTEXCOORD2IPROC glfn_glTexCoord2i = nullptr;
PFNGLTEXCOORD2IVPROC glfn_glTexCoord2iv = nullptr;
PFNGLTEXCOORD2SPROC glfn_glTexCoord2s = nullptr;
PFNGLTEXCOORD2SVPROC glfn_glTexCoord2sv = nullptr;
PFNGLTEXCOORD3DPROC glfn_glTexCoord3d = nullptr;
PFNGLTEXCOORD3DVPROC glfn_glTexCoord3dv = nullptr;
PFNGLTEXCOORD3FPROC glfn_glTexCoord3f = nullptr;
PFNGLTEXCOORD3FVPROC glfn_glTexCoord3fv = nullptr;
PFNGLTEXCOORD3IPROC glfn_glTexCoord3i = nullptr;
PFNGLTEXCOORD3IVPROC glfn_glTexCoord3iv = nullptr;
PFNGLTEXCOORD3SPROC glfn_glTexCoord3s = nullptr;
PFNGLTEXCOORD3SVPROC glfn_glTexCoord3sv = nullptr;
PFNGLTEXCOORD4DPROC glfn_glTexCoord4d = nullptr;
PFNGLTEXCOORD4DVPROC glfn_glTexCoord4dv = nullptr;
PFNGLTEXCOORD4FPROC glfn_glTexCoord4f = nullptr;
PFNGLTEXCOORD4FVPROC glfn_glTexCoord4fv = nullptr;
PFNGLTEXCOORD4IPROC glfn_glTexCoord4i = nullptr;
PFNGLTEXCOORD4IVPROC glfn_glTexCoord4iv = nullptr;
PFNGLTEXCOORD4SPROC glfn_glTexCoord4s = nullptr;
PFNGLTEXCOORD4SVPROC glfn_glTexCoord4sv = nullptr;
PFNGLTEXCOORDPOINTERPROC glfn_glTexCoordPointer = nullptr;
PFNGLTEXENVFPROC glfn_glTexEnvf = nullptr;
PFNGLTEXENVFVPROC glfn_glTexEnvfv = nullptr;
PFNGLTEXENVIPROC glfn_glTexEnvi = nullptr;
PFNGLTEXENVIVPROC glfn_glTexEnviv = nullptr;
PFNGLTEXGENDPROC glfn_glTexGend = nullptr;
PFNGLTEXGENDVPROC glfn_glTexGendv = nullptr;
PFNGLTEXGENFPROC glfn_glTexGenf = nullptr;
PFNGLTEXGENFVPROC glfn_glTexGenfv = nullptr;
PFNGLTEXGENIPROC glfn_glTexGeni = nullptr;
PFNGLTEXGENIVPROC glfn_glTexGeniv = nullptr;
PFNGLTEXIMAGE1DPROC glfn_glTexImage1D = nullptr;
PFNGLTEXIMAGE2DPROC glfn_glTexImage2D = nullptr;
PFNGLTEXPARAMETERFPROC glfn_glTexParameterf = nullptr;
PFNGLTEXPARAMETERFVPROC glfn_glTexParameterfv = nullptr;
PFNGLTEXPARAMETERIPROC glfn_glTexParameteri = nullptr;
PFNGLTEXPARAMETERIVPROC glfn_glTexParameteriv = nullptr;
PFNGLTEXSUBIMAGE1DPROC glfn_glTexSubImage1D = nullptr;
PFNGLTEXSUBIMAGE2DPROC glfn_glTexSubImage2D = nullptr;
PFNGLTRANSLATEDPROC glfn_glTranslated = nullptr;
PFNGLTRANSLATEFPROC glfn_glTranslatef = nullptr;
PFNGLVERTEX2DPROC glfn_glVertex2d = nullptr;
PFNGLVERTEX2DVPROC glfn_glVertex2dv = nullptr;
PFNGLVERTEX2FPROC glfn_glVertex2f = nullptr;
PFNGLVERTEX2FVPROC glfn_glVertex2fv = nullptr;
PFNGLVERTEX2IPROC glfn_glVertex2i = nullptr;
PFNGLVERTEX2IVPROC glfn_glVertex2iv = nullptr;
PFNGLVERTEX2SPROC glfn_glVertex2s = nullptr;
PFNGLVERTEX2SVPROC glfn_glVertex2sv = nullptr;
PFNGLVERTEX3DPROC glfn_glVertex3d = nullptr;
PFNGLVERTEX3DVPROC glfn_glVertex3dv = nullptr;
PFNGLVERTEX3FPROC glfn_glVertex3f = nullptr;
PFNGLVERTEX3FVPROC glfn_glVertex3fv = nullptr;
PFNGLVERTEX3IPROC glfn_glVertex3i = nullptr;
PFNGLVERTEX3IVPROC glfn_glVertex3iv = nullptr;
PFNGLVERTEX3SPROC glfn_glVertex3s = nullptr;
PFNGLVERTEX3SVPROC glfn_glVertex3sv = nullptr;
PFNGLVERTEX4DPROC glfn_glVertex4d = nullptr;
PFNGLVERTEX4DVPROC glfn_glVertex4dv = nullptr;
PFNGLVERTEX4FPROC glfn_glVertex4f = nullptr;
PFNGLVERTEX4FVPROC glfn_glVertex4fv = nullptr;
PFNGLVERTEX4IPROC glfn_glVertex4i = nullptr;
PFNGLVERTEX4IVPROC glfn_glVertex4iv = nullptr;
PFNGLVERTEX4SPROC glfn_glVertex4s = nullptr;
PFNGLVERTEX4SVPROC glfn_glVertex4sv = nullptr;
PFNGLVERTEXPOINTERPROC glfn_glVertexPointer = nullptr;
PFNGLVIEWPORTPROC glfn_glViewport = nullptr;


void glfnlib_init_GL_VERSION_1_0(PFN_loadfunc load) {
	glfn_glAccum = (PFNGLACCUMPROC)get_gl_func_address_name("glAccum");
	if (!glAccum) { print_msg("glAccum not loaded"); }
	glfn_glAlphaFunc = (PFNGLALPHAFUNCPROC)get_gl_func_address_name("glAlphaFunc");
	if (!glAlphaFunc) { print_msg("glAlphaFunc not loaded"); }
	glfn_glAreTexturesResident = (PFNGLARETEXTURESRESIDENTPROC)get_gl_func_address_name("glAreTexturesResident");
	if (!glAreTexturesResident) { print_msg("glAreTexturesResident not loaded"); }
	glfn_glArrayElement = (PFNGLARRAYELEMENTPROC)get_gl_func_address_name("glArrayElement");
	if (!glArrayElement) { print_msg("glArrayElement not loaded"); }
	glfn_glBegin = (PFNGLBEGINPROC)get_gl_func_address_name("glBegin");
	if (!glBegin) { print_msg("glBegin not loaded"); }
	glfn_glBindTexture = (PFNGLBINDTEXTUREPROC)get_gl_func_address_name("glBindTexture");
	if (!glBindTexture) { print_msg("glBindTexture not loaded"); }
	glfn_glBitmap = (PFNGLBITMAPPROC)get_gl_func_address_name("glBitmap");
	if (!glBitmap) { print_msg("glBitmap not loaded"); }
	glfn_glBlendFunc = (PFNGLBLENDFUNCPROC)get_gl_func_address_name("glBlendFunc");
	if (!glBlendFunc) { print_msg("glBlendFunc not loaded"); }
	glfn_glCallList = (PFNGLCALLLISTPROC)get_gl_func_address_name("glCallList");
	if (!glCallList) { print_msg("glCallList not loaded"); }
	glfn_glCallLists = (PFNGLCALLLISTSPROC)get_gl_func_address_name("glCallLists");
	if (!glCallLists) { print_msg("glCallLists not loaded"); }
	glfn_glClear = (PFNGLCLEARPROC)get_gl_func_address_name("glClear");
	if (!glClear) { print_msg("glClear not loaded"); }
	glfn_glClearAccum = (PFNGLCLEARACCUMPROC)get_gl_func_address_name("glClearAccum");
	if (!glClearAccum) { print_msg("glClearAccum not loaded"); }
	glfn_glClearColor = (PFNGLCLEARCOLORPROC)get_gl_func_address_name("glClearColor");
	if (!glClearColor) { print_msg("glClearColor not loaded"); }
	glfn_glClearDepth = (PFNGLCLEARDEPTHPROC)get_gl_func_address_name("glClearDepth");
	if (!glClearDepth) { print_msg("glClearDepth not loaded"); }
	glfn_glClearIndex = (PFNGLCLEARINDEXPROC)get_gl_func_address_name("glClearIndex");
	if (!glClearIndex) { print_msg("glClearIndex not loaded"); }
	glfn_glClearStencil = (PFNGLCLEARSTENCILPROC)get_gl_func_address_name("glClearStencil");
	if (!glClearStencil) { print_msg("glClearStencil not loaded"); }
	glfn_glClipPlane = (PFNGLCLIPPLANEPROC)get_gl_func_address_name("glClipPlane");
	if (!glClipPlane) { print_msg("glClipPlane not loaded"); }
	glfn_glColor3b = (PFNGLCOLOR3BPROC)get_gl_func_address_name("glColor3b");
	if (!glColor3b) { print_msg("glColor3b not loaded"); }
	glfn_glColor3bv = (PFNGLCOLOR3BVPROC)get_gl_func_address_name("glColor3bv");
	if (!glColor3bv) { print_msg("glColor3bv not loaded"); }
	glfn_glColor3d = (PFNGLCOLOR3DPROC)get_gl_func_address_name("glColor3d");
	if (!glColor3d) { print_msg("glColor3d not loaded"); }
	glfn_glColor3dv = (PFNGLCOLOR3DVPROC)get_gl_func_address_name("glColor3dv");
	if (!glColor3dv) { print_msg("glColor3dv not loaded"); }
	glfn_glColor3f = (PFNGLCOLOR3FPROC)get_gl_func_address_name("glColor3f");
	if (!glColor3f) { print_msg("glColor3f not loaded"); }
	glfn_glColor3fv = (PFNGLCOLOR3FVPROC)get_gl_func_address_name("glColor3fv");
	if (!glColor3fv) { print_msg("glColor3fv not loaded"); }
	glfn_glColor3i = (PFNGLCOLOR3IPROC)get_gl_func_address_name("glColor3i");
	if (!glColor3i) { print_msg("glColor3i not loaded"); }
	glfn_glColor3iv = (PFNGLCOLOR3IVPROC)get_gl_func_address_name("glColor3iv");
	if (!glColor3iv) { print_msg("glColor3iv not loaded"); }
	glfn_glColor3s = (PFNGLCOLOR3SPROC)get_gl_func_address_name("glColor3s");
	if (!glColor3s) { print_msg("glColor3s not loaded"); }
	glfn_glColor3sv = (PFNGLCOLOR3SVPROC)get_gl_func_address_name("glColor3sv");
	if (!glColor3sv) { print_msg("glColor3sv not loaded"); }
	glfn_glColor3ub = (PFNGLCOLOR3UBPROC)get_gl_func_address_name("glColor3ub");
	if (!glColor3ub) { print_msg("glColor3ub not loaded"); }
	glfn_glColor3ubv = (PFNGLCOLOR3UBVPROC)get_gl_func_address_name("glColor3ubv");
	if (!glColor3ubv) { print_msg("glColor3ubv not loaded"); }
	glfn_glColor3ui = (PFNGLCOLOR3UIPROC)get_gl_func_address_name("glColor3ui");
	if (!glColor3ui) { print_msg("glColor3ui not loaded"); }
	glfn_glColor3uiv = (PFNGLCOLOR3UIVPROC)get_gl_func_address_name("glColor3uiv");
	if (!glColor3uiv) { print_msg("glColor3uiv not loaded"); }
	glfn_glColor3us = (PFNGLCOLOR3USPROC)get_gl_func_address_name("glColor3us");
	if (!glColor3us) { print_msg("glColor3us not loaded"); }
	glfn_glColor3usv = (PFNGLCOLOR3USVPROC)get_gl_func_address_name("glColor3usv");
	if (!glColor3usv) { print_msg("glColor3usv not loaded"); }
	glfn_glColor4b = (PFNGLCOLOR4BPROC)get_gl_func_address_name("glColor4b");
	if (!glColor4b) { print_msg("glColor4b not loaded"); }
	glfn_glColor4bv = (PFNGLCOLOR4BVPROC)get_gl_func_address_name("glColor4bv");
	if (!glColor4bv) { print_msg("glColor4bv not loaded"); }
	glfn_glColor4d = (PFNGLCOLOR4DPROC)get_gl_func_address_name("glColor4d");
	if (!glColor4d) { print_msg("glColor4d not loaded"); }
	glfn_glColor4dv = (PFNGLCOLOR4DVPROC)get_gl_func_address_name("glColor4dv");
	if (!glColor4dv) { print_msg("glColor4dv not loaded"); }
	glfn_glColor4f = (PFNGLCOLOR4FPROC)get_gl_func_address_name("glColor4f");
	if (!glColor4f) { print_msg("glColor4f not loaded"); }
	glfn_glColor4fv = (PFNGLCOLOR4FVPROC)get_gl_func_address_name("glColor4fv");
	if (!glColor4fv) { print_msg("glColor4fv not loaded"); }
	glfn_glColor4i = (PFNGLCOLOR4IPROC)get_gl_func_address_name("glColor4i");
	if (!glColor4i) { print_msg("glColor4i not loaded"); }
	glfn_glColor4iv = (PFNGLCOLOR4IVPROC)get_gl_func_address_name("glColor4iv");
	if (!glColor4iv) { print_msg("glColor4iv not loaded"); }
	glfn_glColor4s = (PFNGLCOLOR4SPROC)get_gl_func_address_name("glColor4s");
	if (!glColor4s) { print_msg("glColor4s not loaded"); }
	glfn_glColor4sv = (PFNGLCOLOR4SVPROC)get_gl_func_address_name("glColor4sv");
	if (!glColor4sv) { print_msg("glColor4sv not loaded"); }
	glfn_glColor4ub = (PFNGLCOLOR4UBPROC)get_gl_func_address_name("glColor4ub");
	if (!glColor4ub) { print_msg("glColor4ub not loaded"); }
	glfn_glColor4ubv = (PFNGLCOLOR4UBVPROC)get_gl_func_address_name("glColor4ubv");
	if (!glColor4ubv) { print_msg("glColor4ubv not loaded"); }
	glfn_glColor4ui = (PFNGLCOLOR4UIPROC)get_gl_func_address_name("glColor4ui");
	if (!glColor4ui) { print_msg("glColor4ui not loaded"); }
	glfn_glColor4uiv = (PFNGLCOLOR4UIVPROC)get_gl_func_address_name("glColor4uiv");
	if (!glColor4uiv) { print_msg("glColor4uiv not loaded"); }
	glfn_glColor4us = (PFNGLCOLOR4USPROC)get_gl_func_address_name("glColor4us");
	if (!glColor4us) { print_msg("glColor4us not loaded"); }
	glfn_glColor4usv = (PFNGLCOLOR4USVPROC)get_gl_func_address_name("glColor4usv");
	if (!glColor4usv) { print_msg("glColor4usv not loaded"); }
	glfn_glColorMask = (PFNGLCOLORMASKPROC)get_gl_func_address_name("glColorMask");
	if (!glColorMask) { print_msg("glColorMask not loaded"); }
	glfn_glColorMaterial = (PFNGLCOLORMATERIALPROC)get_gl_func_address_name("glColorMaterial");
	if (!glColorMaterial) { print_msg("glColorMaterial not loaded"); }
	glfn_glColorPointer = (PFNGLCOLORPOINTERPROC)get_gl_func_address_name("glColorPointer");
	if (!glColorPointer) { print_msg("glColorPointer not loaded"); }
	glfn_glCopyPixels = (PFNGLCOPYPIXELSPROC)get_gl_func_address_name("glCopyPixels");
	if (!glCopyPixels) { print_msg("glCopyPixels not loaded"); }
	glfn_glCopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC)get_gl_func_address_name("glCopyTexImage1D");
	if (!glCopyTexImage1D) { print_msg("glCopyTexImage1D not loaded"); }
	glfn_glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC)get_gl_func_address_name("glCopyTexImage2D");
	if (!glCopyTexImage2D) { print_msg("glCopyTexImage2D not loaded"); }
	glfn_glCopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC)get_gl_func_address_name("glCopyTexSubImage1D");
	if (!glCopyTexSubImage1D) { print_msg("glCopyTexSubImage1D not loaded"); }
	glfn_glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC)get_gl_func_address_name("glCopyTexSubImage2D");
	if (!glCopyTexSubImage2D) { print_msg("glCopyTexSubImage2D not loaded"); }
	glfn_glCullFace = (PFNGLCULLFACEPROC)get_gl_func_address_name("glCullFace");
	if (!glCullFace) { print_msg("glCullFace not loaded"); }
	glfn_glDeleteLists = (PFNGLDELETELISTSPROC)get_gl_func_address_name("glDeleteLists");
	if (!glDeleteLists) { print_msg("glDeleteLists not loaded"); }
	glfn_glDeleteTextures = (PFNGLDELETETEXTURESPROC)get_gl_func_address_name("glDeleteTextures");
	if (!glDeleteTextures) { print_msg("glDeleteTextures not loaded"); }
	glfn_glDepthFunc = (PFNGLDEPTHFUNCPROC)get_gl_func_address_name("glDepthFunc");
	if (!glDepthFunc) { print_msg("glDepthFunc not loaded"); }
	glfn_glDepthMask = (PFNGLDEPTHMASKPROC)get_gl_func_address_name("glDepthMask");
	if (!glDepthMask) { print_msg("glDepthMask not loaded"); }
	glfn_glDepthRange = (PFNGLDEPTHRANGEPROC)get_gl_func_address_name("glDepthRange");
	if (!glDepthRange) { print_msg("glDepthRange not loaded"); }
	glfn_glDisable = (PFNGLDISABLEPROC)get_gl_func_address_name("glDisable");
	if (!glDisable) { print_msg("glDisable not loaded"); }
	glfn_glDisableClientState = (PFNGLDISABLECLIENTSTATEPROC)get_gl_func_address_name("glDisableClientState");
	if (!glDisableClientState) { print_msg("glDisableClientState not loaded"); }
	glfn_glDrawArrays = (PFNGLDRAWARRAYSPROC)get_gl_func_address_name("glDrawArrays");
	if (!glDrawArrays) { print_msg("glDrawArrays not loaded"); }
	glfn_glDrawBuffer = (PFNGLDRAWBUFFERPROC)get_gl_func_address_name("glDrawBuffer");
	if (!glDrawBuffer) { print_msg("glDrawBuffer not loaded"); }
	glfn_glDrawElements = (PFNGLDRAWELEMENTSPROC)get_gl_func_address_name("glDrawElements");
	if (!glDrawElements) { print_msg("glDrawElements not loaded"); }
	glfn_glDrawPixels = (PFNGLDRAWPIXELSPROC)get_gl_func_address_name("glDrawPixels");
	if (!glDrawPixels) { print_msg("glDrawPixels not loaded"); }
	glfn_glEdgeFlag = (PFNGLEDGEFLAGPROC)get_gl_func_address_name("glEdgeFlag");
	if (!glEdgeFlag) { print_msg("glEdgeFlag not loaded"); }
	glfn_glEdgeFlagPointer = (PFNGLEDGEFLAGPOINTERPROC)get_gl_func_address_name("glEdgeFlagPointer");
	if (!glEdgeFlagPointer) { print_msg("glEdgeFlagPointer not loaded"); }
	glfn_glEdgeFlagv = (PFNGLEDGEFLAGVPROC)get_gl_func_address_name("glEdgeFlagv");
	if (!glEdgeFlagv) { print_msg("glEdgeFlagv not loaded"); }
	glfn_glEnable = (PFNGLENABLEPROC)get_gl_func_address_name("glEnable");
	if (!glEnable) { print_msg("glEnable not loaded"); }
	glfn_glEnableClientState = (PFNGLENABLECLIENTSTATEPROC)get_gl_func_address_name("glEnableClientState");
	if (!glEnableClientState) { print_msg("glEnableClientState not loaded"); }
	glfn_glEnd = (PFNGLENDPROC)get_gl_func_address_name("glEnd");
	if (!glEnd) { print_msg("glEnd not loaded"); }
	glfn_glEndList = (PFNGLENDLISTPROC)get_gl_func_address_name("glEndList");
	if (!glEndList) { print_msg("glEndList not loaded"); }
	glfn_glEvalCoord1d = (PFNGLEVALCOORD1DPROC)get_gl_func_address_name("glEvalCoord1d");
	if (!glEvalCoord1d) { print_msg("glEvalCoord1d not loaded"); }
	glfn_glEvalCoord1dv = (PFNGLEVALCOORD1DVPROC)get_gl_func_address_name("glEvalCoord1dv");
	if (!glEvalCoord1dv) { print_msg("glEvalCoord1dv not loaded"); }
	glfn_glEvalCoord1f = (PFNGLEVALCOORD1FPROC)get_gl_func_address_name("glEvalCoord1f");
	if (!glEvalCoord1f) { print_msg("glEvalCoord1f not loaded"); }
	glfn_glEvalCoord1fv = (PFNGLEVALCOORD1FVPROC)get_gl_func_address_name("glEvalCoord1fv");
	if (!glEvalCoord1fv) { print_msg("glEvalCoord1fv not loaded"); }
	glfn_glEvalCoord2d = (PFNGLEVALCOORD2DPROC)get_gl_func_address_name("glEvalCoord2d");
	if (!glEvalCoord2d) { print_msg("glEvalCoord2d not loaded"); }
	glfn_glEvalCoord2dv = (PFNGLEVALCOORD2DVPROC)get_gl_func_address_name("glEvalCoord2dv");
	if (!glEvalCoord2dv) { print_msg("glEvalCoord2dv not loaded"); }
	glfn_glEvalCoord2f = (PFNGLEVALCOORD2FPROC)get_gl_func_address_name("glEvalCoord2f");
	if (!glEvalCoord2f) { print_msg("glEvalCoord2f not loaded"); }
	glfn_glEvalCoord2fv = (PFNGLEVALCOORD2FVPROC)get_gl_func_address_name("glEvalCoord2fv");
	if (!glEvalCoord2fv) { print_msg("glEvalCoord2fv not loaded"); }
	glfn_glEvalMesh1 = (PFNGLEVALMESH1PROC)get_gl_func_address_name("glEvalMesh1");
	if (!glEvalMesh1) { print_msg("glEvalMesh1 not loaded"); }
	glfn_glEvalMesh2 = (PFNGLEVALMESH2PROC)get_gl_func_address_name("glEvalMesh2");
	if (!glEvalMesh2) { print_msg("glEvalMesh2 not loaded"); }
	glfn_glEvalPoint1 = (PFNGLEVALPOINT1PROC)get_gl_func_address_name("glEvalPoint1");
	if (!glEvalPoint1) { print_msg("glEvalPoint1 not loaded"); }
	glfn_glEvalPoint2 = (PFNGLEVALPOINT2PROC)get_gl_func_address_name("glEvalPoint2");
	if (!glEvalPoint2) { print_msg("glEvalPoint2 not loaded"); }
	glfn_glFeedbackBuffer = (PFNGLFEEDBACKBUFFERPROC)get_gl_func_address_name("glFeedbackBuffer");
	if (!glFeedbackBuffer) { print_msg("glFeedbackBuffer not loaded"); }
	glfn_glFinish = (PFNGLFINISHPROC)get_gl_func_address_name("glFinish");
	if (!glFinish) { print_msg("glFinish not loaded"); }
	glfn_glFlush = (PFNGLFLUSHPROC)get_gl_func_address_name("glFlush");
	if (!glFlush) { print_msg("glFlush not loaded"); }
	glfn_glFogf = (PFNGLFOGFPROC)get_gl_func_address_name("glFogf");
	if (!glFogf) { print_msg("glFogf not loaded"); }
	glfn_glFogfv = (PFNGLFOGFVPROC)get_gl_func_address_name("glFogfv");
	if (!glFogfv) { print_msg("glFogfv not loaded"); }
	glfn_glFogi = (PFNGLFOGIPROC)get_gl_func_address_name("glFogi");
	if (!glFogi) { print_msg("glFogi not loaded"); }
	glfn_glFogiv = (PFNGLFOGIVPROC)get_gl_func_address_name("glFogiv");
	if (!glFogiv) { print_msg("glFogiv not loaded"); }
	glfn_glFrontFace = (PFNGLFRONTFACEPROC)get_gl_func_address_name("glFrontFace");
	if (!glFrontFace) { print_msg("glFrontFace not loaded"); }
	glfn_glFrustum = (PFNGLFRUSTUMPROC)get_gl_func_address_name("glFrustum");
	if (!glFrustum) { print_msg("glFrustum not loaded"); }
	glfn_glGenLists = (PFNGLGENLISTSPROC)get_gl_func_address_name("glGenLists");
	if (!glGenLists) { print_msg("glGenLists not loaded"); }
	glfn_glGenTextures = (PFNGLGENTEXTURESPROC)get_gl_func_address_name("glGenTextures");
	if (!glGenTextures) { print_msg("glGenTextures not loaded"); }
	glfn_glGetBooleanv = (PFNGLGETBOOLEANVPROC)get_gl_func_address_name("glGetBooleanv");
	if (!glGetBooleanv) { print_msg("glGetBooleanv not loaded"); }
	glfn_glGetClipPlane = (PFNGLGETCLIPPLANEPROC)get_gl_func_address_name("glGetClipPlane");
	if (!glGetClipPlane) { print_msg("glGetClipPlane not loaded"); }
	glfn_glGetDoublev = (PFNGLGETDOUBLEVPROC)get_gl_func_address_name("glGetDoublev");
	if (!glGetDoublev) { print_msg("glGetDoublev not loaded"); }
	glfn_glGetError = (PFNGLGETERRORPROC)get_gl_func_address_name("glGetError");
	if (!glGetError) { print_msg("glGetError not loaded"); }
	glfn_glGetFloatv = (PFNGLGETFLOATVPROC)get_gl_func_address_name("glGetFloatv");
	if (!glGetFloatv) { print_msg("glGetFloatv not loaded"); }
	glfn_glGetIntegerv = (PFNGLGETINTEGERVPROC)get_gl_func_address_name("glGetIntegerv");
	if (!glGetIntegerv) { print_msg("glGetIntegerv not loaded"); }
	glfn_glGetLightfv = (PFNGLGETLIGHTFVPROC)get_gl_func_address_name("glGetLightfv");
	if (!glGetLightfv) { print_msg("glGetLightfv not loaded"); }
	glfn_glGetLightiv = (PFNGLGETLIGHTIVPROC)get_gl_func_address_name("glGetLightiv");
	if (!glGetLightiv) { print_msg("glGetLightiv not loaded"); }
	glfn_glGetMapdv = (PFNGLGETMAPDVPROC)get_gl_func_address_name("glGetMapdv");
	if (!glGetMapdv) { print_msg("glGetMapdv not loaded"); }
	glfn_glGetMapfv = (PFNGLGETMAPFVPROC)get_gl_func_address_name("glGetMapfv");
	if (!glGetMapfv) { print_msg("glGetMapfv not loaded"); }
	glfn_glGetMapiv = (PFNGLGETMAPIVPROC)get_gl_func_address_name("glGetMapiv");
	if (!glGetMapiv) { print_msg("glGetMapiv not loaded"); }
	glfn_glGetMaterialfv = (PFNGLGETMATERIALFVPROC)get_gl_func_address_name("glGetMaterialfv");
	if (!glGetMaterialfv) { print_msg("glGetMaterialfv not loaded"); }
	glfn_glGetMaterialiv = (PFNGLGETMATERIALIVPROC)get_gl_func_address_name("glGetMaterialiv");
	if (!glGetMaterialiv) { print_msg("glGetMaterialiv not loaded"); }
	glfn_glGetPixelMapfv = (PFNGLGETPIXELMAPFVPROC)get_gl_func_address_name("glGetPixelMapfv");
	if (!glGetPixelMapfv) { print_msg("glGetPixelMapfv not loaded"); }
	glfn_glGetPixelMapuiv = (PFNGLGETPIXELMAPUIVPROC)get_gl_func_address_name("glGetPixelMapuiv");
	if (!glGetPixelMapuiv) { print_msg("glGetPixelMapuiv not loaded"); }
	glfn_glGetPixelMapusv = (PFNGLGETPIXELMAPUSVPROC)get_gl_func_address_name("glGetPixelMapusv");
	if (!glGetPixelMapusv) { print_msg("glGetPixelMapusv not loaded"); }
	glfn_glGetPointerv = (PFNGLGETPOINTERVPROC)get_gl_func_address_name("glGetPointerv");
	if (!glGetPointerv) { print_msg("glGetPointerv not loaded"); }
	glfn_glGetPolygonStipple = (PFNGLGETPOLYGONSTIPPLEPROC)get_gl_func_address_name("glGetPolygonStipple");
	if (!glGetPolygonStipple) { print_msg("glGetPolygonStipple not loaded"); }
	glfn_glGetString = (PFNGLGETSTRINGPROC)get_gl_func_address_name("glGetString");
	if (!glGetString) { print_msg("glGetString not loaded"); }
	glfn_glGetTexEnvfv = (PFNGLGETTEXENVFVPROC)get_gl_func_address_name("glGetTexEnvfv");
	if (!glGetTexEnvfv) { print_msg("glGetTexEnvfv not loaded"); }
	glfn_glGetTexEnviv = (PFNGLGETTEXENVIVPROC)get_gl_func_address_name("glGetTexEnviv");
	if (!glGetTexEnviv) { print_msg("glGetTexEnviv not loaded"); }
	glfn_glGetTexGendv = (PFNGLGETTEXGENDVPROC)get_gl_func_address_name("glGetTexGendv");
	if (!glGetTexGendv) { print_msg("glGetTexGendv not loaded"); }
	glfn_glGetTexGenfv = (PFNGLGETTEXGENFVPROC)get_gl_func_address_name("glGetTexGenfv");
	if (!glGetTexGenfv) { print_msg("glGetTexGenfv not loaded"); }
	glfn_glGetTexGeniv = (PFNGLGETTEXGENIVPROC)get_gl_func_address_name("glGetTexGeniv");
	if (!glGetTexGeniv) { print_msg("glGetTexGeniv not loaded"); }
	glfn_glGetTexImage = (PFNGLGETTEXIMAGEPROC)get_gl_func_address_name("glGetTexImage");
	if (!glGetTexImage) { print_msg("glGetTexImage not loaded"); }
	glfn_glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC)get_gl_func_address_name("glGetTexLevelParameterfv");
	if (!glGetTexLevelParameterfv) { print_msg("glGetTexLevelParameterfv not loaded"); }
	glfn_glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC)get_gl_func_address_name("glGetTexLevelParameteriv");
	if (!glGetTexLevelParameteriv) { print_msg("glGetTexLevelParameteriv not loaded"); }
	glfn_glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC)get_gl_func_address_name("glGetTexParameterfv");
	if (!glGetTexParameterfv) { print_msg("glGetTexParameterfv not loaded"); }
	glfn_glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC)get_gl_func_address_name("glGetTexParameteriv");
	if (!glGetTexParameteriv) { print_msg("glGetTexParameteriv not loaded"); }
	glfn_glHint = (PFNGLHINTPROC)get_gl_func_address_name("glHint");
	if (!glHint) { print_msg("glHint not loaded"); }
	glfn_glIndexMask = (PFNGLINDEXMASKPROC)get_gl_func_address_name("glIndexMask");
	if (!glIndexMask) { print_msg("glIndexMask not loaded"); }
	glfn_glIndexPointer = (PFNGLINDEXPOINTERPROC)get_gl_func_address_name("glIndexPointer");
	if (!glIndexPointer) { print_msg("glIndexPointer not loaded"); }
	glfn_glIndexd = (PFNGLINDEXDPROC)get_gl_func_address_name("glIndexd");
	if (!glIndexd) { print_msg("glIndexd not loaded"); }
	glfn_glIndexdv = (PFNGLINDEXDVPROC)get_gl_func_address_name("glIndexdv");
	if (!glIndexdv) { print_msg("glIndexdv not loaded"); }
	glfn_glIndexf = (PFNGLINDEXFPROC)get_gl_func_address_name("glIndexf");
	if (!glIndexf) { print_msg("glIndexf not loaded"); }
	glfn_glIndexfv = (PFNGLINDEXFVPROC)get_gl_func_address_name("glIndexfv");
	if (!glIndexfv) { print_msg("glIndexfv not loaded"); }
	glfn_glIndexi = (PFNGLINDEXIPROC)get_gl_func_address_name("glIndexi");
	if (!glIndexi) { print_msg("glIndexi not loaded"); }
	glfn_glIndexiv = (PFNGLINDEXIVPROC)get_gl_func_address_name("glIndexiv");
	if (!glIndexiv) { print_msg("glIndexiv not loaded"); }
	glfn_glIndexs = (PFNGLINDEXSPROC)get_gl_func_address_name("glIndexs");
	if (!glIndexs) { print_msg("glIndexs not loaded"); }
	glfn_glIndexsv = (PFNGLINDEXSVPROC)get_gl_func_address_name("glIndexsv");
	if (!glIndexsv) { print_msg("glIndexsv not loaded"); }
	glfn_glIndexub = (PFNGLINDEXUBPROC)get_gl_func_address_name("glIndexub");
	if (!glIndexub) { print_msg("glIndexub not loaded"); }
	glfn_glIndexubv = (PFNGLINDEXUBVPROC)get_gl_func_address_name("glIndexubv");
	if (!glIndexubv) { print_msg("glIndexubv not loaded"); }
	glfn_glInitNames = (PFNGLINITNAMESPROC)get_gl_func_address_name("glInitNames");
	if (!glInitNames) { print_msg("glInitNames not loaded"); }
	glfn_glInterleavedArrays = (PFNGLINTERLEAVEDARRAYSPROC)get_gl_func_address_name("glInterleavedArrays");
	if (!glInterleavedArrays) { print_msg("glInterleavedArrays not loaded"); }
	glfn_glIsEnabled = (PFNGLISENABLEDPROC)get_gl_func_address_name("glIsEnabled");
	if (!glIsEnabled) { print_msg("glIsEnabled not loaded"); }
	glfn_glIsList = (PFNGLISLISTPROC)get_gl_func_address_name("glIsList");
	if (!glIsList) { print_msg("glIsList not loaded"); }
	glfn_glIsTexture = (PFNGLISTEXTUREPROC)get_gl_func_address_name("glIsTexture");
	if (!glIsTexture) { print_msg("glIsTexture not loaded"); }
	glfn_glLightModelf = (PFNGLLIGHTMODELFPROC)get_gl_func_address_name("glLightModelf");
	if (!glLightModelf) { print_msg("glLightModelf not loaded"); }
	glfn_glLightModelfv = (PFNGLLIGHTMODELFVPROC)get_gl_func_address_name("glLightModelfv");
	if (!glLightModelfv) { print_msg("glLightModelfv not loaded"); }
	glfn_glLightModeli = (PFNGLLIGHTMODELIPROC)get_gl_func_address_name("glLightModeli");
	if (!glLightModeli) { print_msg("glLightModeli not loaded"); }
	glfn_glLightModeliv = (PFNGLLIGHTMODELIVPROC)get_gl_func_address_name("glLightModeliv");
	if (!glLightModeliv) { print_msg("glLightModeliv not loaded"); }
	glfn_glLightf = (PFNGLLIGHTFPROC)get_gl_func_address_name("glLightf");
	if (!glLightf) { print_msg("glLightf not loaded"); }
	glfn_glLightfv = (PFNGLLIGHTFVPROC)get_gl_func_address_name("glLightfv");
	if (!glLightfv) { print_msg("glLightfv not loaded"); }
	glfn_glLighti = (PFNGLLIGHTIPROC)get_gl_func_address_name("glLighti");
	if (!glLighti) { print_msg("glLighti not loaded"); }
	glfn_glLightiv = (PFNGLLIGHTIVPROC)get_gl_func_address_name("glLightiv");
	if (!glLightiv) { print_msg("glLightiv not loaded"); }
	glfn_glLineStipple = (PFNGLLINESTIPPLEPROC)get_gl_func_address_name("glLineStipple");
	if (!glLineStipple) { print_msg("glLineStipple not loaded"); }
	glfn_glLineWidth = (PFNGLLINEWIDTHPROC)get_gl_func_address_name("glLineWidth");
	if (!glLineWidth) { print_msg("glLineWidth not loaded"); }
	glfn_glListBase = (PFNGLLISTBASEPROC)get_gl_func_address_name("glListBase");
	if (!glListBase) { print_msg("glListBase not loaded"); }
	glfn_glLoadIdentity = (PFNGLLOADIDENTITYPROC)get_gl_func_address_name("glLoadIdentity");
	if (!glLoadIdentity) { print_msg("glLoadIdentity not loaded"); }
	glfn_glLoadMatrixd = (PFNGLLOADMATRIXDPROC)get_gl_func_address_name("glLoadMatrixd");
	if (!glLoadMatrixd) { print_msg("glLoadMatrixd not loaded"); }
	glfn_glLoadMatrixf = (PFNGLLOADMATRIXFPROC)get_gl_func_address_name("glLoadMatrixf");
	if (!glLoadMatrixf) { print_msg("glLoadMatrixf not loaded"); }
	glfn_glLoadName = (PFNGLLOADNAMEPROC)get_gl_func_address_name("glLoadName");
	if (!glLoadName) { print_msg("glLoadName not loaded"); }
	glfn_glLogicOp = (PFNGLLOGICOPPROC)get_gl_func_address_name("glLogicOp");
	if (!glLogicOp) { print_msg("glLogicOp not loaded"); }
	glfn_glMap1d = (PFNGLMAP1DPROC)get_gl_func_address_name("glMap1d");
	if (!glMap1d) { print_msg("glMap1d not loaded"); }
	glfn_glMap1f = (PFNGLMAP1FPROC)get_gl_func_address_name("glMap1f");
	if (!glMap1f) { print_msg("glMap1f not loaded"); }
	glfn_glMap2d = (PFNGLMAP2DPROC)get_gl_func_address_name("glMap2d");
	if (!glMap2d) { print_msg("glMap2d not loaded"); }
	glfn_glMap2f = (PFNGLMAP2FPROC)get_gl_func_address_name("glMap2f");
	if (!glMap2f) { print_msg("glMap2f not loaded"); }
	glfn_glMapGrid1d = (PFNGLMAPGRID1DPROC)get_gl_func_address_name("glMapGrid1d");
	if (!glMapGrid1d) { print_msg("glMapGrid1d not loaded"); }
	glfn_glMapGrid1f = (PFNGLMAPGRID1FPROC)get_gl_func_address_name("glMapGrid1f");
	if (!glMapGrid1f) { print_msg("glMapGrid1f not loaded"); }
	glfn_glMapGrid2d = (PFNGLMAPGRID2DPROC)get_gl_func_address_name("glMapGrid2d");
	if (!glMapGrid2d) { print_msg("glMapGrid2d not loaded"); }
	glfn_glMapGrid2f = (PFNGLMAPGRID2FPROC)get_gl_func_address_name("glMapGrid2f");
	if (!glMapGrid2f) { print_msg("glMapGrid2f not loaded"); }
	glfn_glMaterialf = (PFNGLMATERIALFPROC)get_gl_func_address_name("glMaterialf");
	if (!glMaterialf) { print_msg("glMaterialf not loaded"); }
	glfn_glMaterialfv = (PFNGLMATERIALFVPROC)get_gl_func_address_name("glMaterialfv");
	if (!glMaterialfv) { print_msg("glMaterialfv not loaded"); }
	glfn_glMateriali = (PFNGLMATERIALIPROC)get_gl_func_address_name("glMateriali");
	if (!glMateriali) { print_msg("glMateriali not loaded"); }
	glfn_glMaterialiv = (PFNGLMATERIALIVPROC)get_gl_func_address_name("glMaterialiv");
	if (!glMaterialiv) { print_msg("glMaterialiv not loaded"); }
	glfn_glMatrixMode = (PFNGLMATRIXMODEPROC)get_gl_func_address_name("glMatrixMode");
	if (!glMatrixMode) { print_msg("glMatrixMode not loaded"); }
	glfn_glMultMatrixd = (PFNGLMULTMATRIXDPROC)get_gl_func_address_name("glMultMatrixd");
	if (!glMultMatrixd) { print_msg("glMultMatrixd not loaded"); }
	glfn_glMultMatrixf = (PFNGLMULTMATRIXFPROC)get_gl_func_address_name("glMultMatrixf");
	if (!glMultMatrixf) { print_msg("glMultMatrixf not loaded"); }
	glfn_glNewList = (PFNGLNEWLISTPROC)get_gl_func_address_name("glNewList");
	if (!glNewList) { print_msg("glNewList not loaded"); }
	glfn_glNormal3b = (PFNGLNORMAL3BPROC)get_gl_func_address_name("glNormal3b");
	if (!glNormal3b) { print_msg("glNormal3b not loaded"); }
	glfn_glNormal3bv = (PFNGLNORMAL3BVPROC)get_gl_func_address_name("glNormal3bv");
	if (!glNormal3bv) { print_msg("glNormal3bv not loaded"); }
	glfn_glNormal3d = (PFNGLNORMAL3DPROC)get_gl_func_address_name("glNormal3d");
	if (!glNormal3d) { print_msg("glNormal3d not loaded"); }
	glfn_glNormal3dv = (PFNGLNORMAL3DVPROC)get_gl_func_address_name("glNormal3dv");
	if (!glNormal3dv) { print_msg("glNormal3dv not loaded"); }
	glfn_glNormal3f = (PFNGLNORMAL3FPROC)get_gl_func_address_name("glNormal3f");
	if (!glNormal3f) { print_msg("glNormal3f not loaded"); }
	glfn_glNormal3fv = (PFNGLNORMAL3FVPROC)get_gl_func_address_name("glNormal3fv");
	if (!glNormal3fv) { print_msg("glNormal3fv not loaded"); }
	glfn_glNormal3i = (PFNGLNORMAL3IPROC)get_gl_func_address_name("glNormal3i");
	if (!glNormal3i) { print_msg("glNormal3i not loaded"); }
	glfn_glNormal3iv = (PFNGLNORMAL3IVPROC)get_gl_func_address_name("glNormal3iv");
	if (!glNormal3iv) { print_msg("glNormal3iv not loaded"); }
	glfn_glNormal3s = (PFNGLNORMAL3SPROC)get_gl_func_address_name("glNormal3s");
	if (!glNormal3s) { print_msg("glNormal3s not loaded"); }
	glfn_glNormal3sv = (PFNGLNORMAL3SVPROC)get_gl_func_address_name("glNormal3sv");
	if (!glNormal3sv) { print_msg("glNormal3sv not loaded"); }
	glfn_glNormalPointer = (PFNGLNORMALPOINTERPROC)get_gl_func_address_name("glNormalPointer");
	if (!glNormalPointer) { print_msg("glNormalPointer not loaded"); }
	glfn_glOrtho = (PFNGLORTHOPROC)get_gl_func_address_name("glOrtho");
	if (!glOrtho) { print_msg("glOrtho not loaded"); }
	glfn_glPassThrough = (PFNGLPASSTHROUGHPROC)get_gl_func_address_name("glPassThrough");
	if (!glPassThrough) { print_msg("glPassThrough not loaded"); }
	glfn_glPixelMapfv = (PFNGLPIXELMAPFVPROC)get_gl_func_address_name("glPixelMapfv");
	if (!glPixelMapfv) { print_msg("glPixelMapfv not loaded"); }
	glfn_glPixelMapuiv = (PFNGLPIXELMAPUIVPROC)get_gl_func_address_name("glPixelMapuiv");
	if (!glPixelMapuiv) { print_msg("glPixelMapuiv not loaded"); }
	glfn_glPixelMapusv = (PFNGLPIXELMAPUSVPROC)get_gl_func_address_name("glPixelMapusv");
	if (!glPixelMapusv) { print_msg("glPixelMapusv not loaded"); }
	glfn_glPixelStoref = (PFNGLPIXELSTOREFPROC)get_gl_func_address_name("glPixelStoref");
	if (!glPixelStoref) { print_msg("glPixelStoref not loaded"); }
	glfn_glPixelStorei = (PFNGLPIXELSTOREIPROC)get_gl_func_address_name("glPixelStorei");
	if (!glPixelStorei) { print_msg("glPixelStorei not loaded"); }
	glfn_glPixelTransferf = (PFNGLPIXELTRANSFERFPROC)get_gl_func_address_name("glPixelTransferf");
	if (!glPixelTransferf) { print_msg("glPixelTransferf not loaded"); }
	glfn_glPixelTransferi = (PFNGLPIXELTRANSFERIPROC)get_gl_func_address_name("glPixelTransferi");
	if (!glPixelTransferi) { print_msg("glPixelTransferi not loaded"); }
	glfn_glPixelZoom = (PFNGLPIXELZOOMPROC)get_gl_func_address_name("glPixelZoom");
	if (!glPixelZoom) { print_msg("glPixelZoom not loaded"); }
	glfn_glPointSize = (PFNGLPOINTSIZEPROC)get_gl_func_address_name("glPointSize");
	if (!glPointSize) { print_msg("glPointSize not loaded"); }
	glfn_glPolygonMode = (PFNGLPOLYGONMODEPROC)get_gl_func_address_name("glPolygonMode");
	if (!glPolygonMode) { print_msg("glPolygonMode not loaded"); }
	glfn_glPolygonOffset = (PFNGLPOLYGONOFFSETPROC)get_gl_func_address_name("glPolygonOffset");
	if (!glPolygonOffset) { print_msg("glPolygonOffset not loaded"); }
	glfn_glPolygonStipple = (PFNGLPOLYGONSTIPPLEPROC)get_gl_func_address_name("glPolygonStipple");
	if (!glPolygonStipple) { print_msg("glPolygonStipple not loaded"); }
	glfn_glPopAttrib = (PFNGLPOPATTRIBPROC)get_gl_func_address_name("glPopAttrib");
	if (!glPopAttrib) { print_msg("glPopAttrib not loaded"); }
	glfn_glPopClientAttrib = (PFNGLPOPCLIENTATTRIBPROC)get_gl_func_address_name("glPopClientAttrib");
	if (!glPopClientAttrib) { print_msg("glPopClientAttrib not loaded"); }
	glfn_glPopMatrix = (PFNGLPOPMATRIXPROC)get_gl_func_address_name("glPopMatrix");
	if (!glPopMatrix) { print_msg("glPopMatrix not loaded"); }
	glfn_glPopName = (PFNGLPOPNAMEPROC)get_gl_func_address_name("glPopName");
	if (!glPopName) { print_msg("glPopName not loaded"); }
	glfn_glPrioritizeTextures = (PFNGLPRIORITIZETEXTURESPROC)get_gl_func_address_name("glPrioritizeTextures");
	if (!glPrioritizeTextures) { print_msg("glPrioritizeTextures not loaded"); }
	glfn_glPushAttrib = (PFNGLPUSHATTRIBPROC)get_gl_func_address_name("glPushAttrib");
	if (!glPushAttrib) { print_msg("glPushAttrib not loaded"); }
	glfn_glPushClientAttrib = (PFNGLPUSHCLIENTATTRIBPROC)get_gl_func_address_name("glPushClientAttrib");
	if (!glPushClientAttrib) { print_msg("glPushClientAttrib not loaded"); }
	glfn_glPushMatrix = (PFNGLPUSHMATRIXPROC)get_gl_func_address_name("glPushMatrix");
	if (!glPushMatrix) { print_msg("glPushMatrix not loaded"); }
	glfn_glPushName = (PFNGLPUSHNAMEPROC)get_gl_func_address_name("glPushName");
	if (!glPushName) { print_msg("glPushName not loaded"); }
	glfn_glRasterPos2d = (PFNGLRASTERPOS2DPROC)get_gl_func_address_name("glRasterPos2d");
	if (!glRasterPos2d) { print_msg("glRasterPos2d not loaded"); }
	glfn_glRasterPos2dv = (PFNGLRASTERPOS2DVPROC)get_gl_func_address_name("glRasterPos2dv");
	if (!glRasterPos2dv) { print_msg("glRasterPos2dv not loaded"); }
	glfn_glRasterPos2f = (PFNGLRASTERPOS2FPROC)get_gl_func_address_name("glRasterPos2f");
	if (!glRasterPos2f) { print_msg("glRasterPos2f not loaded"); }
	glfn_glRasterPos2fv = (PFNGLRASTERPOS2FVPROC)get_gl_func_address_name("glRasterPos2fv");
	if (!glRasterPos2fv) { print_msg("glRasterPos2fv not loaded"); }
	glfn_glRasterPos2i = (PFNGLRASTERPOS2IPROC)get_gl_func_address_name("glRasterPos2i");
	if (!glRasterPos2i) { print_msg("glRasterPos2i not loaded"); }
	glfn_glRasterPos2iv = (PFNGLRASTERPOS2IVPROC)get_gl_func_address_name("glRasterPos2iv");
	if (!glRasterPos2iv) { print_msg("glRasterPos2iv not loaded"); }
	glfn_glRasterPos2s = (PFNGLRASTERPOS2SPROC)get_gl_func_address_name("glRasterPos2s");
	if (!glRasterPos2s) { print_msg("glRasterPos2s not loaded"); }
	glfn_glRasterPos2sv = (PFNGLRASTERPOS2SVPROC)get_gl_func_address_name("glRasterPos2sv");
	if (!glRasterPos2sv) { print_msg("glRasterPos2sv not loaded"); }
	glfn_glRasterPos3d = (PFNGLRASTERPOS3DPROC)get_gl_func_address_name("glRasterPos3d");
	if (!glRasterPos3d) { print_msg("glRasterPos3d not loaded"); }
	glfn_glRasterPos3dv = (PFNGLRASTERPOS3DVPROC)get_gl_func_address_name("glRasterPos3dv");
	if (!glRasterPos3dv) { print_msg("glRasterPos3dv not loaded"); }
	glfn_glRasterPos3f = (PFNGLRASTERPOS3FPROC)get_gl_func_address_name("glRasterPos3f");
	if (!glRasterPos3f) { print_msg("glRasterPos3f not loaded"); }
	glfn_glRasterPos3fv = (PFNGLRASTERPOS3FVPROC)get_gl_func_address_name("glRasterPos3fv");
	if (!glRasterPos3fv) { print_msg("glRasterPos3fv not loaded"); }
	glfn_glRasterPos3i = (PFNGLRASTERPOS3IPROC)get_gl_func_address_name("glRasterPos3i");
	if (!glRasterPos3i) { print_msg("glRasterPos3i not loaded"); }
	glfn_glRasterPos3iv = (PFNGLRASTERPOS3IVPROC)get_gl_func_address_name("glRasterPos3iv");
	if (!glRasterPos3iv) { print_msg("glRasterPos3iv not loaded"); }
	glfn_glRasterPos3s = (PFNGLRASTERPOS3SPROC)get_gl_func_address_name("glRasterPos3s");
	if (!glRasterPos3s) { print_msg("glRasterPos3s not loaded"); }
	glfn_glRasterPos3sv = (PFNGLRASTERPOS3SVPROC)get_gl_func_address_name("glRasterPos3sv");
	if (!glRasterPos3sv) { print_msg("glRasterPos3sv not loaded"); }
	glfn_glRasterPos4d = (PFNGLRASTERPOS4DPROC)get_gl_func_address_name("glRasterPos4d");
	if (!glRasterPos4d) { print_msg("glRasterPos4d not loaded"); }
	glfn_glRasterPos4dv = (PFNGLRASTERPOS4DVPROC)get_gl_func_address_name("glRasterPos4dv");
	if (!glRasterPos4dv) { print_msg("glRasterPos4dv not loaded"); }
	glfn_glRasterPos4f = (PFNGLRASTERPOS4FPROC)get_gl_func_address_name("glRasterPos4f");
	if (!glRasterPos4f) { print_msg("glRasterPos4f not loaded"); }
	glfn_glRasterPos4fv = (PFNGLRASTERPOS4FVPROC)get_gl_func_address_name("glRasterPos4fv");
	if (!glRasterPos4fv) { print_msg("glRasterPos4fv not loaded"); }
	glfn_glRasterPos4i = (PFNGLRASTERPOS4IPROC)get_gl_func_address_name("glRasterPos4i");
	if (!glRasterPos4i) { print_msg("glRasterPos4i not loaded"); }
	glfn_glRasterPos4iv = (PFNGLRASTERPOS4IVPROC)get_gl_func_address_name("glRasterPos4iv");
	if (!glRasterPos4iv) { print_msg("glRasterPos4iv not loaded"); }
	glfn_glRasterPos4s = (PFNGLRASTERPOS4SPROC)get_gl_func_address_name("glRasterPos4s");
	if (!glRasterPos4s) { print_msg("glRasterPos4s not loaded"); }
	glfn_glRasterPos4sv = (PFNGLRASTERPOS4SVPROC)get_gl_func_address_name("glRasterPos4sv");
	if (!glRasterPos4sv) { print_msg("glRasterPos4sv not loaded"); }
	glfn_glReadBuffer = (PFNGLREADBUFFERPROC)get_gl_func_address_name("glReadBuffer");
	if (!glReadBuffer) { print_msg("glReadBuffer not loaded"); }
	glfn_glReadPixels = (PFNGLREADPIXELSPROC)get_gl_func_address_name("glReadPixels");
	if (!glReadPixels) { print_msg("glReadPixels not loaded"); }
	glfn_glRectd = (PFNGLRECTDPROC)get_gl_func_address_name("glRectd");
	if (!glRectd) { print_msg("glRectd not loaded"); }
	glfn_glRectdv = (PFNGLRECTDVPROC)get_gl_func_address_name("glRectdv");
	if (!glRectdv) { print_msg("glRectdv not loaded"); }
	glfn_glRectf = (PFNGLRECTFPROC)get_gl_func_address_name("glRectf");
	if (!glRectf) { print_msg("glRectf not loaded"); }
	glfn_glRectfv = (PFNGLRECTFVPROC)get_gl_func_address_name("glRectfv");
	if (!glRectfv) { print_msg("glRectfv not loaded"); }
	glfn_glRecti = (PFNGLRECTIPROC)get_gl_func_address_name("glRecti");
	if (!glRecti) { print_msg("glRecti not loaded"); }
	glfn_glRectiv = (PFNGLRECTIVPROC)get_gl_func_address_name("glRectiv");
	if (!glRectiv) { print_msg("glRectiv not loaded"); }
	glfn_glRects = (PFNGLRECTSPROC)get_gl_func_address_name("glRects");
	if (!glRects) { print_msg("glRects not loaded"); }
	glfn_glRectsv = (PFNGLRECTSVPROC)get_gl_func_address_name("glRectsv");
	if (!glRectsv) { print_msg("glRectsv not loaded"); }
	glfn_glRenderMode = (PFNGLRENDERMODEPROC)get_gl_func_address_name("glRenderMode");
	if (!glRenderMode) { print_msg("glRenderMode not loaded"); }
	glfn_glRotated = (PFNGLROTATEDPROC)get_gl_func_address_name("glRotated");
	if (!glRotated) { print_msg("glRotated not loaded"); }
	glfn_glRotatef = (PFNGLROTATEFPROC)get_gl_func_address_name("glRotatef");
	if (!glRotatef) { print_msg("glRotatef not loaded"); }
	glfn_glScaled = (PFNGLSCALEDPROC)get_gl_func_address_name("glScaled");
	if (!glScaled) { print_msg("glScaled not loaded"); }
	glfn_glScalef = (PFNGLSCALEFPROC)get_gl_func_address_name("glScalef");
	if (!glScalef) { print_msg("glScalef not loaded"); }
	glfn_glScissor = (PFNGLSCISSORPROC)get_gl_func_address_name("glScissor");
	if (!glScissor) { print_msg("glScissor not loaded"); }
	glfn_glSelectBuffer = (PFNGLSELECTBUFFERPROC)get_gl_func_address_name("glSelectBuffer");
	if (!glSelectBuffer) { print_msg("glSelectBuffer not loaded"); }
	glfn_glShadeModel = (PFNGLSHADEMODELPROC)get_gl_func_address_name("glShadeModel");
	if (!glShadeModel) { print_msg("glShadeModel not loaded"); }
	glfn_glStencilFunc = (PFNGLSTENCILFUNCPROC)get_gl_func_address_name("glStencilFunc");
	if (!glStencilFunc) { print_msg("glStencilFunc not loaded"); }
	glfn_glStencilMask = (PFNGLSTENCILMASKPROC)get_gl_func_address_name("glStencilMask");
	if (!glStencilMask) { print_msg("glStencilMask not loaded"); }
	glfn_glStencilOp = (PFNGLSTENCILOPPROC)get_gl_func_address_name("glStencilOp");
	if (!glStencilOp) { print_msg("glStencilOp not loaded"); }
	glfn_glTexCoord1d = (PFNGLTEXCOORD1DPROC)get_gl_func_address_name("glTexCoord1d");
	if (!glTexCoord1d) { print_msg("glTexCoord1d not loaded"); }
	glfn_glTexCoord1dv = (PFNGLTEXCOORD1DVPROC)get_gl_func_address_name("glTexCoord1dv");
	if (!glTexCoord1dv) { print_msg("glTexCoord1dv not loaded"); }
	glfn_glTexCoord1f = (PFNGLTEXCOORD1FPROC)get_gl_func_address_name("glTexCoord1f");
	if (!glTexCoord1f) { print_msg("glTexCoord1f not loaded"); }
	glfn_glTexCoord1fv = (PFNGLTEXCOORD1FVPROC)get_gl_func_address_name("glTexCoord1fv");
	if (!glTexCoord1fv) { print_msg("glTexCoord1fv not loaded"); }
	glfn_glTexCoord1i = (PFNGLTEXCOORD1IPROC)get_gl_func_address_name("glTexCoord1i");
	if (!glTexCoord1i) { print_msg("glTexCoord1i not loaded"); }
	glfn_glTexCoord1iv = (PFNGLTEXCOORD1IVPROC)get_gl_func_address_name("glTexCoord1iv");
	if (!glTexCoord1iv) { print_msg("glTexCoord1iv not loaded"); }
	glfn_glTexCoord1s = (PFNGLTEXCOORD1SPROC)get_gl_func_address_name("glTexCoord1s");
	if (!glTexCoord1s) { print_msg("glTexCoord1s not loaded"); }
	glfn_glTexCoord1sv = (PFNGLTEXCOORD1SVPROC)get_gl_func_address_name("glTexCoord1sv");
	if (!glTexCoord1sv) { print_msg("glTexCoord1sv not loaded"); }
	glfn_glTexCoord2d = (PFNGLTEXCOORD2DPROC)get_gl_func_address_name("glTexCoord2d");
	if (!glTexCoord2d) { print_msg("glTexCoord2d not loaded"); }
	glfn_glTexCoord2dv = (PFNGLTEXCOORD2DVPROC)get_gl_func_address_name("glTexCoord2dv");
	if (!glTexCoord2dv) { print_msg("glTexCoord2dv not loaded"); }
	glfn_glTexCoord2f = (PFNGLTEXCOORD2FPROC)get_gl_func_address_name("glTexCoord2f");
	if (!glTexCoord2f) { print_msg("glTexCoord2f not loaded"); }
	glfn_glTexCoord2fv = (PFNGLTEXCOORD2FVPROC)get_gl_func_address_name("glTexCoord2fv");
	if (!glTexCoord2fv) { print_msg("glTexCoord2fv not loaded"); }
	glfn_glTexCoord2i = (PFNGLTEXCOORD2IPROC)get_gl_func_address_name("glTexCoord2i");
	if (!glTexCoord2i) { print_msg("glTexCoord2i not loaded"); }
	glfn_glTexCoord2iv = (PFNGLTEXCOORD2IVPROC)get_gl_func_address_name("glTexCoord2iv");
	if (!glTexCoord2iv) { print_msg("glTexCoord2iv not loaded"); }
	glfn_glTexCoord2s = (PFNGLTEXCOORD2SPROC)get_gl_func_address_name("glTexCoord2s");
	if (!glTexCoord2s) { print_msg("glTexCoord2s not loaded"); }
	glfn_glTexCoord2sv = (PFNGLTEXCOORD2SVPROC)get_gl_func_address_name("glTexCoord2sv");
	if (!glTexCoord2sv) { print_msg("glTexCoord2sv not loaded"); }
	glfn_glTexCoord3d = (PFNGLTEXCOORD3DPROC)get_gl_func_address_name("glTexCoord3d");
	if (!glTexCoord3d) { print_msg("glTexCoord3d not loaded"); }
	glfn_glTexCoord3dv = (PFNGLTEXCOORD3DVPROC)get_gl_func_address_name("glTexCoord3dv");
	if (!glTexCoord3dv) { print_msg("glTexCoord3dv not loaded"); }
	glfn_glTexCoord3f = (PFNGLTEXCOORD3FPROC)get_gl_func_address_name("glTexCoord3f");
	if (!glTexCoord3f) { print_msg("glTexCoord3f not loaded"); }
	glfn_glTexCoord3fv = (PFNGLTEXCOORD3FVPROC)get_gl_func_address_name("glTexCoord3fv");
	if (!glTexCoord3fv) { print_msg("glTexCoord3fv not loaded"); }
	glfn_glTexCoord3i = (PFNGLTEXCOORD3IPROC)get_gl_func_address_name("glTexCoord3i");
	if (!glTexCoord3i) { print_msg("glTexCoord3i not loaded"); }
	glfn_glTexCoord3iv = (PFNGLTEXCOORD3IVPROC)get_gl_func_address_name("glTexCoord3iv");
	if (!glTexCoord3iv) { print_msg("glTexCoord3iv not loaded"); }
	glfn_glTexCoord3s = (PFNGLTEXCOORD3SPROC)get_gl_func_address_name("glTexCoord3s");
	if (!glTexCoord3s) { print_msg("glTexCoord3s not loaded"); }
	glfn_glTexCoord3sv = (PFNGLTEXCOORD3SVPROC)get_gl_func_address_name("glTexCoord3sv");
	if (!glTexCoord3sv) { print_msg("glTexCoord3sv not loaded"); }
	glfn_glTexCoord4d = (PFNGLTEXCOORD4DPROC)get_gl_func_address_name("glTexCoord4d");
	if (!glTexCoord4d) { print_msg("glTexCoord4d not loaded"); }
	glfn_glTexCoord4dv = (PFNGLTEXCOORD4DVPROC)get_gl_func_address_name("glTexCoord4dv");
	if (!glTexCoord4dv) { print_msg("glTexCoord4dv not loaded"); }
	glfn_glTexCoord4f = (PFNGLTEXCOORD4FPROC)get_gl_func_address_name("glTexCoord4f");
	if (!glTexCoord4f) { print_msg("glTexCoord4f not loaded"); }
	glfn_glTexCoord4fv = (PFNGLTEXCOORD4FVPROC)get_gl_func_address_name("glTexCoord4fv");
	if (!glTexCoord4fv) { print_msg("glTexCoord4fv not loaded"); }
	glfn_glTexCoord4i = (PFNGLTEXCOORD4IPROC)get_gl_func_address_name("glTexCoord4i");
	if (!glTexCoord4i) { print_msg("glTexCoord4i not loaded"); }
	glfn_glTexCoord4iv = (PFNGLTEXCOORD4IVPROC)get_gl_func_address_name("glTexCoord4iv");
	if (!glTexCoord4iv) { print_msg("glTexCoord4iv not loaded"); }
	glfn_glTexCoord4s = (PFNGLTEXCOORD4SPROC)get_gl_func_address_name("glTexCoord4s");
	if (!glTexCoord4s) { print_msg("glTexCoord4s not loaded"); }
	glfn_glTexCoord4sv = (PFNGLTEXCOORD4SVPROC)get_gl_func_address_name("glTexCoord4sv");
	if (!glTexCoord4sv) { print_msg("glTexCoord4sv not loaded"); }
	glfn_glTexCoordPointer = (PFNGLTEXCOORDPOINTERPROC)get_gl_func_address_name("glTexCoordPointer");
	if (!glTexCoordPointer) { print_msg("glTexCoordPointer not loaded"); }
	glfn_glTexEnvf = (PFNGLTEXENVFPROC)get_gl_func_address_name("glTexEnvf");
	if (!glTexEnvf) { print_msg("glTexEnvf not loaded"); }
	glfn_glTexEnvfv = (PFNGLTEXENVFVPROC)get_gl_func_address_name("glTexEnvfv");
	if (!glTexEnvfv) { print_msg("glTexEnvfv not loaded"); }
	glfn_glTexEnvi = (PFNGLTEXENVIPROC)get_gl_func_address_name("glTexEnvi");
	if (!glTexEnvi) { print_msg("glTexEnvi not loaded"); }
	glfn_glTexEnviv = (PFNGLTEXENVIVPROC)get_gl_func_address_name("glTexEnviv");
	if (!glTexEnviv) { print_msg("glTexEnviv not loaded"); }
	glfn_glTexGend = (PFNGLTEXGENDPROC)get_gl_func_address_name("glTexGend");
	if (!glTexGend) { print_msg("glTexGend not loaded"); }
	glfn_glTexGendv = (PFNGLTEXGENDVPROC)get_gl_func_address_name("glTexGendv");
	if (!glTexGendv) { print_msg("glTexGendv not loaded"); }
	glfn_glTexGenf = (PFNGLTEXGENFPROC)get_gl_func_address_name("glTexGenf");
	if (!glTexGenf) { print_msg("glTexGenf not loaded"); }
	glfn_glTexGenfv = (PFNGLTEXGENFVPROC)get_gl_func_address_name("glTexGenfv");
	if (!glTexGenfv) { print_msg("glTexGenfv not loaded"); }
	glfn_glTexGeni = (PFNGLTEXGENIPROC)get_gl_func_address_name("glTexGeni");
	if (!glTexGeni) { print_msg("glTexGeni not loaded"); }
	glfn_glTexGeniv = (PFNGLTEXGENIVPROC)get_gl_func_address_name("glTexGeniv");
	if (!glTexGeniv) { print_msg("glTexGeniv not loaded"); }
	glfn_glTexImage1D = (PFNGLTEXIMAGE1DPROC)get_gl_func_address_name("glTexImage1D");
	if (!glTexImage1D) { print_msg("glTexImage1D not loaded"); }
	glfn_glTexImage2D = (PFNGLTEXIMAGE2DPROC)get_gl_func_address_name("glTexImage2D");
	if (!glTexImage2D) { print_msg("glTexImage2D not loaded"); }
	glfn_glTexParameterf = (PFNGLTEXPARAMETERFPROC)get_gl_func_address_name("glTexParameterf");
	if (!glTexParameterf) { print_msg("glTexParameterf not loaded"); }
	glfn_glTexParameterfv = (PFNGLTEXPARAMETERFVPROC)get_gl_func_address_name("glTexParameterfv");
	if (!glTexParameterfv) { print_msg("glTexParameterfv not loaded"); }
	glfn_glTexParameteri = (PFNGLTEXPARAMETERIPROC)get_gl_func_address_name("glTexParameteri");
	if (!glTexParameteri) { print_msg("glTexParameteri not loaded"); }
	glfn_glTexParameteriv = (PFNGLTEXPARAMETERIVPROC)get_gl_func_address_name("glTexParameteriv");
	if (!glTexParameteriv) { print_msg("glTexParameteriv not loaded"); }
	glfn_glTexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC)get_gl_func_address_name("glTexSubImage1D");
	if (!glTexSubImage1D) { print_msg("glTexSubImage1D not loaded"); }
	glfn_glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC)get_gl_func_address_name("glTexSubImage2D");
	if (!glTexSubImage2D) { print_msg("glTexSubImage2D not loaded"); }
	glfn_glTranslated = (PFNGLTRANSLATEDPROC)get_gl_func_address_name("glTranslated");
	if (!glTranslated) { print_msg("glTranslated not loaded"); }
	glfn_glTranslatef = (PFNGLTRANSLATEFPROC)get_gl_func_address_name("glTranslatef");
	if (!glTranslatef) { print_msg("glTranslatef not loaded"); }
	glfn_glVertex2d = (PFNGLVERTEX2DPROC)get_gl_func_address_name("glVertex2d");
	if (!glVertex2d) { print_msg("glVertex2d not loaded"); }
	glfn_glVertex2dv = (PFNGLVERTEX2DVPROC)get_gl_func_address_name("glVertex2dv");
	if (!glVertex2dv) { print_msg("glVertex2dv not loaded"); }
	glfn_glVertex2f = (PFNGLVERTEX2FPROC)get_gl_func_address_name("glVertex2f");
	if (!glVertex2f) { print_msg("glVertex2f not loaded"); }
	glfn_glVertex2fv = (PFNGLVERTEX2FVPROC)get_gl_func_address_name("glVertex2fv");
	if (!glVertex2fv) { print_msg("glVertex2fv not loaded"); }
	glfn_glVertex2i = (PFNGLVERTEX2IPROC)get_gl_func_address_name("glVertex2i");
	if (!glVertex2i) { print_msg("glVertex2i not loaded"); }
	glfn_glVertex2iv = (PFNGLVERTEX2IVPROC)get_gl_func_address_name("glVertex2iv");
	if (!glVertex2iv) { print_msg("glVertex2iv not loaded"); }
	glfn_glVertex2s = (PFNGLVERTEX2SPROC)get_gl_func_address_name("glVertex2s");
	if (!glVertex2s) { print_msg("glVertex2s not loaded"); }
	glfn_glVertex2sv = (PFNGLVERTEX2SVPROC)get_gl_func_address_name("glVertex2sv");
	if (!glVertex2sv) { print_msg("glVertex2sv not loaded"); }
	glfn_glVertex3d = (PFNGLVERTEX3DPROC)get_gl_func_address_name("glVertex3d");
	if (!glVertex3d) { print_msg("glVertex3d not loaded"); }
	glfn_glVertex3dv = (PFNGLVERTEX3DVPROC)get_gl_func_address_name("glVertex3dv");
	if (!glVertex3dv) { print_msg("glVertex3dv not loaded"); }
	glfn_glVertex3f = (PFNGLVERTEX3FPROC)get_gl_func_address_name("glVertex3f");
	if (!glVertex3f) { print_msg("glVertex3f not loaded"); }
	glfn_glVertex3fv = (PFNGLVERTEX3FVPROC)get_gl_func_address_name("glVertex3fv");
	if (!glVertex3fv) { print_msg("glVertex3fv not loaded"); }
	glfn_glVertex3i = (PFNGLVERTEX3IPROC)get_gl_func_address_name("glVertex3i");
	if (!glVertex3i) { print_msg("glVertex3i not loaded"); }
	glfn_glVertex3iv = (PFNGLVERTEX3IVPROC)get_gl_func_address_name("glVertex3iv");
	if (!glVertex3iv) { print_msg("glVertex3iv not loaded"); }
	glfn_glVertex3s = (PFNGLVERTEX3SPROC)get_gl_func_address_name("glVertex3s");
	if (!glVertex3s) { print_msg("glVertex3s not loaded"); }
	glfn_glVertex3sv = (PFNGLVERTEX3SVPROC)get_gl_func_address_name("glVertex3sv");
	if (!glVertex3sv) { print_msg("glVertex3sv not loaded"); }
	glfn_glVertex4d = (PFNGLVERTEX4DPROC)get_gl_func_address_name("glVertex4d");
	if (!glVertex4d) { print_msg("glVertex4d not loaded"); }
	glfn_glVertex4dv = (PFNGLVERTEX4DVPROC)get_gl_func_address_name("glVertex4dv");
	if (!glVertex4dv) { print_msg("glVertex4dv not loaded"); }
	glfn_glVertex4f = (PFNGLVERTEX4FPROC)get_gl_func_address_name("glVertex4f");
	if (!glVertex4f) { print_msg("glVertex4f not loaded"); }
	glfn_glVertex4fv = (PFNGLVERTEX4FVPROC)get_gl_func_address_name("glVertex4fv");
	if (!glVertex4fv) { print_msg("glVertex4fv not loaded"); }
	glfn_glVertex4i = (PFNGLVERTEX4IPROC)get_gl_func_address_name("glVertex4i");
	if (!glVertex4i) { print_msg("glVertex4i not loaded"); }
	glfn_glVertex4iv = (PFNGLVERTEX4IVPROC)get_gl_func_address_name("glVertex4iv");
	if (!glVertex4iv) { print_msg("glVertex4iv not loaded"); }
	glfn_glVertex4s = (PFNGLVERTEX4SPROC)get_gl_func_address_name("glVertex4s");
	if (!glVertex4s) { print_msg("glVertex4s not loaded"); }
	glfn_glVertex4sv = (PFNGLVERTEX4SVPROC)get_gl_func_address_name("glVertex4sv");
	if (!glVertex4sv) { print_msg("glVertex4sv not loaded"); }
	glfn_glVertexPointer = (PFNGLVERTEXPOINTERPROC)get_gl_func_address_name("glVertexPointer");
	if (!glVertexPointer) { print_msg("glVertexPointer not loaded"); }
	glfn_glViewport = (PFNGLVIEWPORTPROC)get_gl_func_address_name("glViewport");
	if (!glViewport) { print_msg("glViewport not loaded"); }
}


// GL_VERSION_1_2
PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements = nullptr;
PFNGLTEXIMAGE3DPROC glTexImage3D = nullptr;
PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D = nullptr;
PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D = nullptr;
// GL_VERSION_1_3
PFNGLACTIVETEXTUREPROC glActiveTexture = nullptr;
PFNGLSAMPLECOVERAGEPROC glSampleCoverage = nullptr;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D = nullptr;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D = nullptr;
PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D = nullptr;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D = nullptr;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D = nullptr;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D = nullptr;
PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage = nullptr;
PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture = nullptr;
PFNGLMULTITEXCOORD1DPROC glMultiTexCoord1d = nullptr;
PFNGLMULTITEXCOORD1DVPROC glMultiTexCoord1dv = nullptr;
PFNGLMULTITEXCOORD1FPROC glMultiTexCoord1f = nullptr;
PFNGLMULTITEXCOORD1FVPROC glMultiTexCoord1fv = nullptr;
PFNGLMULTITEXCOORD1IPROC glMultiTexCoord1i = nullptr;
PFNGLMULTITEXCOORD1IVPROC glMultiTexCoord1iv = nullptr;
PFNGLMULTITEXCOORD1SPROC glMultiTexCoord1s = nullptr;
PFNGLMULTITEXCOORD1SVPROC glMultiTexCoord1sv = nullptr;
PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2d = nullptr;
PFNGLMULTITEXCOORD2DVPROC glMultiTexCoord2dv = nullptr;
PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f = nullptr;
PFNGLMULTITEXCOORD2FVPROC glMultiTexCoord2fv = nullptr;
PFNGLMULTITEXCOORD2IPROC glMultiTexCoord2i = nullptr;
PFNGLMULTITEXCOORD2IVPROC glMultiTexCoord2iv = nullptr;
PFNGLMULTITEXCOORD2SPROC glMultiTexCoord2s = nullptr;
PFNGLMULTITEXCOORD2SVPROC glMultiTexCoord2sv = nullptr;
PFNGLMULTITEXCOORD3DPROC glMultiTexCoord3d = nullptr;
PFNGLMULTITEXCOORD3DVPROC glMultiTexCoord3dv = nullptr;
PFNGLMULTITEXCOORD3FPROC glMultiTexCoord3f = nullptr;
PFNGLMULTITEXCOORD3FVPROC glMultiTexCoord3fv = nullptr;
PFNGLMULTITEXCOORD3IPROC glMultiTexCoord3i = nullptr;
PFNGLMULTITEXCOORD3IVPROC glMultiTexCoord3iv = nullptr;
PFNGLMULTITEXCOORD3SPROC glMultiTexCoord3s = nullptr;
PFNGLMULTITEXCOORD3SVPROC glMultiTexCoord3sv = nullptr;
PFNGLMULTITEXCOORD4DPROC glMultiTexCoord4d = nullptr;
PFNGLMULTITEXCOORD4DVPROC glMultiTexCoord4dv = nullptr;
PFNGLMULTITEXCOORD4FPROC glMultiTexCoord4f = nullptr;
PFNGLMULTITEXCOORD4FVPROC glMultiTexCoord4fv = nullptr;
PFNGLMULTITEXCOORD4IPROC glMultiTexCoord4i = nullptr;
PFNGLMULTITEXCOORD4IVPROC glMultiTexCoord4iv = nullptr;
PFNGLMULTITEXCOORD4SPROC glMultiTexCoord4s = nullptr;
PFNGLMULTITEXCOORD4SVPROC glMultiTexCoord4sv = nullptr;
PFNGLLOADTRANSPOSEMATRIXFPROC glLoadTransposeMatrixf = nullptr;
PFNGLLOADTRANSPOSEMATRIXDPROC glLoadTransposeMatrixd = nullptr;
PFNGLMULTTRANSPOSEMATRIXFPROC glMultTransposeMatrixf = nullptr;
PFNGLMULTTRANSPOSEMATRIXDPROC glMultTransposeMatrixd = nullptr;
// GL_VERSION_1_4
PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate = nullptr;
PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays = nullptr;
PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements = nullptr;
PFNGLPOINTPARAMETERFPROC glPointParameterf = nullptr;
PFNGLPOINTPARAMETERFVPROC glPointParameterfv = nullptr;
PFNGLPOINTPARAMETERIPROC glPointParameteri = nullptr;
PFNGLPOINTPARAMETERIVPROC glPointParameteriv = nullptr;
PFNGLFOGCOORDFPROC glFogCoordf = nullptr;
PFNGLFOGCOORDFVPROC glFogCoordfv = nullptr;
PFNGLFOGCOORDDPROC glFogCoordd = nullptr;
PFNGLFOGCOORDDVPROC glFogCoorddv = nullptr;
PFNGLFOGCOORDPOINTERPROC glFogCoordPointer = nullptr;
PFNGLSECONDARYCOLOR3BPROC glSecondaryColor3b = nullptr;
PFNGLSECONDARYCOLOR3BVPROC glSecondaryColor3bv = nullptr;
PFNGLSECONDARYCOLOR3DPROC glSecondaryColor3d = nullptr;
PFNGLSECONDARYCOLOR3DVPROC glSecondaryColor3dv = nullptr;
PFNGLSECONDARYCOLOR3FPROC glSecondaryColor3f = nullptr;
PFNGLSECONDARYCOLOR3FVPROC glSecondaryColor3fv = nullptr;
PFNGLSECONDARYCOLOR3IPROC glSecondaryColor3i = nullptr;
PFNGLSECONDARYCOLOR3IVPROC glSecondaryColor3iv = nullptr;
PFNGLSECONDARYCOLOR3SPROC glSecondaryColor3s = nullptr;
PFNGLSECONDARYCOLOR3SVPROC glSecondaryColor3sv = nullptr;
PFNGLSECONDARYCOLOR3UBPROC glSecondaryColor3ub = nullptr;
PFNGLSECONDARYCOLOR3UBVPROC glSecondaryColor3ubv = nullptr;
PFNGLSECONDARYCOLOR3UIPROC glSecondaryColor3ui = nullptr;
PFNGLSECONDARYCOLOR3UIVPROC glSecondaryColor3uiv = nullptr;
PFNGLSECONDARYCOLOR3USPROC glSecondaryColor3us = nullptr;
PFNGLSECONDARYCOLOR3USVPROC glSecondaryColor3usv = nullptr;
PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer = nullptr;
PFNGLWINDOWPOS2DPROC glWindowPos2d = nullptr;
PFNGLWINDOWPOS2DVPROC glWindowPos2dv = nullptr;
PFNGLWINDOWPOS2FPROC glWindowPos2f = nullptr;
PFNGLWINDOWPOS2FVPROC glWindowPos2fv = nullptr;
PFNGLWINDOWPOS2IPROC glWindowPos2i = nullptr;
PFNGLWINDOWPOS2IVPROC glWindowPos2iv = nullptr;
PFNGLWINDOWPOS2SPROC glWindowPos2s = nullptr;
PFNGLWINDOWPOS2SVPROC glWindowPos2sv = nullptr;
PFNGLWINDOWPOS3DPROC glWindowPos3d = nullptr;
PFNGLWINDOWPOS3DVPROC glWindowPos3dv = nullptr;
PFNGLWINDOWPOS3FPROC glWindowPos3f = nullptr;
PFNGLWINDOWPOS3FVPROC glWindowPos3fv = nullptr;
PFNGLWINDOWPOS3IPROC glWindowPos3i = nullptr;
PFNGLWINDOWPOS3IVPROC glWindowPos3iv = nullptr;
PFNGLWINDOWPOS3SPROC glWindowPos3s = nullptr;
PFNGLWINDOWPOS3SVPROC glWindowPos3sv = nullptr;
PFNGLBLENDCOLORPROC glBlendColor = nullptr;
PFNGLBLENDEQUATIONPROC glBlendEquation = nullptr;
// GL_VERSION_1_5
PFNGLGENQUERIESPROC glGenQueries = nullptr;
PFNGLDELETEQUERIESPROC glDeleteQueries = nullptr;
PFNGLISQUERYPROC glIsQuery = nullptr;
PFNGLBEGINQUERYPROC glBeginQuery = nullptr;
PFNGLENDQUERYPROC glEndQuery = nullptr;
PFNGLGETQUERYIVPROC glGetQueryiv = nullptr;
PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv = nullptr;
PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv = nullptr;
PFNGLBINDBUFFERPROC glBindBuffer = nullptr;
PFNGLDELETEBUFFERSPROC glDeleteBuffers = nullptr;
PFNGLGENBUFFERSPROC glGenBuffers = nullptr;
PFNGLISBUFFERPROC glIsBuffer = nullptr;
PFNGLBUFFERDATAPROC glBufferData = nullptr;
PFNGLBUFFERSUBDATAPROC glBufferSubData = nullptr;
PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData = nullptr;
PFNGLMAPBUFFERPROC glMapBuffer = nullptr;
PFNGLUNMAPBUFFERPROC glUnmapBuffer = nullptr;
PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv = nullptr;
PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv = nullptr;
// GL_VERSION_2_0
PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate = nullptr;
PFNGLDRAWBUFFERSPROC glDrawBuffers = nullptr;
PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate = nullptr;
PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate = nullptr;
PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate = nullptr;
PFNGLATTACHSHADERPROC glAttachShader = nullptr;
PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation = nullptr;
PFNGLCOMPILESHADERPROC glCompileShader = nullptr;
PFNGLCREATEPROGRAMPROC glCreateProgram = nullptr;
PFNGLCREATESHADERPROC glCreateShader = nullptr;
PFNGLDELETEPROGRAMPROC glDeleteProgram = nullptr;
PFNGLDELETESHADERPROC glDeleteShader = nullptr;
PFNGLDETACHSHADERPROC glDetachShader = nullptr;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray = nullptr;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray = nullptr;
PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib = nullptr;
PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform = nullptr;
PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders = nullptr;
PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation = nullptr;
PFNGLGETPROGRAMIVPROC glGetProgramiv = nullptr;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog = nullptr;
PFNGLGETSHADERIVPROC glGetShaderiv = nullptr;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog = nullptr;
PFNGLGETSHADERSOURCEPROC glGetShaderSource = nullptr;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation = nullptr;
PFNGLGETUNIFORMFVPROC glGetUniformfv = nullptr;
PFNGLGETUNIFORMIVPROC glGetUniformiv = nullptr;
PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv = nullptr;
PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv = nullptr;
PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv = nullptr;
PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv = nullptr;
PFNGLISPROGRAMPROC glIsProgram = nullptr;
PFNGLISSHADERPROC glIsShader = nullptr;
PFNGLLINKPROGRAMPROC glLinkProgram = nullptr;
PFNGLSHADERSOURCEPROC glShaderSource = nullptr;
PFNGLUSEPROGRAMPROC glUseProgram = nullptr;
PFNGLUNIFORM1FPROC glUniform1f = nullptr;
PFNGLUNIFORM2FPROC glUniform2f = nullptr;
PFNGLUNIFORM3FPROC glUniform3f = nullptr;
PFNGLUNIFORM4FPROC glUniform4f = nullptr;
PFNGLUNIFORM1IPROC glUniform1i = nullptr;
PFNGLUNIFORM2IPROC glUniform2i = nullptr;
PFNGLUNIFORM3IPROC glUniform3i = nullptr;
PFNGLUNIFORM4IPROC glUniform4i = nullptr;
PFNGLUNIFORM1FVPROC glUniform1fv = nullptr;
PFNGLUNIFORM2FVPROC glUniform2fv = nullptr;
PFNGLUNIFORM3FVPROC glUniform3fv = nullptr;
PFNGLUNIFORM4FVPROC glUniform4fv = nullptr;
PFNGLUNIFORM1IVPROC glUniform1iv = nullptr;
PFNGLUNIFORM2IVPROC glUniform2iv = nullptr;
PFNGLUNIFORM3IVPROC glUniform3iv = nullptr;
PFNGLUNIFORM4IVPROC glUniform4iv = nullptr;
PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv = nullptr;
PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv = nullptr;
PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv = nullptr;
PFNGLVALIDATEPROGRAMPROC glValidateProgram = nullptr;
PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d = nullptr;
PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv = nullptr;
PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f = nullptr;
PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv = nullptr;
PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s = nullptr;
PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv = nullptr;
PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d = nullptr;
PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv = nullptr;
PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f = nullptr;
PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv = nullptr;
PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s = nullptr;
PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv = nullptr;
PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d = nullptr;
PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv = nullptr;
PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f = nullptr;
PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv = nullptr;
PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s = nullptr;
PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv = nullptr;
PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv = nullptr;
PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv = nullptr;
PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv = nullptr;
PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub = nullptr;
PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv = nullptr;
PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv = nullptr;
PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv = nullptr;
PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv = nullptr;
PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d = nullptr;
PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv = nullptr;
PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f = nullptr;
PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv = nullptr;
PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv = nullptr;
PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s = nullptr;
PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv = nullptr;
PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv = nullptr;
PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv = nullptr;
PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv = nullptr;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer = nullptr;
// GL_VERSION_2_1
PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv = nullptr;
PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv = nullptr;
PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv = nullptr;
PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv = nullptr;
PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv = nullptr;
PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv = nullptr;
// GL_VERSION_3_0
PFNGLCOLORMASKIPROC glColorMaski = nullptr;
PFNGLGETBOOLEANI_VPROC glGetBooleani_v = nullptr;
PFNGLGETINTEGERI_VPROC glGetIntegeri_v = nullptr;
PFNGLENABLEIPROC glEnablei = nullptr;
PFNGLDISABLEIPROC glDisablei = nullptr;
PFNGLISENABLEDIPROC glIsEnabledi = nullptr;
PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback = nullptr;
PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback = nullptr;
PFNGLBINDBUFFERRANGEPROC glBindBufferRange = nullptr;
PFNGLBINDBUFFERBASEPROC glBindBufferBase = nullptr;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings = nullptr;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying = nullptr;
PFNGLCLAMPCOLORPROC glClampColor = nullptr;
PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender = nullptr;
PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender = nullptr;
PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer = nullptr;
PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv = nullptr;
PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv = nullptr;
PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i = nullptr;
PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i = nullptr;
PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i = nullptr;
PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i = nullptr;
PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui = nullptr;
PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui = nullptr;
PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui = nullptr;
PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui = nullptr;
PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv = nullptr;
PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv = nullptr;
PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv = nullptr;
PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv = nullptr;
PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv = nullptr;
PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv = nullptr;
PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv = nullptr;
PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv = nullptr;
PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv = nullptr;
PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv = nullptr;
PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv = nullptr;
PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv = nullptr;
PFNGLGETUNIFORMUIVPROC glGetUniformuiv = nullptr;
PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation = nullptr;
PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation = nullptr;
PFNGLUNIFORM1UIPROC glUniform1ui = nullptr;
PFNGLUNIFORM2UIPROC glUniform2ui = nullptr;
PFNGLUNIFORM3UIPROC glUniform3ui = nullptr;
PFNGLUNIFORM4UIPROC glUniform4ui = nullptr;
PFNGLUNIFORM1UIVPROC glUniform1uiv = nullptr;
PFNGLUNIFORM2UIVPROC glUniform2uiv = nullptr;
PFNGLUNIFORM3UIVPROC glUniform3uiv = nullptr;
PFNGLUNIFORM4UIVPROC glUniform4uiv = nullptr;
PFNGLTEXPARAMETERIIVPROC glTexParameterIiv = nullptr;
PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv = nullptr;
PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv = nullptr;
PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv = nullptr;
PFNGLCLEARBUFFERIVPROC glClearBufferiv = nullptr;
PFNGLCLEARBUFFERUIVPROC glClearBufferuiv = nullptr;
PFNGLCLEARBUFFERFVPROC glClearBufferfv = nullptr;
PFNGLCLEARBUFFERFIPROC glClearBufferfi = nullptr;
PFNGLGETSTRINGIPROC glGetStringi = nullptr;
PFNGLISRENDERBUFFERPROC glIsRenderbuffer = nullptr;
PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer = nullptr;
PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers = nullptr;
PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers = nullptr;
PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage = nullptr;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv = nullptr;
PFNGLISFRAMEBUFFERPROC glIsFramebuffer = nullptr;
PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer = nullptr;
PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers = nullptr;
PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers = nullptr;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus = nullptr;
PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D = nullptr;
PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D = nullptr;
PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D = nullptr;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer = nullptr;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv = nullptr;
PFNGLGENERATEMIPMAPPROC glGenerateMipmap = nullptr;
PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer = nullptr;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample = nullptr;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer = nullptr;
PFNGLMAPBUFFERRANGEPROC glMapBufferRange = nullptr;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange = nullptr;
PFNGLBINDVERTEXARRAYPROC glBindVertexArray = nullptr;
PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays = nullptr;
PFNGLGENVERTEXARRAYSPROC glGenVertexArrays = nullptr;
PFNGLISVERTEXARRAYPROC glIsVertexArray = nullptr;
// GL_VERSION_3_1
PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced = nullptr;
PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced = nullptr;
PFNGLTEXBUFFERPROC glTexBuffer = nullptr;
PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex = nullptr;
PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData = nullptr;
PFNGLGETUNIFORMINDICESPROC glGetUniformIndices = nullptr;
PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv = nullptr;
PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName = nullptr;
PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex = nullptr;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv = nullptr;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName = nullptr;
PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding = nullptr;
// GL_VERSION_3_2
PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex = nullptr;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex = nullptr;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex = nullptr;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex = nullptr;
PFNGLPROVOKINGVERTEXPROC glProvokingVertex = nullptr;
PFNGLFENCESYNCPROC glFenceSync = nullptr;
PFNGLISSYNCPROC glIsSync = nullptr;
PFNGLDELETESYNCPROC glDeleteSync = nullptr;
PFNGLCLIENTWAITSYNCPROC glClientWaitSync = nullptr;
PFNGLWAITSYNCPROC glWaitSync = nullptr;
PFNGLGETINTEGER64VPROC glGetInteger64v = nullptr;
PFNGLGETSYNCIVPROC glGetSynciv = nullptr;
PFNGLGETINTEGER64I_VPROC glGetInteger64i_v = nullptr;
PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v = nullptr;
PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture = nullptr;
PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample = nullptr;
PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample = nullptr;
PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv = nullptr;
PFNGLSAMPLEMASKIPROC glSampleMaski = nullptr;
// GL_VERSION_3_3
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed = nullptr;
PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex = nullptr;
PFNGLGENSAMPLERSPROC glGenSamplers = nullptr;
PFNGLDELETESAMPLERSPROC glDeleteSamplers = nullptr;
PFNGLISSAMPLERPROC glIsSampler = nullptr;
PFNGLBINDSAMPLERPROC glBindSampler = nullptr;
PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri = nullptr;
PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv = nullptr;
PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf = nullptr;
PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv = nullptr;
PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv = nullptr;
PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv = nullptr;
PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv = nullptr;
PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv = nullptr;
PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv = nullptr;
PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv = nullptr;
PFNGLQUERYCOUNTERPROC glQueryCounter = nullptr;
PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v = nullptr;
PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v = nullptr;
PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor = nullptr;
PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui = nullptr;
PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv = nullptr;
PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui = nullptr;
PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv = nullptr;
PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui = nullptr;
PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv = nullptr;
PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui = nullptr;
PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv = nullptr;
PFNGLVERTEXP2UIPROC glVertexP2ui = nullptr;
PFNGLVERTEXP2UIVPROC glVertexP2uiv = nullptr;
PFNGLVERTEXP3UIPROC glVertexP3ui = nullptr;
PFNGLVERTEXP3UIVPROC glVertexP3uiv = nullptr;
PFNGLVERTEXP4UIPROC glVertexP4ui = nullptr;
PFNGLVERTEXP4UIVPROC glVertexP4uiv = nullptr;
PFNGLTEXCOORDP1UIPROC glTexCoordP1ui = nullptr;
PFNGLTEXCOORDP1UIVPROC glTexCoordP1uiv = nullptr;
PFNGLTEXCOORDP2UIPROC glTexCoordP2ui = nullptr;
PFNGLTEXCOORDP2UIVPROC glTexCoordP2uiv = nullptr;
PFNGLTEXCOORDP3UIPROC glTexCoordP3ui = nullptr;
PFNGLTEXCOORDP3UIVPROC glTexCoordP3uiv = nullptr;
PFNGLTEXCOORDP4UIPROC glTexCoordP4ui = nullptr;
PFNGLTEXCOORDP4UIVPROC glTexCoordP4uiv = nullptr;
PFNGLMULTITEXCOORDP1UIPROC glMultiTexCoordP1ui = nullptr;
PFNGLMULTITEXCOORDP1UIVPROC glMultiTexCoordP1uiv = nullptr;
PFNGLMULTITEXCOORDP2UIPROC glMultiTexCoordP2ui = nullptr;
PFNGLMULTITEXCOORDP2UIVPROC glMultiTexCoordP2uiv = nullptr;
PFNGLMULTITEXCOORDP3UIPROC glMultiTexCoordP3ui = nullptr;
PFNGLMULTITEXCOORDP3UIVPROC glMultiTexCoordP3uiv = nullptr;
PFNGLMULTITEXCOORDP4UIPROC glMultiTexCoordP4ui = nullptr;
PFNGLMULTITEXCOORDP4UIVPROC glMultiTexCoordP4uiv = nullptr;
PFNGLNORMALP3UIPROC glNormalP3ui = nullptr;
PFNGLNORMALP3UIVPROC glNormalP3uiv = nullptr;
PFNGLCOLORP3UIPROC glColorP3ui = nullptr;
PFNGLCOLORP3UIVPROC glColorP3uiv = nullptr;
PFNGLCOLORP4UIPROC glColorP4ui = nullptr;
PFNGLCOLORP4UIVPROC glColorP4uiv = nullptr;
PFNGLSECONDARYCOLORP3UIPROC glSecondaryColorP3ui = nullptr;
PFNGLSECONDARYCOLORP3UIVPROC glSecondaryColorP3uiv = nullptr;
// GL_VERSION_4_0
PFNGLMINSAMPLESHADINGPROC glMinSampleShading = nullptr;
PFNGLBLENDEQUATIONIPROC glBlendEquationi = nullptr;
PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei = nullptr;
PFNGLBLENDFUNCIPROC glBlendFunci = nullptr;
PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei = nullptr;
PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect = nullptr;
PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect = nullptr;
PFNGLUNIFORM1DPROC glUniform1d = nullptr;
PFNGLUNIFORM2DPROC glUniform2d = nullptr;
PFNGLUNIFORM3DPROC glUniform3d = nullptr;
PFNGLUNIFORM4DPROC glUniform4d = nullptr;
PFNGLUNIFORM1DVPROC glUniform1dv = nullptr;
PFNGLUNIFORM2DVPROC glUniform2dv = nullptr;
PFNGLUNIFORM3DVPROC glUniform3dv = nullptr;
PFNGLUNIFORM4DVPROC glUniform4dv = nullptr;
PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv = nullptr;
PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv = nullptr;
PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv = nullptr;
PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv = nullptr;
PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv = nullptr;
PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv = nullptr;
PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv = nullptr;
PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv = nullptr;
PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv = nullptr;
PFNGLGETUNIFORMDVPROC glGetUniformdv = nullptr;
PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation = nullptr;
PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex = nullptr;
PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv = nullptr;
PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName = nullptr;
PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName = nullptr;
PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv = nullptr;
PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv = nullptr;
PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv = nullptr;
PFNGLPATCHPARAMETERIPROC glPatchParameteri = nullptr;
PFNGLPATCHPARAMETERFVPROC glPatchParameterfv = nullptr;
PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback = nullptr;
PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks = nullptr;
PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks = nullptr;
PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback = nullptr;
PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback = nullptr;
PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback = nullptr;
PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback = nullptr;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream = nullptr;
PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed = nullptr;
PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed = nullptr;
PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv = nullptr;
// GL_VERSION_4_1
PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler = nullptr;
PFNGLSHADERBINARYPROC glShaderBinary = nullptr;
PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat = nullptr;
PFNGLDEPTHRANGEFPROC glDepthRangef = nullptr;
PFNGLCLEARDEPTHFPROC glClearDepthf = nullptr;
PFNGLGETPROGRAMBINARYPROC glGetProgramBinary = nullptr;
PFNGLPROGRAMBINARYPROC glProgramBinary = nullptr;
PFNGLPROGRAMPARAMETERIPROC glProgramParameteri = nullptr;
PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages = nullptr;
PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram = nullptr;
PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv = nullptr;
PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline = nullptr;
PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines = nullptr;
PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines = nullptr;
PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline = nullptr;
PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv = nullptr;
PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i = nullptr;
PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv = nullptr;
PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f = nullptr;
PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv = nullptr;
PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d = nullptr;
PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv = nullptr;
PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui = nullptr;
PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv = nullptr;
PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i = nullptr;
PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv = nullptr;
PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f = nullptr;
PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv = nullptr;
PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d = nullptr;
PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv = nullptr;
PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui = nullptr;
PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv = nullptr;
PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i = nullptr;
PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv = nullptr;
PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f = nullptr;
PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv = nullptr;
PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d = nullptr;
PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv = nullptr;
PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui = nullptr;
PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv = nullptr;
PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i = nullptr;
PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv = nullptr;
PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f = nullptr;
PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv = nullptr;
PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d = nullptr;
PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv = nullptr;
PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui = nullptr;
PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv = nullptr;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv = nullptr;
PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline = nullptr;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog = nullptr;
PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d = nullptr;
PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d = nullptr;
PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d = nullptr;
PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d = nullptr;
PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv = nullptr;
PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv = nullptr;
PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv = nullptr;
PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv = nullptr;
PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer = nullptr;
PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv = nullptr;
PFNGLVIEWPORTARRAYVPROC glViewportArrayv = nullptr;
PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf = nullptr;
PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv = nullptr;
PFNGLSCISSORARRAYVPROC glScissorArrayv = nullptr;
PFNGLSCISSORINDEXEDPROC glScissorIndexed = nullptr;
PFNGLSCISSORINDEXEDVPROC glScissorIndexedv = nullptr;
PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv = nullptr;
PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed = nullptr;
PFNGLGETFLOATI_VPROC glGetFloati_v = nullptr;
PFNGLGETDOUBLEI_VPROC glGetDoublei_v = nullptr;
// GL_VERSION_4_2
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glDrawArraysInstancedBaseInstance = nullptr;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glDrawElementsInstancedBaseInstance = nullptr;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glDrawElementsInstancedBaseVertexBaseInstance = nullptr;
PFNGLGETINTERNALFORMATIVPROC glGetInternalformativ = nullptr;
PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glGetActiveAtomicCounterBufferiv = nullptr;
PFNGLBINDIMAGETEXTUREPROC glBindImageTexture = nullptr;
PFNGLMEMORYBARRIERPROC glMemoryBarrier = nullptr;
PFNGLTEXSTORAGE1DPROC glTexStorage1D = nullptr;
PFNGLTEXSTORAGE2DPROC glTexStorage2D = nullptr;
PFNGLTEXSTORAGE3DPROC glTexStorage3D = nullptr;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glDrawTransformFeedbackInstanced = nullptr;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glDrawTransformFeedbackStreamInstanced = nullptr;
// GL_VERSION_4_3
PFNGLCLEARBUFFERDATAPROC glClearBufferData = nullptr;
PFNGLCLEARBUFFERSUBDATAPROC glClearBufferSubData = nullptr;
PFNGLDISPATCHCOMPUTEPROC glDispatchCompute = nullptr;
PFNGLDISPATCHCOMPUTEINDIRECTPROC glDispatchComputeIndirect = nullptr;
PFNGLCOPYIMAGESUBDATAPROC glCopyImageSubData = nullptr;
PFNGLFRAMEBUFFERPARAMETERIPROC glFramebufferParameteri = nullptr;
PFNGLGETFRAMEBUFFERPARAMETERIVPROC glGetFramebufferParameteriv = nullptr;
PFNGLGETINTERNALFORMATI64VPROC glGetInternalformati64v = nullptr;
PFNGLINVALIDATETEXSUBIMAGEPROC glInvalidateTexSubImage = nullptr;
PFNGLINVALIDATETEXIMAGEPROC glInvalidateTexImage = nullptr;
PFNGLINVALIDATEBUFFERSUBDATAPROC glInvalidateBufferSubData = nullptr;
PFNGLINVALIDATEBUFFERDATAPROC glInvalidateBufferData = nullptr;
PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer = nullptr;
PFNGLINVALIDATESUBFRAMEBUFFERPROC glInvalidateSubFramebuffer = nullptr;
PFNGLMULTIDRAWARRAYSINDIRECTPROC glMultiDrawArraysIndirect = nullptr;
PFNGLMULTIDRAWELEMENTSINDIRECTPROC glMultiDrawElementsIndirect = nullptr;
PFNGLGETPROGRAMINTERFACEIVPROC glGetProgramInterfaceiv = nullptr;
PFNGLGETPROGRAMRESOURCEINDEXPROC glGetProgramResourceIndex = nullptr;
PFNGLGETPROGRAMRESOURCENAMEPROC glGetProgramResourceName = nullptr;
PFNGLGETPROGRAMRESOURCEIVPROC glGetProgramResourceiv = nullptr;
PFNGLGETPROGRAMRESOURCELOCATIONPROC glGetProgramResourceLocation = nullptr;
PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glGetProgramResourceLocationIndex = nullptr;
PFNGLSHADERSTORAGEBLOCKBINDINGPROC glShaderStorageBlockBinding = nullptr;
PFNGLTEXBUFFERRANGEPROC glTexBufferRange = nullptr;
PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample = nullptr;
PFNGLTEXSTORAGE3DMULTISAMPLEPROC glTexStorage3DMultisample = nullptr;
PFNGLTEXTUREVIEWPROC glTextureView = nullptr;
PFNGLBINDVERTEXBUFFERPROC glBindVertexBuffer = nullptr;
PFNGLVERTEXATTRIBFORMATPROC glVertexAttribFormat = nullptr;
PFNGLVERTEXATTRIBIFORMATPROC glVertexAttribIFormat = nullptr;
PFNGLVERTEXATTRIBLFORMATPROC glVertexAttribLFormat = nullptr;
PFNGLVERTEXATTRIBBINDINGPROC glVertexAttribBinding = nullptr;
PFNGLVERTEXBINDINGDIVISORPROC glVertexBindingDivisor = nullptr;
PFNGLDEBUGMESSAGECONTROLPROC glDebugMessageControl = nullptr;
PFNGLDEBUGMESSAGEINSERTPROC glDebugMessageInsert = nullptr;
PFNGLDEBUGMESSAGECALLBACKPROC glDebugMessageCallback = nullptr;
PFNGLGETDEBUGMESSAGELOGPROC glGetDebugMessageLog = nullptr;
PFNGLPUSHDEBUGGROUPPROC glPushDebugGroup = nullptr;
PFNGLPOPDEBUGGROUPPROC glPopDebugGroup = nullptr;
PFNGLOBJECTLABELPROC glObjectLabel = nullptr;
PFNGLGETOBJECTLABELPROC glGetObjectLabel = nullptr;
PFNGLOBJECTPTRLABELPROC glObjectPtrLabel = nullptr;
PFNGLGETOBJECTPTRLABELPROC glGetObjectPtrLabel = nullptr;
// GL_VERSION_4_4
PFNGLBUFFERSTORAGEPROC glBufferStorage = nullptr;
PFNGLCLEARTEXIMAGEPROC glClearTexImage = nullptr;
PFNGLCLEARTEXSUBIMAGEPROC glClearTexSubImage = nullptr;
PFNGLBINDBUFFERSBASEPROC glBindBuffersBase = nullptr;
PFNGLBINDBUFFERSRANGEPROC glBindBuffersRange = nullptr;
PFNGLBINDTEXTURESPROC glBindTextures = nullptr;
PFNGLBINDSAMPLERSPROC glBindSamplers = nullptr;
PFNGLBINDIMAGETEXTURESPROC glBindImageTextures = nullptr;
PFNGLBINDVERTEXBUFFERSPROC glBindVertexBuffers = nullptr;
// GL_VERSION_4_5
PFNGLCLIPCONTROLPROC glClipControl = nullptr;
PFNGLCREATETRANSFORMFEEDBACKSPROC glCreateTransformFeedbacks = nullptr;
PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glTransformFeedbackBufferBase = nullptr;
PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glTransformFeedbackBufferRange = nullptr;
PFNGLGETTRANSFORMFEEDBACKIVPROC glGetTransformFeedbackiv = nullptr;
PFNGLGETTRANSFORMFEEDBACKI_VPROC glGetTransformFeedbacki_v = nullptr;
PFNGLGETTRANSFORMFEEDBACKI64_VPROC glGetTransformFeedbacki64_v = nullptr;
PFNGLCREATEBUFFERSPROC glCreateBuffers = nullptr;
PFNGLNAMEDBUFFERSTORAGEPROC glNamedBufferStorage = nullptr;
PFNGLNAMEDBUFFERDATAPROC glNamedBufferData = nullptr;
PFNGLNAMEDBUFFERSUBDATAPROC glNamedBufferSubData = nullptr;
PFNGLCOPYNAMEDBUFFERSUBDATAPROC glCopyNamedBufferSubData = nullptr;
PFNGLCLEARNAMEDBUFFERDATAPROC glClearNamedBufferData = nullptr;
PFNGLCLEARNAMEDBUFFERSUBDATAPROC glClearNamedBufferSubData = nullptr;
PFNGLMAPNAMEDBUFFERPROC glMapNamedBuffer = nullptr;
PFNGLMAPNAMEDBUFFERRANGEPROC glMapNamedBufferRange = nullptr;
PFNGLUNMAPNAMEDBUFFERPROC glUnmapNamedBuffer = nullptr;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glFlushMappedNamedBufferRange = nullptr;
PFNGLGETNAMEDBUFFERPARAMETERIVPROC glGetNamedBufferParameteriv = nullptr;
PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glGetNamedBufferParameteri64v = nullptr;
PFNGLGETNAMEDBUFFERPOINTERVPROC glGetNamedBufferPointerv = nullptr;
PFNGLGETNAMEDBUFFERSUBDATAPROC glGetNamedBufferSubData = nullptr;
PFNGLCREATEFRAMEBUFFERSPROC glCreateFramebuffers = nullptr;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glNamedFramebufferRenderbuffer = nullptr;
PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glNamedFramebufferParameteri = nullptr;
PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glNamedFramebufferTexture = nullptr;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glNamedFramebufferTextureLayer = nullptr;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glNamedFramebufferDrawBuffer = nullptr;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glNamedFramebufferDrawBuffers = nullptr;
PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glNamedFramebufferReadBuffer = nullptr;
PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glInvalidateNamedFramebufferData = nullptr;
PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glInvalidateNamedFramebufferSubData = nullptr;
PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glClearNamedFramebufferiv = nullptr;
PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glClearNamedFramebufferuiv = nullptr;
PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glClearNamedFramebufferfv = nullptr;
PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glClearNamedFramebufferfi = nullptr;
PFNGLBLITNAMEDFRAMEBUFFERPROC glBlitNamedFramebuffer = nullptr;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glCheckNamedFramebufferStatus = nullptr;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glGetNamedFramebufferParameteriv = nullptr;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetNamedFramebufferAttachmentParameteriv = nullptr;
PFNGLCREATERENDERBUFFERSPROC glCreateRenderbuffers = nullptr;
PFNGLNAMEDRENDERBUFFERSTORAGEPROC glNamedRenderbufferStorage = nullptr;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC glNamedRenderbufferStorageMultisample = nullptr;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glGetNamedRenderbufferParameteriv = nullptr;
PFNGLCREATETEXTURESPROC glCreateTextures = nullptr;
PFNGLTEXTUREBUFFERPROC glTextureBuffer = nullptr;
PFNGLTEXTUREBUFFERRANGEPROC glTextureBufferRange = nullptr;
PFNGLTEXTURESTORAGE1DPROC glTextureStorage1D = nullptr;
PFNGLTEXTURESTORAGE2DPROC glTextureStorage2D = nullptr;
PFNGLTEXTURESTORAGE3DPROC glTextureStorage3D = nullptr;
PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glTextureStorage2DMultisample = nullptr;
PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glTextureStorage3DMultisample = nullptr;
PFNGLTEXTURESUBIMAGE1DPROC glTextureSubImage1D = nullptr;
PFNGLTEXTURESUBIMAGE2DPROC glTextureSubImage2D = nullptr;
PFNGLTEXTURESUBIMAGE3DPROC glTextureSubImage3D = nullptr;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glCompressedTextureSubImage1D = nullptr;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glCompressedTextureSubImage2D = nullptr;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glCompressedTextureSubImage3D = nullptr;
PFNGLCOPYTEXTURESUBIMAGE1DPROC glCopyTextureSubImage1D = nullptr;
PFNGLCOPYTEXTURESUBIMAGE2DPROC glCopyTextureSubImage2D = nullptr;
PFNGLCOPYTEXTURESUBIMAGE3DPROC glCopyTextureSubImage3D = nullptr;
PFNGLTEXTUREPARAMETERFPROC glTextureParameterf = nullptr;
PFNGLTEXTUREPARAMETERFVPROC glTextureParameterfv = nullptr;
PFNGLTEXTUREPARAMETERIPROC glTextureParameteri = nullptr;
PFNGLTEXTUREPARAMETERIIVPROC glTextureParameterIiv = nullptr;
PFNGLTEXTUREPARAMETERIUIVPROC glTextureParameterIuiv = nullptr;
PFNGLTEXTUREPARAMETERIVPROC glTextureParameteriv = nullptr;
PFNGLGENERATETEXTUREMIPMAPPROC glGenerateTextureMipmap = nullptr;
PFNGLBINDTEXTUREUNITPROC glBindTextureUnit = nullptr;
PFNGLGETTEXTUREIMAGEPROC glGetTextureImage = nullptr;
PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glGetCompressedTextureImage = nullptr;
PFNGLGETTEXTURELEVELPARAMETERFVPROC glGetTextureLevelParameterfv = nullptr;
PFNGLGETTEXTURELEVELPARAMETERIVPROC glGetTextureLevelParameteriv = nullptr;
PFNGLGETTEXTUREPARAMETERFVPROC glGetTextureParameterfv = nullptr;
PFNGLGETTEXTUREPARAMETERIIVPROC glGetTextureParameterIiv = nullptr;
PFNGLGETTEXTUREPARAMETERIUIVPROC glGetTextureParameterIuiv = nullptr;
PFNGLGETTEXTUREPARAMETERIVPROC glGetTextureParameteriv = nullptr;
PFNGLCREATEVERTEXARRAYSPROC glCreateVertexArrays = nullptr;
PFNGLDISABLEVERTEXARRAYATTRIBPROC glDisableVertexArrayAttrib = nullptr;
PFNGLENABLEVERTEXARRAYATTRIBPROC glEnableVertexArrayAttrib = nullptr;
PFNGLVERTEXARRAYELEMENTBUFFERPROC glVertexArrayElementBuffer = nullptr;
PFNGLVERTEXARRAYVERTEXBUFFERPROC glVertexArrayVertexBuffer = nullptr;
PFNGLVERTEXARRAYVERTEXBUFFERSPROC glVertexArrayVertexBuffers = nullptr;
PFNGLVERTEXARRAYATTRIBBINDINGPROC glVertexArrayAttribBinding = nullptr;
PFNGLVERTEXARRAYATTRIBFORMATPROC glVertexArrayAttribFormat = nullptr;
PFNGLVERTEXARRAYATTRIBIFORMATPROC glVertexArrayAttribIFormat = nullptr;
PFNGLVERTEXARRAYATTRIBLFORMATPROC glVertexArrayAttribLFormat = nullptr;
PFNGLVERTEXARRAYBINDINGDIVISORPROC glVertexArrayBindingDivisor = nullptr;
PFNGLGETVERTEXARRAYIVPROC glGetVertexArrayiv = nullptr;
PFNGLGETVERTEXARRAYINDEXEDIVPROC glGetVertexArrayIndexediv = nullptr;
PFNGLGETVERTEXARRAYINDEXED64IVPROC glGetVertexArrayIndexed64iv = nullptr;
PFNGLCREATESAMPLERSPROC glCreateSamplers = nullptr;
PFNGLCREATEPROGRAMPIPELINESPROC glCreateProgramPipelines = nullptr;
PFNGLCREATEQUERIESPROC glCreateQueries = nullptr;
PFNGLGETQUERYBUFFEROBJECTI64VPROC glGetQueryBufferObjecti64v = nullptr;
PFNGLGETQUERYBUFFEROBJECTIVPROC glGetQueryBufferObjectiv = nullptr;
PFNGLGETQUERYBUFFEROBJECTUI64VPROC glGetQueryBufferObjectui64v = nullptr;
PFNGLGETQUERYBUFFEROBJECTUIVPROC glGetQueryBufferObjectuiv = nullptr;
PFNGLMEMORYBARRIERBYREGIONPROC glMemoryBarrierByRegion = nullptr;
PFNGLGETTEXTURESUBIMAGEPROC glGetTextureSubImage = nullptr;
PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glGetCompressedTextureSubImage = nullptr;
PFNGLGETGRAPHICSRESETSTATUSPROC glGetGraphicsResetStatus = nullptr;
PFNGLGETNCOMPRESSEDTEXIMAGEPROC glGetnCompressedTexImage = nullptr;
PFNGLGETNTEXIMAGEPROC glGetnTexImage = nullptr;
PFNGLGETNUNIFORMDVPROC glGetnUniformdv = nullptr;
PFNGLGETNUNIFORMFVPROC glGetnUniformfv = nullptr;
PFNGLGETNUNIFORMIVPROC glGetnUniformiv = nullptr;
PFNGLGETNUNIFORMUIVPROC glGetnUniformuiv = nullptr;
PFNGLREADNPIXELSPROC glReadnPixels = nullptr;
PFNGLGETNMAPDVPROC glGetnMapdv = nullptr;
PFNGLGETNMAPFVPROC glGetnMapfv = nullptr;
PFNGLGETNMAPIVPROC glGetnMapiv = nullptr;
PFNGLGETNPIXELMAPFVPROC glGetnPixelMapfv = nullptr;
PFNGLGETNPIXELMAPUIVPROC glGetnPixelMapuiv = nullptr;
PFNGLGETNPIXELMAPUSVPROC glGetnPixelMapusv = nullptr;
PFNGLGETNPOLYGONSTIPPLEPROC glGetnPolygonStipple = nullptr;
PFNGLGETNCOLORTABLEPROC glGetnColorTable = nullptr;
PFNGLGETNCONVOLUTIONFILTERPROC glGetnConvolutionFilter = nullptr;
PFNGLGETNSEPARABLEFILTERPROC glGetnSeparableFilter = nullptr;
PFNGLGETNHISTOGRAMPROC glGetnHistogram = nullptr;
PFNGLGETNMINMAXPROC glGetnMinmax = nullptr;
PFNGLTEXTUREBARRIERPROC glTextureBarrier = nullptr;
// GL_VERSION_4_6
PFNGLSPECIALIZESHADERPROC glSpecializeShader = nullptr;
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glMultiDrawArraysIndirectCount = nullptr;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glMultiDrawElementsIndirectCount = nullptr;
PFNGLPOLYGONOFFSETCLAMPPROC glPolygonOffsetClamp = nullptr;


void glfnlib_init_GL_VERSION_1_2(PFN_loadfunc load) {
	glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)get_gl_func_address_name("glDrawRangeElements");
	if (!glDrawRangeElements) { print_msg("glDrawRangeElements not loaded"); }
	glTexImage3D = (PFNGLTEXIMAGE3DPROC)get_gl_func_address_name("glTexImage3D");
	if (!glTexImage3D) { print_msg("glTexImage3D not loaded"); }
	glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)get_gl_func_address_name("glTexSubImage3D");
	if (!glTexSubImage3D) { print_msg("glTexSubImage3D not loaded"); }
	glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)get_gl_func_address_name("glCopyTexSubImage3D");
	if (!glCopyTexSubImage3D) { print_msg("glCopyTexSubImage3D not loaded"); }
}


void glfnlib_init_GL_VERSION_1_3(PFN_loadfunc load) {
	glActiveTexture = (PFNGLACTIVETEXTUREPROC)get_gl_func_address_name("glActiveTexture");
	if (!glActiveTexture) { print_msg("glActiveTexture not loaded"); }
	glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)get_gl_func_address_name("glSampleCoverage");
	if (!glSampleCoverage) { print_msg("glSampleCoverage not loaded"); }
	glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)get_gl_func_address_name("glCompressedTexImage3D");
	if (!glCompressedTexImage3D) { print_msg("glCompressedTexImage3D not loaded"); }
	glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)get_gl_func_address_name("glCompressedTexImage2D");
	if (!glCompressedTexImage2D) { print_msg("glCompressedTexImage2D not loaded"); }
	glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)get_gl_func_address_name("glCompressedTexImage1D");
	if (!glCompressedTexImage1D) { print_msg("glCompressedTexImage1D not loaded"); }
	glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)get_gl_func_address_name("glCompressedTexSubImage3D");
	if (!glCompressedTexSubImage3D) { print_msg("glCompressedTexSubImage3D not loaded"); }
	glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)get_gl_func_address_name("glCompressedTexSubImage2D");
	if (!glCompressedTexSubImage2D) { print_msg("glCompressedTexSubImage2D not loaded"); }
	glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)get_gl_func_address_name("glCompressedTexSubImage1D");
	if (!glCompressedTexSubImage1D) { print_msg("glCompressedTexSubImage1D not loaded"); }
	glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)get_gl_func_address_name("glGetCompressedTexImage");
	if (!glGetCompressedTexImage) { print_msg("glGetCompressedTexImage not loaded"); }
	glClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC)get_gl_func_address_name("glClientActiveTexture");
	if (!glClientActiveTexture) { print_msg("glClientActiveTexture not loaded"); }
	glMultiTexCoord1d = (PFNGLMULTITEXCOORD1DPROC)get_gl_func_address_name("glMultiTexCoord1d");
	if (!glMultiTexCoord1d) { print_msg("glMultiTexCoord1d not loaded"); }
	glMultiTexCoord1dv = (PFNGLMULTITEXCOORD1DVPROC)get_gl_func_address_name("glMultiTexCoord1dv");
	if (!glMultiTexCoord1dv) { print_msg("glMultiTexCoord1dv not loaded"); }
	glMultiTexCoord1f = (PFNGLMULTITEXCOORD1FPROC)get_gl_func_address_name("glMultiTexCoord1f");
	if (!glMultiTexCoord1f) { print_msg("glMultiTexCoord1f not loaded"); }
	glMultiTexCoord1fv = (PFNGLMULTITEXCOORD1FVPROC)get_gl_func_address_name("glMultiTexCoord1fv");
	if (!glMultiTexCoord1fv) { print_msg("glMultiTexCoord1fv not loaded"); }
	glMultiTexCoord1i = (PFNGLMULTITEXCOORD1IPROC)get_gl_func_address_name("glMultiTexCoord1i");
	if (!glMultiTexCoord1i) { print_msg("glMultiTexCoord1i not loaded"); }
	glMultiTexCoord1iv = (PFNGLMULTITEXCOORD1IVPROC)get_gl_func_address_name("glMultiTexCoord1iv");
	if (!glMultiTexCoord1iv) { print_msg("glMultiTexCoord1iv not loaded"); }
	glMultiTexCoord1s = (PFNGLMULTITEXCOORD1SPROC)get_gl_func_address_name("glMultiTexCoord1s");
	if (!glMultiTexCoord1s) { print_msg("glMultiTexCoord1s not loaded"); }
	glMultiTexCoord1sv = (PFNGLMULTITEXCOORD1SVPROC)get_gl_func_address_name("glMultiTexCoord1sv");
	if (!glMultiTexCoord1sv) { print_msg("glMultiTexCoord1sv not loaded"); }
	glMultiTexCoord2d = (PFNGLMULTITEXCOORD2DPROC)get_gl_func_address_name("glMultiTexCoord2d");
	if (!glMultiTexCoord2d) { print_msg("glMultiTexCoord2d not loaded"); }
	glMultiTexCoord2dv = (PFNGLMULTITEXCOORD2DVPROC)get_gl_func_address_name("glMultiTexCoord2dv");
	if (!glMultiTexCoord2dv) { print_msg("glMultiTexCoord2dv not loaded"); }
	glMultiTexCoord2f = (PFNGLMULTITEXCOORD2FPROC)get_gl_func_address_name("glMultiTexCoord2f");
	if (!glMultiTexCoord2f) { print_msg("glMultiTexCoord2f not loaded"); }
	glMultiTexCoord2fv = (PFNGLMULTITEXCOORD2FVPROC)get_gl_func_address_name("glMultiTexCoord2fv");
	if (!glMultiTexCoord2fv) { print_msg("glMultiTexCoord2fv not loaded"); }
	glMultiTexCoord2i = (PFNGLMULTITEXCOORD2IPROC)get_gl_func_address_name("glMultiTexCoord2i");
	if (!glMultiTexCoord2i) { print_msg("glMultiTexCoord2i not loaded"); }
	glMultiTexCoord2iv = (PFNGLMULTITEXCOORD2IVPROC)get_gl_func_address_name("glMultiTexCoord2iv");
	if (!glMultiTexCoord2iv) { print_msg("glMultiTexCoord2iv not loaded"); }
	glMultiTexCoord2s = (PFNGLMULTITEXCOORD2SPROC)get_gl_func_address_name("glMultiTexCoord2s");
	if (!glMultiTexCoord2s) { print_msg("glMultiTexCoord2s not loaded"); }
	glMultiTexCoord2sv = (PFNGLMULTITEXCOORD2SVPROC)get_gl_func_address_name("glMultiTexCoord2sv");
	if (!glMultiTexCoord2sv) { print_msg("glMultiTexCoord2sv not loaded"); }
	glMultiTexCoord3d = (PFNGLMULTITEXCOORD3DPROC)get_gl_func_address_name("glMultiTexCoord3d");
	if (!glMultiTexCoord3d) { print_msg("glMultiTexCoord3d not loaded"); }
	glMultiTexCoord3dv = (PFNGLMULTITEXCOORD3DVPROC)get_gl_func_address_name("glMultiTexCoord3dv");
	if (!glMultiTexCoord3dv) { print_msg("glMultiTexCoord3dv not loaded"); }
	glMultiTexCoord3f = (PFNGLMULTITEXCOORD3FPROC)get_gl_func_address_name("glMultiTexCoord3f");
	if (!glMultiTexCoord3f) { print_msg("glMultiTexCoord3f not loaded"); }
	glMultiTexCoord3fv = (PFNGLMULTITEXCOORD3FVPROC)get_gl_func_address_name("glMultiTexCoord3fv");
	if (!glMultiTexCoord3fv) { print_msg("glMultiTexCoord3fv not loaded"); }
	glMultiTexCoord3i = (PFNGLMULTITEXCOORD3IPROC)get_gl_func_address_name("glMultiTexCoord3i");
	if (!glMultiTexCoord3i) { print_msg("glMultiTexCoord3i not loaded"); }
	glMultiTexCoord3iv = (PFNGLMULTITEXCOORD3IVPROC)get_gl_func_address_name("glMultiTexCoord3iv");
	if (!glMultiTexCoord3iv) { print_msg("glMultiTexCoord3iv not loaded"); }
	glMultiTexCoord3s = (PFNGLMULTITEXCOORD3SPROC)get_gl_func_address_name("glMultiTexCoord3s");
	if (!glMultiTexCoord3s) { print_msg("glMultiTexCoord3s not loaded"); }
	glMultiTexCoord3sv = (PFNGLMULTITEXCOORD3SVPROC)get_gl_func_address_name("glMultiTexCoord3sv");
	if (!glMultiTexCoord3sv) { print_msg("glMultiTexCoord3sv not loaded"); }
	glMultiTexCoord4d = (PFNGLMULTITEXCOORD4DPROC)get_gl_func_address_name("glMultiTexCoord4d");
	if (!glMultiTexCoord4d) { print_msg("glMultiTexCoord4d not loaded"); }
	glMultiTexCoord4dv = (PFNGLMULTITEXCOORD4DVPROC)get_gl_func_address_name("glMultiTexCoord4dv");
	if (!glMultiTexCoord4dv) { print_msg("glMultiTexCoord4dv not loaded"); }
	glMultiTexCoord4f = (PFNGLMULTITEXCOORD4FPROC)get_gl_func_address_name("glMultiTexCoord4f");
	if (!glMultiTexCoord4f) { print_msg("glMultiTexCoord4f not loaded"); }
	glMultiTexCoord4fv = (PFNGLMULTITEXCOORD4FVPROC)get_gl_func_address_name("glMultiTexCoord4fv");
	if (!glMultiTexCoord4fv) { print_msg("glMultiTexCoord4fv not loaded"); }
	glMultiTexCoord4i = (PFNGLMULTITEXCOORD4IPROC)get_gl_func_address_name("glMultiTexCoord4i");
	if (!glMultiTexCoord4i) { print_msg("glMultiTexCoord4i not loaded"); }
	glMultiTexCoord4iv = (PFNGLMULTITEXCOORD4IVPROC)get_gl_func_address_name("glMultiTexCoord4iv");
	if (!glMultiTexCoord4iv) { print_msg("glMultiTexCoord4iv not loaded"); }
	glMultiTexCoord4s = (PFNGLMULTITEXCOORD4SPROC)get_gl_func_address_name("glMultiTexCoord4s");
	if (!glMultiTexCoord4s) { print_msg("glMultiTexCoord4s not loaded"); }
	glMultiTexCoord4sv = (PFNGLMULTITEXCOORD4SVPROC)get_gl_func_address_name("glMultiTexCoord4sv");
	if (!glMultiTexCoord4sv) { print_msg("glMultiTexCoord4sv not loaded"); }
	glLoadTransposeMatrixf = (PFNGLLOADTRANSPOSEMATRIXFPROC)get_gl_func_address_name("glLoadTransposeMatrixf");
	if (!glLoadTransposeMatrixf) { print_msg("glLoadTransposeMatrixf not loaded"); }
	glLoadTransposeMatrixd = (PFNGLLOADTRANSPOSEMATRIXDPROC)get_gl_func_address_name("glLoadTransposeMatrixd");
	if (!glLoadTransposeMatrixd) { print_msg("glLoadTransposeMatrixd not loaded"); }
	glMultTransposeMatrixf = (PFNGLMULTTRANSPOSEMATRIXFPROC)get_gl_func_address_name("glMultTransposeMatrixf");
	if (!glMultTransposeMatrixf) { print_msg("glMultTransposeMatrixf not loaded"); }
	glMultTransposeMatrixd = (PFNGLMULTTRANSPOSEMATRIXDPROC)get_gl_func_address_name("glMultTransposeMatrixd");
	if (!glMultTransposeMatrixd) { print_msg("glMultTransposeMatrixd not loaded"); }
}


void glfnlib_init_GL_VERSION_1_4(PFN_loadfunc load) {
	glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)get_gl_func_address_name("glBlendFuncSeparate");
	if (!glBlendFuncSeparate) { print_msg("glBlendFuncSeparate not loaded"); }
	glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)get_gl_func_address_name("glMultiDrawArrays");
	if (!glMultiDrawArrays) { print_msg("glMultiDrawArrays not loaded"); }
	glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)get_gl_func_address_name("glMultiDrawElements");
	if (!glMultiDrawElements) { print_msg("glMultiDrawElements not loaded"); }
	glPointParameterf = (PFNGLPOINTPARAMETERFPROC)get_gl_func_address_name("glPointParameterf");
	if (!glPointParameterf) { print_msg("glPointParameterf not loaded"); }
	glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)get_gl_func_address_name("glPointParameterfv");
	if (!glPointParameterfv) { print_msg("glPointParameterfv not loaded"); }
	glPointParameteri = (PFNGLPOINTPARAMETERIPROC)get_gl_func_address_name("glPointParameteri");
	if (!glPointParameteri) { print_msg("glPointParameteri not loaded"); }
	glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)get_gl_func_address_name("glPointParameteriv");
	if (!glPointParameteriv) { print_msg("glPointParameteriv not loaded"); }
	glFogCoordf = (PFNGLFOGCOORDFPROC)get_gl_func_address_name("glFogCoordf");
	if (!glFogCoordf) { print_msg("glFogCoordf not loaded"); }
	glFogCoordfv = (PFNGLFOGCOORDFVPROC)get_gl_func_address_name("glFogCoordfv");
	if (!glFogCoordfv) { print_msg("glFogCoordfv not loaded"); }
	glFogCoordd = (PFNGLFOGCOORDDPROC)get_gl_func_address_name("glFogCoordd");
	if (!glFogCoordd) { print_msg("glFogCoordd not loaded"); }
	glFogCoorddv = (PFNGLFOGCOORDDVPROC)get_gl_func_address_name("glFogCoorddv");
	if (!glFogCoorddv) { print_msg("glFogCoorddv not loaded"); }
	glFogCoordPointer = (PFNGLFOGCOORDPOINTERPROC)get_gl_func_address_name("glFogCoordPointer");
	if (!glFogCoordPointer) { print_msg("glFogCoordPointer not loaded"); }
	glSecondaryColor3b = (PFNGLSECONDARYCOLOR3BPROC)get_gl_func_address_name("glSecondaryColor3b");
	if (!glSecondaryColor3b) { print_msg("glSecondaryColor3b not loaded"); }
	glSecondaryColor3bv = (PFNGLSECONDARYCOLOR3BVPROC)get_gl_func_address_name("glSecondaryColor3bv");
	if (!glSecondaryColor3bv) { print_msg("glSecondaryColor3bv not loaded"); }
	glSecondaryColor3d = (PFNGLSECONDARYCOLOR3DPROC)get_gl_func_address_name("glSecondaryColor3d");
	if (!glSecondaryColor3d) { print_msg("glSecondaryColor3d not loaded"); }
	glSecondaryColor3dv = (PFNGLSECONDARYCOLOR3DVPROC)get_gl_func_address_name("glSecondaryColor3dv");
	if (!glSecondaryColor3dv) { print_msg("glSecondaryColor3dv not loaded"); }
	glSecondaryColor3f = (PFNGLSECONDARYCOLOR3FPROC)get_gl_func_address_name("glSecondaryColor3f");
	if (!glSecondaryColor3f) { print_msg("glSecondaryColor3f not loaded"); }
	glSecondaryColor3fv = (PFNGLSECONDARYCOLOR3FVPROC)get_gl_func_address_name("glSecondaryColor3fv");
	if (!glSecondaryColor3fv) { print_msg("glSecondaryColor3fv not loaded"); }
	glSecondaryColor3i = (PFNGLSECONDARYCOLOR3IPROC)get_gl_func_address_name("glSecondaryColor3i");
	if (!glSecondaryColor3i) { print_msg("glSecondaryColor3i not loaded"); }
	glSecondaryColor3iv = (PFNGLSECONDARYCOLOR3IVPROC)get_gl_func_address_name("glSecondaryColor3iv");
	if (!glSecondaryColor3iv) { print_msg("glSecondaryColor3iv not loaded"); }
	glSecondaryColor3s = (PFNGLSECONDARYCOLOR3SPROC)get_gl_func_address_name("glSecondaryColor3s");
	if (!glSecondaryColor3s) { print_msg("glSecondaryColor3s not loaded"); }
	glSecondaryColor3sv = (PFNGLSECONDARYCOLOR3SVPROC)get_gl_func_address_name("glSecondaryColor3sv");
	if (!glSecondaryColor3sv) { print_msg("glSecondaryColor3sv not loaded"); }
	glSecondaryColor3ub = (PFNGLSECONDARYCOLOR3UBPROC)get_gl_func_address_name("glSecondaryColor3ub");
	if (!glSecondaryColor3ub) { print_msg("glSecondaryColor3ub not loaded"); }
	glSecondaryColor3ubv = (PFNGLSECONDARYCOLOR3UBVPROC)get_gl_func_address_name("glSecondaryColor3ubv");
	if (!glSecondaryColor3ubv) { print_msg("glSecondaryColor3ubv not loaded"); }
	glSecondaryColor3ui = (PFNGLSECONDARYCOLOR3UIPROC)get_gl_func_address_name("glSecondaryColor3ui");
	if (!glSecondaryColor3ui) { print_msg("glSecondaryColor3ui not loaded"); }
	glSecondaryColor3uiv = (PFNGLSECONDARYCOLOR3UIVPROC)get_gl_func_address_name("glSecondaryColor3uiv");
	if (!glSecondaryColor3uiv) { print_msg("glSecondaryColor3uiv not loaded"); }
	glSecondaryColor3us = (PFNGLSECONDARYCOLOR3USPROC)get_gl_func_address_name("glSecondaryColor3us");
	if (!glSecondaryColor3us) { print_msg("glSecondaryColor3us not loaded"); }
	glSecondaryColor3usv = (PFNGLSECONDARYCOLOR3USVPROC)get_gl_func_address_name("glSecondaryColor3usv");
	if (!glSecondaryColor3usv) { print_msg("glSecondaryColor3usv not loaded"); }
	glSecondaryColorPointer = (PFNGLSECONDARYCOLORPOINTERPROC)get_gl_func_address_name("glSecondaryColorPointer");
	if (!glSecondaryColorPointer) { print_msg("glSecondaryColorPointer not loaded"); }
	glWindowPos2d = (PFNGLWINDOWPOS2DPROC)get_gl_func_address_name("glWindowPos2d");
	if (!glWindowPos2d) { print_msg("glWindowPos2d not loaded"); }
	glWindowPos2dv = (PFNGLWINDOWPOS2DVPROC)get_gl_func_address_name("glWindowPos2dv");
	if (!glWindowPos2dv) { print_msg("glWindowPos2dv not loaded"); }
	glWindowPos2f = (PFNGLWINDOWPOS2FPROC)get_gl_func_address_name("glWindowPos2f");
	if (!glWindowPos2f) { print_msg("glWindowPos2f not loaded"); }
	glWindowPos2fv = (PFNGLWINDOWPOS2FVPROC)get_gl_func_address_name("glWindowPos2fv");
	if (!glWindowPos2fv) { print_msg("glWindowPos2fv not loaded"); }
	glWindowPos2i = (PFNGLWINDOWPOS2IPROC)get_gl_func_address_name("glWindowPos2i");
	if (!glWindowPos2i) { print_msg("glWindowPos2i not loaded"); }
	glWindowPos2iv = (PFNGLWINDOWPOS2IVPROC)get_gl_func_address_name("glWindowPos2iv");
	if (!glWindowPos2iv) { print_msg("glWindowPos2iv not loaded"); }
	glWindowPos2s = (PFNGLWINDOWPOS2SPROC)get_gl_func_address_name("glWindowPos2s");
	if (!glWindowPos2s) { print_msg("glWindowPos2s not loaded"); }
	glWindowPos2sv = (PFNGLWINDOWPOS2SVPROC)get_gl_func_address_name("glWindowPos2sv");
	if (!glWindowPos2sv) { print_msg("glWindowPos2sv not loaded"); }
	glWindowPos3d = (PFNGLWINDOWPOS3DPROC)get_gl_func_address_name("glWindowPos3d");
	if (!glWindowPos3d) { print_msg("glWindowPos3d not loaded"); }
	glWindowPos3dv = (PFNGLWINDOWPOS3DVPROC)get_gl_func_address_name("glWindowPos3dv");
	if (!glWindowPos3dv) { print_msg("glWindowPos3dv not loaded"); }
	glWindowPos3f = (PFNGLWINDOWPOS3FPROC)get_gl_func_address_name("glWindowPos3f");
	if (!glWindowPos3f) { print_msg("glWindowPos3f not loaded"); }
	glWindowPos3fv = (PFNGLWINDOWPOS3FVPROC)get_gl_func_address_name("glWindowPos3fv");
	if (!glWindowPos3fv) { print_msg("glWindowPos3fv not loaded"); }
	glWindowPos3i = (PFNGLWINDOWPOS3IPROC)get_gl_func_address_name("glWindowPos3i");
	if (!glWindowPos3i) { print_msg("glWindowPos3i not loaded"); }
	glWindowPos3iv = (PFNGLWINDOWPOS3IVPROC)get_gl_func_address_name("glWindowPos3iv");
	if (!glWindowPos3iv) { print_msg("glWindowPos3iv not loaded"); }
	glWindowPos3s = (PFNGLWINDOWPOS3SPROC)get_gl_func_address_name("glWindowPos3s");
	if (!glWindowPos3s) { print_msg("glWindowPos3s not loaded"); }
	glWindowPos3sv = (PFNGLWINDOWPOS3SVPROC)get_gl_func_address_name("glWindowPos3sv");
	if (!glWindowPos3sv) { print_msg("glWindowPos3sv not loaded"); }
	glBlendColor = (PFNGLBLENDCOLORPROC)get_gl_func_address_name("glBlendColor");
	if (!glBlendColor) { print_msg("glBlendColor not loaded"); }
	glBlendEquation = (PFNGLBLENDEQUATIONPROC)get_gl_func_address_name("glBlendEquation");
	if (!glBlendEquation) { print_msg("glBlendEquation not loaded"); }
}


void glfnlib_init_GL_VERSION_1_5(PFN_loadfunc load) {
	glGenQueries = (PFNGLGENQUERIESPROC)get_gl_func_address_name("glGenQueries");
	if (!glGenQueries) { print_msg("glGenQueries not loaded"); }
	glDeleteQueries = (PFNGLDELETEQUERIESPROC)get_gl_func_address_name("glDeleteQueries");
	if (!glDeleteQueries) { print_msg("glDeleteQueries not loaded"); }
	glIsQuery = (PFNGLISQUERYPROC)get_gl_func_address_name("glIsQuery");
	if (!glIsQuery) { print_msg("glIsQuery not loaded"); }
	glBeginQuery = (PFNGLBEGINQUERYPROC)get_gl_func_address_name("glBeginQuery");
	if (!glBeginQuery) { print_msg("glBeginQuery not loaded"); }
	glEndQuery = (PFNGLENDQUERYPROC)get_gl_func_address_name("glEndQuery");
	if (!glEndQuery) { print_msg("glEndQuery not loaded"); }
	glGetQueryiv = (PFNGLGETQUERYIVPROC)get_gl_func_address_name("glGetQueryiv");
	if (!glGetQueryiv) { print_msg("glGetQueryiv not loaded"); }
	glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)get_gl_func_address_name("glGetQueryObjectiv");
	if (!glGetQueryObjectiv) { print_msg("glGetQueryObjectiv not loaded"); }
	glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)get_gl_func_address_name("glGetQueryObjectuiv");
	if (!glGetQueryObjectuiv) { print_msg("glGetQueryObjectuiv not loaded"); }
	glBindBuffer = (PFNGLBINDBUFFERPROC)get_gl_func_address_name("glBindBuffer");
	if (!glBindBuffer) { print_msg("glBindBuffer not loaded"); }
	glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)get_gl_func_address_name("glDeleteBuffers");
	if (!glDeleteBuffers) { print_msg("glDeleteBuffers not loaded"); }
	glGenBuffers = (PFNGLGENBUFFERSPROC)get_gl_func_address_name("glGenBuffers");
	if (!glGenBuffers) { print_msg("glGenBuffers not loaded"); }
	glIsBuffer = (PFNGLISBUFFERPROC)get_gl_func_address_name("glIsBuffer");
	if (!glIsBuffer) { print_msg("glIsBuffer not loaded"); }
	glBufferData = (PFNGLBUFFERDATAPROC)get_gl_func_address_name("glBufferData");
	if (!glBufferData) { print_msg("glBufferData not loaded"); }
	glBufferSubData = (PFNGLBUFFERSUBDATAPROC)get_gl_func_address_name("glBufferSubData");
	if (!glBufferSubData) { print_msg("glBufferSubData not loaded"); }
	glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)get_gl_func_address_name("glGetBufferSubData");
	if (!glGetBufferSubData) { print_msg("glGetBufferSubData not loaded"); }
	glMapBuffer = (PFNGLMAPBUFFERPROC)get_gl_func_address_name("glMapBuffer");
	if (!glMapBuffer) { print_msg("glMapBuffer not loaded"); }
	glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)get_gl_func_address_name("glUnmapBuffer");
	if (!glUnmapBuffer) { print_msg("glUnmapBuffer not loaded"); }
	glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetBufferParameteriv");
	if (!glGetBufferParameteriv) { print_msg("glGetBufferParameteriv not loaded"); }
	glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)get_gl_func_address_name("glGetBufferPointerv");
	if (!glGetBufferPointerv) { print_msg("glGetBufferPointerv not loaded"); }
}


void glfnlib_init_GL_VERSION_2_0(PFN_loadfunc load) {
	glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)get_gl_func_address_name("glBlendEquationSeparate");
	if (!glBlendEquationSeparate) { print_msg("glBlendEquationSeparate not loaded"); }
	glDrawBuffers = (PFNGLDRAWBUFFERSPROC)get_gl_func_address_name("glDrawBuffers");
	if (!glDrawBuffers) { print_msg("glDrawBuffers not loaded"); }
	glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)get_gl_func_address_name("glStencilOpSeparate");
	if (!glStencilOpSeparate) { print_msg("glStencilOpSeparate not loaded"); }
	glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)get_gl_func_address_name("glStencilFuncSeparate");
	if (!glStencilFuncSeparate) { print_msg("glStencilFuncSeparate not loaded"); }
	glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)get_gl_func_address_name("glStencilMaskSeparate");
	if (!glStencilMaskSeparate) { print_msg("glStencilMaskSeparate not loaded"); }
	glAttachShader = (PFNGLATTACHSHADERPROC)get_gl_func_address_name("glAttachShader");
	if (!glAttachShader) { print_msg("glAttachShader not loaded"); }
	glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)get_gl_func_address_name("glBindAttribLocation");
	if (!glBindAttribLocation) { print_msg("glBindAttribLocation not loaded"); }
	glCompileShader = (PFNGLCOMPILESHADERPROC)get_gl_func_address_name("glCompileShader");
	if (!glCompileShader) { print_msg("glCompileShader not loaded"); }
	glCreateProgram = (PFNGLCREATEPROGRAMPROC)get_gl_func_address_name("glCreateProgram");
	if (!glCreateProgram) { print_msg("glCreateProgram not loaded"); }
	glCreateShader = (PFNGLCREATESHADERPROC)get_gl_func_address_name("glCreateShader");
	if (!glCreateShader) { print_msg("glCreateShader not loaded"); }
	glDeleteProgram = (PFNGLDELETEPROGRAMPROC)get_gl_func_address_name("glDeleteProgram");
	if (!glDeleteProgram) { print_msg("glDeleteProgram not loaded"); }
	glDeleteShader = (PFNGLDELETESHADERPROC)get_gl_func_address_name("glDeleteShader");
	if (!glDeleteShader) { print_msg("glDeleteShader not loaded"); }
	glDetachShader = (PFNGLDETACHSHADERPROC)get_gl_func_address_name("glDetachShader");
	if (!glDetachShader) { print_msg("glDetachShader not loaded"); }
	glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)get_gl_func_address_name("glDisableVertexAttribArray");
	if (!glDisableVertexAttribArray) { print_msg("glDisableVertexAttribArray not loaded"); }
	glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)get_gl_func_address_name("glEnableVertexAttribArray");
	if (!glEnableVertexAttribArray) { print_msg("glEnableVertexAttribArray not loaded"); }
	glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)get_gl_func_address_name("glGetActiveAttrib");
	if (!glGetActiveAttrib) { print_msg("glGetActiveAttrib not loaded"); }
	glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)get_gl_func_address_name("glGetActiveUniform");
	if (!glGetActiveUniform) { print_msg("glGetActiveUniform not loaded"); }
	glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)get_gl_func_address_name("glGetAttachedShaders");
	if (!glGetAttachedShaders) { print_msg("glGetAttachedShaders not loaded"); }
	glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)get_gl_func_address_name("glGetAttribLocation");
	if (!glGetAttribLocation) { print_msg("glGetAttribLocation not loaded"); }
	glGetProgramiv = (PFNGLGETPROGRAMIVPROC)get_gl_func_address_name("glGetProgramiv");
	if (!glGetProgramiv) { print_msg("glGetProgramiv not loaded"); }
	glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)get_gl_func_address_name("glGetProgramInfoLog");
	if (!glGetProgramInfoLog) { print_msg("glGetProgramInfoLog not loaded"); }
	glGetShaderiv = (PFNGLGETSHADERIVPROC)get_gl_func_address_name("glGetShaderiv");
	if (!glGetShaderiv) { print_msg("glGetShaderiv not loaded"); }
	glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)get_gl_func_address_name("glGetShaderInfoLog");
	if (!glGetShaderInfoLog) { print_msg("glGetShaderInfoLog not loaded"); }
	glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)get_gl_func_address_name("glGetShaderSource");
	if (!glGetShaderSource) { print_msg("glGetShaderSource not loaded"); }
	glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)get_gl_func_address_name("glGetUniformLocation");
	if (!glGetUniformLocation) { print_msg("glGetUniformLocation not loaded"); }
	glGetUniformfv = (PFNGLGETUNIFORMFVPROC)get_gl_func_address_name("glGetUniformfv");
	if (!glGetUniformfv) { print_msg("glGetUniformfv not loaded"); }
	glGetUniformiv = (PFNGLGETUNIFORMIVPROC)get_gl_func_address_name("glGetUniformiv");
	if (!glGetUniformiv) { print_msg("glGetUniformiv not loaded"); }
	glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)get_gl_func_address_name("glGetVertexAttribdv");
	if (!glGetVertexAttribdv) { print_msg("glGetVertexAttribdv not loaded"); }
	glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)get_gl_func_address_name("glGetVertexAttribfv");
	if (!glGetVertexAttribfv) { print_msg("glGetVertexAttribfv not loaded"); }
	glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)get_gl_func_address_name("glGetVertexAttribiv");
	if (!glGetVertexAttribiv) { print_msg("glGetVertexAttribiv not loaded"); }
	glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)get_gl_func_address_name("glGetVertexAttribPointerv");
	if (!glGetVertexAttribPointerv) { print_msg("glGetVertexAttribPointerv not loaded"); }
	glIsProgram = (PFNGLISPROGRAMPROC)get_gl_func_address_name("glIsProgram");
	if (!glIsProgram) { print_msg("glIsProgram not loaded"); }
	glIsShader = (PFNGLISSHADERPROC)get_gl_func_address_name("glIsShader");
	if (!glIsShader) { print_msg("glIsShader not loaded"); }
	glLinkProgram = (PFNGLLINKPROGRAMPROC)get_gl_func_address_name("glLinkProgram");
	if (!glLinkProgram) { print_msg("glLinkProgram not loaded"); }
	glShaderSource = (PFNGLSHADERSOURCEPROC)get_gl_func_address_name("glShaderSource");
	if (!glShaderSource) { print_msg("glShaderSource not loaded"); }
	glUseProgram = (PFNGLUSEPROGRAMPROC)get_gl_func_address_name("glUseProgram");
	if (!glUseProgram) { print_msg("glUseProgram not loaded"); }
	glUniform1f = (PFNGLUNIFORM1FPROC)get_gl_func_address_name("glUniform1f");
	if (!glUniform1f) { print_msg("glUniform1f not loaded"); }
	glUniform2f = (PFNGLUNIFORM2FPROC)get_gl_func_address_name("glUniform2f");
	if (!glUniform2f) { print_msg("glUniform2f not loaded"); }
	glUniform3f = (PFNGLUNIFORM3FPROC)get_gl_func_address_name("glUniform3f");
	if (!glUniform3f) { print_msg("glUniform3f not loaded"); }
	glUniform4f = (PFNGLUNIFORM4FPROC)get_gl_func_address_name("glUniform4f");
	if (!glUniform4f) { print_msg("glUniform4f not loaded"); }
	glUniform1i = (PFNGLUNIFORM1IPROC)get_gl_func_address_name("glUniform1i");
	if (!glUniform1i) { print_msg("glUniform1i not loaded"); }
	glUniform2i = (PFNGLUNIFORM2IPROC)get_gl_func_address_name("glUniform2i");
	if (!glUniform2i) { print_msg("glUniform2i not loaded"); }
	glUniform3i = (PFNGLUNIFORM3IPROC)get_gl_func_address_name("glUniform3i");
	if (!glUniform3i) { print_msg("glUniform3i not loaded"); }
	glUniform4i = (PFNGLUNIFORM4IPROC)get_gl_func_address_name("glUniform4i");
	if (!glUniform4i) { print_msg("glUniform4i not loaded"); }
	glUniform1fv = (PFNGLUNIFORM1FVPROC)get_gl_func_address_name("glUniform1fv");
	if (!glUniform1fv) { print_msg("glUniform1fv not loaded"); }
	glUniform2fv = (PFNGLUNIFORM2FVPROC)get_gl_func_address_name("glUniform2fv");
	if (!glUniform2fv) { print_msg("glUniform2fv not loaded"); }
	glUniform3fv = (PFNGLUNIFORM3FVPROC)get_gl_func_address_name("glUniform3fv");
	if (!glUniform3fv) { print_msg("glUniform3fv not loaded"); }
	glUniform4fv = (PFNGLUNIFORM4FVPROC)get_gl_func_address_name("glUniform4fv");
	if (!glUniform4fv) { print_msg("glUniform4fv not loaded"); }
	glUniform1iv = (PFNGLUNIFORM1IVPROC)get_gl_func_address_name("glUniform1iv");
	if (!glUniform1iv) { print_msg("glUniform1iv not loaded"); }
	glUniform2iv = (PFNGLUNIFORM2IVPROC)get_gl_func_address_name("glUniform2iv");
	if (!glUniform2iv) { print_msg("glUniform2iv not loaded"); }
	glUniform3iv = (PFNGLUNIFORM3IVPROC)get_gl_func_address_name("glUniform3iv");
	if (!glUniform3iv) { print_msg("glUniform3iv not loaded"); }
	glUniform4iv = (PFNGLUNIFORM4IVPROC)get_gl_func_address_name("glUniform4iv");
	if (!glUniform4iv) { print_msg("glUniform4iv not loaded"); }
	glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)get_gl_func_address_name("glUniformMatrix2fv");
	if (!glUniformMatrix2fv) { print_msg("glUniformMatrix2fv not loaded"); }
	glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)get_gl_func_address_name("glUniformMatrix3fv");
	if (!glUniformMatrix3fv) { print_msg("glUniformMatrix3fv not loaded"); }
	glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)get_gl_func_address_name("glUniformMatrix4fv");
	if (!glUniformMatrix4fv) { print_msg("glUniformMatrix4fv not loaded"); }
	glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)get_gl_func_address_name("glValidateProgram");
	if (!glValidateProgram) { print_msg("glValidateProgram not loaded"); }
	glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)get_gl_func_address_name("glVertexAttrib1d");
	if (!glVertexAttrib1d) { print_msg("glVertexAttrib1d not loaded"); }
	glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)get_gl_func_address_name("glVertexAttrib1dv");
	if (!glVertexAttrib1dv) { print_msg("glVertexAttrib1dv not loaded"); }
	glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)get_gl_func_address_name("glVertexAttrib1f");
	if (!glVertexAttrib1f) { print_msg("glVertexAttrib1f not loaded"); }
	glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)get_gl_func_address_name("glVertexAttrib1fv");
	if (!glVertexAttrib1fv) { print_msg("glVertexAttrib1fv not loaded"); }
	glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)get_gl_func_address_name("glVertexAttrib1s");
	if (!glVertexAttrib1s) { print_msg("glVertexAttrib1s not loaded"); }
	glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)get_gl_func_address_name("glVertexAttrib1sv");
	if (!glVertexAttrib1sv) { print_msg("glVertexAttrib1sv not loaded"); }
	glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)get_gl_func_address_name("glVertexAttrib2d");
	if (!glVertexAttrib2d) { print_msg("glVertexAttrib2d not loaded"); }
	glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)get_gl_func_address_name("glVertexAttrib2dv");
	if (!glVertexAttrib2dv) { print_msg("glVertexAttrib2dv not loaded"); }
	glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)get_gl_func_address_name("glVertexAttrib2f");
	if (!glVertexAttrib2f) { print_msg("glVertexAttrib2f not loaded"); }
	glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)get_gl_func_address_name("glVertexAttrib2fv");
	if (!glVertexAttrib2fv) { print_msg("glVertexAttrib2fv not loaded"); }
	glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)get_gl_func_address_name("glVertexAttrib2s");
	if (!glVertexAttrib2s) { print_msg("glVertexAttrib2s not loaded"); }
	glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)get_gl_func_address_name("glVertexAttrib2sv");
	if (!glVertexAttrib2sv) { print_msg("glVertexAttrib2sv not loaded"); }
	glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)get_gl_func_address_name("glVertexAttrib3d");
	if (!glVertexAttrib3d) { print_msg("glVertexAttrib3d not loaded"); }
	glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)get_gl_func_address_name("glVertexAttrib3dv");
	if (!glVertexAttrib3dv) { print_msg("glVertexAttrib3dv not loaded"); }
	glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)get_gl_func_address_name("glVertexAttrib3f");
	if (!glVertexAttrib3f) { print_msg("glVertexAttrib3f not loaded"); }
	glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)get_gl_func_address_name("glVertexAttrib3fv");
	if (!glVertexAttrib3fv) { print_msg("glVertexAttrib3fv not loaded"); }
	glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)get_gl_func_address_name("glVertexAttrib3s");
	if (!glVertexAttrib3s) { print_msg("glVertexAttrib3s not loaded"); }
	glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)get_gl_func_address_name("glVertexAttrib3sv");
	if (!glVertexAttrib3sv) { print_msg("glVertexAttrib3sv not loaded"); }
	glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)get_gl_func_address_name("glVertexAttrib4Nbv");
	if (!glVertexAttrib4Nbv) { print_msg("glVertexAttrib4Nbv not loaded"); }
	glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)get_gl_func_address_name("glVertexAttrib4Niv");
	if (!glVertexAttrib4Niv) { print_msg("glVertexAttrib4Niv not loaded"); }
	glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)get_gl_func_address_name("glVertexAttrib4Nsv");
	if (!glVertexAttrib4Nsv) { print_msg("glVertexAttrib4Nsv not loaded"); }
	glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)get_gl_func_address_name("glVertexAttrib4Nub");
	if (!glVertexAttrib4Nub) { print_msg("glVertexAttrib4Nub not loaded"); }
	glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)get_gl_func_address_name("glVertexAttrib4Nubv");
	if (!glVertexAttrib4Nubv) { print_msg("glVertexAttrib4Nubv not loaded"); }
	glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)get_gl_func_address_name("glVertexAttrib4Nuiv");
	if (!glVertexAttrib4Nuiv) { print_msg("glVertexAttrib4Nuiv not loaded"); }
	glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)get_gl_func_address_name("glVertexAttrib4Nusv");
	if (!glVertexAttrib4Nusv) { print_msg("glVertexAttrib4Nusv not loaded"); }
	glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)get_gl_func_address_name("glVertexAttrib4bv");
	if (!glVertexAttrib4bv) { print_msg("glVertexAttrib4bv not loaded"); }
	glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)get_gl_func_address_name("glVertexAttrib4d");
	if (!glVertexAttrib4d) { print_msg("glVertexAttrib4d not loaded"); }
	glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)get_gl_func_address_name("glVertexAttrib4dv");
	if (!glVertexAttrib4dv) { print_msg("glVertexAttrib4dv not loaded"); }
	glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)get_gl_func_address_name("glVertexAttrib4f");
	if (!glVertexAttrib4f) { print_msg("glVertexAttrib4f not loaded"); }
	glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)get_gl_func_address_name("glVertexAttrib4fv");
	if (!glVertexAttrib4fv) { print_msg("glVertexAttrib4fv not loaded"); }
	glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)get_gl_func_address_name("glVertexAttrib4iv");
	if (!glVertexAttrib4iv) { print_msg("glVertexAttrib4iv not loaded"); }
	glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)get_gl_func_address_name("glVertexAttrib4s");
	if (!glVertexAttrib4s) { print_msg("glVertexAttrib4s not loaded"); }
	glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)get_gl_func_address_name("glVertexAttrib4sv");
	if (!glVertexAttrib4sv) { print_msg("glVertexAttrib4sv not loaded"); }
	glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)get_gl_func_address_name("glVertexAttrib4ubv");
	if (!glVertexAttrib4ubv) { print_msg("glVertexAttrib4ubv not loaded"); }
	glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)get_gl_func_address_name("glVertexAttrib4uiv");
	if (!glVertexAttrib4uiv) { print_msg("glVertexAttrib4uiv not loaded"); }
	glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)get_gl_func_address_name("glVertexAttrib4usv");
	if (!glVertexAttrib4usv) { print_msg("glVertexAttrib4usv not loaded"); }
	glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)get_gl_func_address_name("glVertexAttribPointer");
	if (!glVertexAttribPointer) { print_msg("glVertexAttribPointer not loaded"); }
}


void glfnlib_init_GL_VERSION_2_1(PFN_loadfunc load) {
	glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)get_gl_func_address_name("glUniformMatrix2x3fv");
	if (!glUniformMatrix2x3fv) { print_msg("glUniformMatrix2x3fv not loaded"); }
	glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)get_gl_func_address_name("glUniformMatrix3x2fv");
	if (!glUniformMatrix3x2fv) { print_msg("glUniformMatrix3x2fv not loaded"); }
	glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)get_gl_func_address_name("glUniformMatrix2x4fv");
	if (!glUniformMatrix2x4fv) { print_msg("glUniformMatrix2x4fv not loaded"); }
	glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)get_gl_func_address_name("glUniformMatrix4x2fv");
	if (!glUniformMatrix4x2fv) { print_msg("glUniformMatrix4x2fv not loaded"); }
	glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)get_gl_func_address_name("glUniformMatrix3x4fv");
	if (!glUniformMatrix3x4fv) { print_msg("glUniformMatrix3x4fv not loaded"); }
	glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)get_gl_func_address_name("glUniformMatrix4x3fv");
	if (!glUniformMatrix4x3fv) { print_msg("glUniformMatrix4x3fv not loaded"); }
}


void glfnlib_init_GL_VERSION_3_0(PFN_loadfunc load) {
	glColorMaski = (PFNGLCOLORMASKIPROC)get_gl_func_address_name("glColorMaski");
	if (!glColorMaski) { print_msg("glColorMaski not loaded"); }
	glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)get_gl_func_address_name("glGetBooleani_v");
	if (!glGetBooleani_v) { print_msg("glGetBooleani_v not loaded"); }
	glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)get_gl_func_address_name("glGetIntegeri_v");
	if (!glGetIntegeri_v) { print_msg("glGetIntegeri_v not loaded"); }
	glEnablei = (PFNGLENABLEIPROC)get_gl_func_address_name("glEnablei");
	if (!glEnablei) { print_msg("glEnablei not loaded"); }
	glDisablei = (PFNGLDISABLEIPROC)get_gl_func_address_name("glDisablei");
	if (!glDisablei) { print_msg("glDisablei not loaded"); }
	glIsEnabledi = (PFNGLISENABLEDIPROC)get_gl_func_address_name("glIsEnabledi");
	if (!glIsEnabledi) { print_msg("glIsEnabledi not loaded"); }
	glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glBeginTransformFeedback");
	if (!glBeginTransformFeedback) { print_msg("glBeginTransformFeedback not loaded"); }
	glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glEndTransformFeedback");
	if (!glEndTransformFeedback) { print_msg("glEndTransformFeedback not loaded"); }
	glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)get_gl_func_address_name("glBindBufferRange");
	if (!glBindBufferRange) { print_msg("glBindBufferRange not loaded"); }
	glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)get_gl_func_address_name("glBindBufferBase");
	if (!glBindBufferBase) { print_msg("glBindBufferBase not loaded"); }
	glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)get_gl_func_address_name("glTransformFeedbackVaryings");
	if (!glTransformFeedbackVaryings) { print_msg("glTransformFeedbackVaryings not loaded"); }
	glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)get_gl_func_address_name("glGetTransformFeedbackVarying");
	if (!glGetTransformFeedbackVarying) { print_msg("glGetTransformFeedbackVarying not loaded"); }
	glClampColor = (PFNGLCLAMPCOLORPROC)get_gl_func_address_name("glClampColor");
	if (!glClampColor) { print_msg("glClampColor not loaded"); }
	glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)get_gl_func_address_name("glBeginConditionalRender");
	if (!glBeginConditionalRender) { print_msg("glBeginConditionalRender not loaded"); }
	glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)get_gl_func_address_name("glEndConditionalRender");
	if (!glEndConditionalRender) { print_msg("glEndConditionalRender not loaded"); }
	glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)get_gl_func_address_name("glVertexAttribIPointer");
	if (!glVertexAttribIPointer) { print_msg("glVertexAttribIPointer not loaded"); }
	glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)get_gl_func_address_name("glGetVertexAttribIiv");
	if (!glGetVertexAttribIiv) { print_msg("glGetVertexAttribIiv not loaded"); }
	glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)get_gl_func_address_name("glGetVertexAttribIuiv");
	if (!glGetVertexAttribIuiv) { print_msg("glGetVertexAttribIuiv not loaded"); }
	glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)get_gl_func_address_name("glVertexAttribI1i");
	if (!glVertexAttribI1i) { print_msg("glVertexAttribI1i not loaded"); }
	glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)get_gl_func_address_name("glVertexAttribI2i");
	if (!glVertexAttribI2i) { print_msg("glVertexAttribI2i not loaded"); }
	glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)get_gl_func_address_name("glVertexAttribI3i");
	if (!glVertexAttribI3i) { print_msg("glVertexAttribI3i not loaded"); }
	glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)get_gl_func_address_name("glVertexAttribI4i");
	if (!glVertexAttribI4i) { print_msg("glVertexAttribI4i not loaded"); }
	glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)get_gl_func_address_name("glVertexAttribI1ui");
	if (!glVertexAttribI1ui) { print_msg("glVertexAttribI1ui not loaded"); }
	glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)get_gl_func_address_name("glVertexAttribI2ui");
	if (!glVertexAttribI2ui) { print_msg("glVertexAttribI2ui not loaded"); }
	glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)get_gl_func_address_name("glVertexAttribI3ui");
	if (!glVertexAttribI3ui) { print_msg("glVertexAttribI3ui not loaded"); }
	glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)get_gl_func_address_name("glVertexAttribI4ui");
	if (!glVertexAttribI4ui) { print_msg("glVertexAttribI4ui not loaded"); }
	glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)get_gl_func_address_name("glVertexAttribI1iv");
	if (!glVertexAttribI1iv) { print_msg("glVertexAttribI1iv not loaded"); }
	glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)get_gl_func_address_name("glVertexAttribI2iv");
	if (!glVertexAttribI2iv) { print_msg("glVertexAttribI2iv not loaded"); }
	glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)get_gl_func_address_name("glVertexAttribI3iv");
	if (!glVertexAttribI3iv) { print_msg("glVertexAttribI3iv not loaded"); }
	glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)get_gl_func_address_name("glVertexAttribI4iv");
	if (!glVertexAttribI4iv) { print_msg("glVertexAttribI4iv not loaded"); }
	glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)get_gl_func_address_name("glVertexAttribI1uiv");
	if (!glVertexAttribI1uiv) { print_msg("glVertexAttribI1uiv not loaded"); }
	glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)get_gl_func_address_name("glVertexAttribI2uiv");
	if (!glVertexAttribI2uiv) { print_msg("glVertexAttribI2uiv not loaded"); }
	glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)get_gl_func_address_name("glVertexAttribI3uiv");
	if (!glVertexAttribI3uiv) { print_msg("glVertexAttribI3uiv not loaded"); }
	glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)get_gl_func_address_name("glVertexAttribI4uiv");
	if (!glVertexAttribI4uiv) { print_msg("glVertexAttribI4uiv not loaded"); }
	glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)get_gl_func_address_name("glVertexAttribI4bv");
	if (!glVertexAttribI4bv) { print_msg("glVertexAttribI4bv not loaded"); }
	glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)get_gl_func_address_name("glVertexAttribI4sv");
	if (!glVertexAttribI4sv) { print_msg("glVertexAttribI4sv not loaded"); }
	glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)get_gl_func_address_name("glVertexAttribI4ubv");
	if (!glVertexAttribI4ubv) { print_msg("glVertexAttribI4ubv not loaded"); }
	glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)get_gl_func_address_name("glVertexAttribI4usv");
	if (!glVertexAttribI4usv) { print_msg("glVertexAttribI4usv not loaded"); }
	glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)get_gl_func_address_name("glGetUniformuiv");
	if (!glGetUniformuiv) { print_msg("glGetUniformuiv not loaded"); }
	glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)get_gl_func_address_name("glBindFragDataLocation");
	if (!glBindFragDataLocation) { print_msg("glBindFragDataLocation not loaded"); }
	glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)get_gl_func_address_name("glGetFragDataLocation");
	if (!glGetFragDataLocation) { print_msg("glGetFragDataLocation not loaded"); }
	glUniform1ui = (PFNGLUNIFORM1UIPROC)get_gl_func_address_name("glUniform1ui");
	if (!glUniform1ui) { print_msg("glUniform1ui not loaded"); }
	glUniform2ui = (PFNGLUNIFORM2UIPROC)get_gl_func_address_name("glUniform2ui");
	if (!glUniform2ui) { print_msg("glUniform2ui not loaded"); }
	glUniform3ui = (PFNGLUNIFORM3UIPROC)get_gl_func_address_name("glUniform3ui");
	if (!glUniform3ui) { print_msg("glUniform3ui not loaded"); }
	glUniform4ui = (PFNGLUNIFORM4UIPROC)get_gl_func_address_name("glUniform4ui");
	if (!glUniform4ui) { print_msg("glUniform4ui not loaded"); }
	glUniform1uiv = (PFNGLUNIFORM1UIVPROC)get_gl_func_address_name("glUniform1uiv");
	if (!glUniform1uiv) { print_msg("glUniform1uiv not loaded"); }
	glUniform2uiv = (PFNGLUNIFORM2UIVPROC)get_gl_func_address_name("glUniform2uiv");
	if (!glUniform2uiv) { print_msg("glUniform2uiv not loaded"); }
	glUniform3uiv = (PFNGLUNIFORM3UIVPROC)get_gl_func_address_name("glUniform3uiv");
	if (!glUniform3uiv) { print_msg("glUniform3uiv not loaded"); }
	glUniform4uiv = (PFNGLUNIFORM4UIVPROC)get_gl_func_address_name("glUniform4uiv");
	if (!glUniform4uiv) { print_msg("glUniform4uiv not loaded"); }
	glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)get_gl_func_address_name("glTexParameterIiv");
	if (!glTexParameterIiv) { print_msg("glTexParameterIiv not loaded"); }
	glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)get_gl_func_address_name("glTexParameterIuiv");
	if (!glTexParameterIuiv) { print_msg("glTexParameterIuiv not loaded"); }
	glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)get_gl_func_address_name("glGetTexParameterIiv");
	if (!glGetTexParameterIiv) { print_msg("glGetTexParameterIiv not loaded"); }
	glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)get_gl_func_address_name("glGetTexParameterIuiv");
	if (!glGetTexParameterIuiv) { print_msg("glGetTexParameterIuiv not loaded"); }
	glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)get_gl_func_address_name("glClearBufferiv");
	if (!glClearBufferiv) { print_msg("glClearBufferiv not loaded"); }
	glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)get_gl_func_address_name("glClearBufferuiv");
	if (!glClearBufferuiv) { print_msg("glClearBufferuiv not loaded"); }
	glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)get_gl_func_address_name("glClearBufferfv");
	if (!glClearBufferfv) { print_msg("glClearBufferfv not loaded"); }
	glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)get_gl_func_address_name("glClearBufferfi");
	if (!glClearBufferfi) { print_msg("glClearBufferfi not loaded"); }
	glGetStringi = (PFNGLGETSTRINGIPROC)get_gl_func_address_name("glGetStringi");
	if (!glGetStringi) { print_msg("glGetStringi not loaded"); }
	glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)get_gl_func_address_name("glIsRenderbuffer");
	if (!glIsRenderbuffer) { print_msg("glIsRenderbuffer not loaded"); }
	glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)get_gl_func_address_name("glBindRenderbuffer");
	if (!glBindRenderbuffer) { print_msg("glBindRenderbuffer not loaded"); }
	glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)get_gl_func_address_name("glDeleteRenderbuffers");
	if (!glDeleteRenderbuffers) { print_msg("glDeleteRenderbuffers not loaded"); }
	glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)get_gl_func_address_name("glGenRenderbuffers");
	if (!glGenRenderbuffers) { print_msg("glGenRenderbuffers not loaded"); }
	glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)get_gl_func_address_name("glRenderbufferStorage");
	if (!glRenderbufferStorage) { print_msg("glRenderbufferStorage not loaded"); }
	glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetRenderbufferParameteriv");
	if (!glGetRenderbufferParameteriv) { print_msg("glGetRenderbufferParameteriv not loaded"); }
	glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)get_gl_func_address_name("glIsFramebuffer");
	if (!glIsFramebuffer) { print_msg("glIsFramebuffer not loaded"); }
	glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)get_gl_func_address_name("glBindFramebuffer");
	if (!glBindFramebuffer) { print_msg("glBindFramebuffer not loaded"); }
	glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)get_gl_func_address_name("glDeleteFramebuffers");
	if (!glDeleteFramebuffers) { print_msg("glDeleteFramebuffers not loaded"); }
	glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)get_gl_func_address_name("glGenFramebuffers");
	if (!glGenFramebuffers) { print_msg("glGenFramebuffers not loaded"); }
	glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)get_gl_func_address_name("glCheckFramebufferStatus");
	if (!glCheckFramebufferStatus) { print_msg("glCheckFramebufferStatus not loaded"); }
	glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)get_gl_func_address_name("glFramebufferTexture1D");
	if (!glFramebufferTexture1D) { print_msg("glFramebufferTexture1D not loaded"); }
	glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)get_gl_func_address_name("glFramebufferTexture2D");
	if (!glFramebufferTexture2D) { print_msg("glFramebufferTexture2D not loaded"); }
	glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)get_gl_func_address_name("glFramebufferTexture3D");
	if (!glFramebufferTexture3D) { print_msg("glFramebufferTexture3D not loaded"); }
	glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)get_gl_func_address_name("glFramebufferRenderbuffer");
	if (!glFramebufferRenderbuffer) { print_msg("glFramebufferRenderbuffer not loaded"); }
	glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)get_gl_func_address_name("glGetFramebufferAttachmentParameteriv");
	if (!glGetFramebufferAttachmentParameteriv) { print_msg("glGetFramebufferAttachmentParameteriv not loaded"); }
	glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)get_gl_func_address_name("glGenerateMipmap");
	if (!glGenerateMipmap) { print_msg("glGenerateMipmap not loaded"); }
	glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)get_gl_func_address_name("glBlitFramebuffer");
	if (!glBlitFramebuffer) { print_msg("glBlitFramebuffer not loaded"); }
	glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)get_gl_func_address_name("glRenderbufferStorageMultisample");
	if (!glRenderbufferStorageMultisample) { print_msg("glRenderbufferStorageMultisample not loaded"); }
	glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)get_gl_func_address_name("glFramebufferTextureLayer");
	if (!glFramebufferTextureLayer) { print_msg("glFramebufferTextureLayer not loaded"); }
	glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)get_gl_func_address_name("glMapBufferRange");
	if (!glMapBufferRange) { print_msg("glMapBufferRange not loaded"); }
	glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)get_gl_func_address_name("glFlushMappedBufferRange");
	if (!glFlushMappedBufferRange) { print_msg("glFlushMappedBufferRange not loaded"); }
	glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)get_gl_func_address_name("glBindVertexArray");
	if (!glBindVertexArray) { print_msg("glBindVertexArray not loaded"); }
	glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)get_gl_func_address_name("glDeleteVertexArrays");
	if (!glDeleteVertexArrays) { print_msg("glDeleteVertexArrays not loaded"); }
	glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)get_gl_func_address_name("glGenVertexArrays");
	if (!glGenVertexArrays) { print_msg("glGenVertexArrays not loaded"); }
	glIsVertexArray = (PFNGLISVERTEXARRAYPROC)get_gl_func_address_name("glIsVertexArray");
	if (!glIsVertexArray) { print_msg("glIsVertexArray not loaded"); }
}


void glfnlib_init_GL_VERSION_3_1(PFN_loadfunc load) {
	glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)get_gl_func_address_name("glDrawArraysInstanced");
	if (!glDrawArraysInstanced) { print_msg("glDrawArraysInstanced not loaded"); }
	glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)get_gl_func_address_name("glDrawElementsInstanced");
	if (!glDrawElementsInstanced) { print_msg("glDrawElementsInstanced not loaded"); }
	glTexBuffer = (PFNGLTEXBUFFERPROC)get_gl_func_address_name("glTexBuffer");
	if (!glTexBuffer) { print_msg("glTexBuffer not loaded"); }
	glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)get_gl_func_address_name("glPrimitiveRestartIndex");
	if (!glPrimitiveRestartIndex) { print_msg("glPrimitiveRestartIndex not loaded"); }
	glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)get_gl_func_address_name("glCopyBufferSubData");
	if (!glCopyBufferSubData) { print_msg("glCopyBufferSubData not loaded"); }
	glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)get_gl_func_address_name("glGetUniformIndices");
	if (!glGetUniformIndices) { print_msg("glGetUniformIndices not loaded"); }
	glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)get_gl_func_address_name("glGetActiveUniformsiv");
	if (!glGetActiveUniformsiv) { print_msg("glGetActiveUniformsiv not loaded"); }
	glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)get_gl_func_address_name("glGetActiveUniformName");
	if (!glGetActiveUniformName) { print_msg("glGetActiveUniformName not loaded"); }
	glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)get_gl_func_address_name("glGetUniformBlockIndex");
	if (!glGetUniformBlockIndex) { print_msg("glGetUniformBlockIndex not loaded"); }
	glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)get_gl_func_address_name("glGetActiveUniformBlockiv");
	if (!glGetActiveUniformBlockiv) { print_msg("glGetActiveUniformBlockiv not loaded"); }
	glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)get_gl_func_address_name("glGetActiveUniformBlockName");
	if (!glGetActiveUniformBlockName) { print_msg("glGetActiveUniformBlockName not loaded"); }
	glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)get_gl_func_address_name("glUniformBlockBinding");
	if (!glUniformBlockBinding) { print_msg("glUniformBlockBinding not loaded"); }
}


void glfnlib_init_GL_VERSION_3_2(PFN_loadfunc load) {
	glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)get_gl_func_address_name("glDrawElementsBaseVertex");
	if (!glDrawElementsBaseVertex) { print_msg("glDrawElementsBaseVertex not loaded"); }
	glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)get_gl_func_address_name("glDrawRangeElementsBaseVertex");
	if (!glDrawRangeElementsBaseVertex) { print_msg("glDrawRangeElementsBaseVertex not loaded"); }
	glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)get_gl_func_address_name("glDrawElementsInstancedBaseVertex");
	if (!glDrawElementsInstancedBaseVertex) { print_msg("glDrawElementsInstancedBaseVertex not loaded"); }
	glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)get_gl_func_address_name("glMultiDrawElementsBaseVertex");
	if (!glMultiDrawElementsBaseVertex) { print_msg("glMultiDrawElementsBaseVertex not loaded"); }
	glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)get_gl_func_address_name("glProvokingVertex");
	if (!glProvokingVertex) { print_msg("glProvokingVertex not loaded"); }
	glFenceSync = (PFNGLFENCESYNCPROC)get_gl_func_address_name("glFenceSync");
	if (!glFenceSync) { print_msg("glFenceSync not loaded"); }
	glIsSync = (PFNGLISSYNCPROC)get_gl_func_address_name("glIsSync");
	if (!glIsSync) { print_msg("glIsSync not loaded"); }
	glDeleteSync = (PFNGLDELETESYNCPROC)get_gl_func_address_name("glDeleteSync");
	if (!glDeleteSync) { print_msg("glDeleteSync not loaded"); }
	glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)get_gl_func_address_name("glClientWaitSync");
	if (!glClientWaitSync) { print_msg("glClientWaitSync not loaded"); }
	glWaitSync = (PFNGLWAITSYNCPROC)get_gl_func_address_name("glWaitSync");
	if (!glWaitSync) { print_msg("glWaitSync not loaded"); }
	glGetInteger64v = (PFNGLGETINTEGER64VPROC)get_gl_func_address_name("glGetInteger64v");
	if (!glGetInteger64v) { print_msg("glGetInteger64v not loaded"); }
	glGetSynciv = (PFNGLGETSYNCIVPROC)get_gl_func_address_name("glGetSynciv");
	if (!glGetSynciv) { print_msg("glGetSynciv not loaded"); }
	glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)get_gl_func_address_name("glGetInteger64i_v");
	if (!glGetInteger64i_v) { print_msg("glGetInteger64i_v not loaded"); }
	glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)get_gl_func_address_name("glGetBufferParameteri64v");
	if (!glGetBufferParameteri64v) { print_msg("glGetBufferParameteri64v not loaded"); }
	glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)get_gl_func_address_name("glFramebufferTexture");
	if (!glFramebufferTexture) { print_msg("glFramebufferTexture not loaded"); }
	glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)get_gl_func_address_name("glTexImage2DMultisample");
	if (!glTexImage2DMultisample) { print_msg("glTexImage2DMultisample not loaded"); }
	glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)get_gl_func_address_name("glTexImage3DMultisample");
	if (!glTexImage3DMultisample) { print_msg("glTexImage3DMultisample not loaded"); }
	glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)get_gl_func_address_name("glGetMultisamplefv");
	if (!glGetMultisamplefv) { print_msg("glGetMultisamplefv not loaded"); }
	glSampleMaski = (PFNGLSAMPLEMASKIPROC)get_gl_func_address_name("glSampleMaski");
	if (!glSampleMaski) { print_msg("glSampleMaski not loaded"); }
}


void glfnlib_init_GL_VERSION_3_3(PFN_loadfunc load) {
	glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)get_gl_func_address_name("glBindFragDataLocationIndexed");
	if (!glBindFragDataLocationIndexed) { print_msg("glBindFragDataLocationIndexed not loaded"); }
	glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)get_gl_func_address_name("glGetFragDataIndex");
	if (!glGetFragDataIndex) { print_msg("glGetFragDataIndex not loaded"); }
	glGenSamplers = (PFNGLGENSAMPLERSPROC)get_gl_func_address_name("glGenSamplers");
	if (!glGenSamplers) { print_msg("glGenSamplers not loaded"); }
	glDeleteSamplers = (PFNGLDELETESAMPLERSPROC)get_gl_func_address_name("glDeleteSamplers");
	if (!glDeleteSamplers) { print_msg("glDeleteSamplers not loaded"); }
	glIsSampler = (PFNGLISSAMPLERPROC)get_gl_func_address_name("glIsSampler");
	if (!glIsSampler) { print_msg("glIsSampler not loaded"); }
	glBindSampler = (PFNGLBINDSAMPLERPROC)get_gl_func_address_name("glBindSampler");
	if (!glBindSampler) { print_msg("glBindSampler not loaded"); }
	glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)get_gl_func_address_name("glSamplerParameteri");
	if (!glSamplerParameteri) { print_msg("glSamplerParameteri not loaded"); }
	glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)get_gl_func_address_name("glSamplerParameteriv");
	if (!glSamplerParameteriv) { print_msg("glSamplerParameteriv not loaded"); }
	glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)get_gl_func_address_name("glSamplerParameterf");
	if (!glSamplerParameterf) { print_msg("glSamplerParameterf not loaded"); }
	glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)get_gl_func_address_name("glSamplerParameterfv");
	if (!glSamplerParameterfv) { print_msg("glSamplerParameterfv not loaded"); }
	glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC)get_gl_func_address_name("glSamplerParameterIiv");
	if (!glSamplerParameterIiv) { print_msg("glSamplerParameterIiv not loaded"); }
	glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)get_gl_func_address_name("glSamplerParameterIuiv");
	if (!glSamplerParameterIuiv) { print_msg("glSamplerParameterIuiv not loaded"); }
	glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)get_gl_func_address_name("glGetSamplerParameteriv");
	if (!glGetSamplerParameteriv) { print_msg("glGetSamplerParameteriv not loaded"); }
	glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)get_gl_func_address_name("glGetSamplerParameterIiv");
	if (!glGetSamplerParameterIiv) { print_msg("glGetSamplerParameterIiv not loaded"); }
	glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)get_gl_func_address_name("glGetSamplerParameterfv");
	if (!glGetSamplerParameterfv) { print_msg("glGetSamplerParameterfv not loaded"); }
	glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)get_gl_func_address_name("glGetSamplerParameterIuiv");
	if (!glGetSamplerParameterIuiv) { print_msg("glGetSamplerParameterIuiv not loaded"); }
	glQueryCounter = (PFNGLQUERYCOUNTERPROC)get_gl_func_address_name("glQueryCounter");
	if (!glQueryCounter) { print_msg("glQueryCounter not loaded"); }
	glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC)get_gl_func_address_name("glGetQueryObjecti64v");
	if (!glGetQueryObjecti64v) { print_msg("glGetQueryObjecti64v not loaded"); }
	glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)get_gl_func_address_name("glGetQueryObjectui64v");
	if (!glGetQueryObjectui64v) { print_msg("glGetQueryObjectui64v not loaded"); }
	glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC)get_gl_func_address_name("glVertexAttribDivisor");
	if (!glVertexAttribDivisor) { print_msg("glVertexAttribDivisor not loaded"); }
	glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC)get_gl_func_address_name("glVertexAttribP1ui");
	if (!glVertexAttribP1ui) { print_msg("glVertexAttribP1ui not loaded"); }
	glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)get_gl_func_address_name("glVertexAttribP1uiv");
	if (!glVertexAttribP1uiv) { print_msg("glVertexAttribP1uiv not loaded"); }
	glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC)get_gl_func_address_name("glVertexAttribP2ui");
	if (!glVertexAttribP2ui) { print_msg("glVertexAttribP2ui not loaded"); }
	glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)get_gl_func_address_name("glVertexAttribP2uiv");
	if (!glVertexAttribP2uiv) { print_msg("glVertexAttribP2uiv not loaded"); }
	glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC)get_gl_func_address_name("glVertexAttribP3ui");
	if (!glVertexAttribP3ui) { print_msg("glVertexAttribP3ui not loaded"); }
	glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)get_gl_func_address_name("glVertexAttribP3uiv");
	if (!glVertexAttribP3uiv) { print_msg("glVertexAttribP3uiv not loaded"); }
	glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC)get_gl_func_address_name("glVertexAttribP4ui");
	if (!glVertexAttribP4ui) { print_msg("glVertexAttribP4ui not loaded"); }
	glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)get_gl_func_address_name("glVertexAttribP4uiv");
	if (!glVertexAttribP4uiv) { print_msg("glVertexAttribP4uiv not loaded"); }
	glVertexP2ui = (PFNGLVERTEXP2UIPROC)get_gl_func_address_name("glVertexP2ui");
	if (!glVertexP2ui) { print_msg("glVertexP2ui not loaded"); }
	glVertexP2uiv = (PFNGLVERTEXP2UIVPROC)get_gl_func_address_name("glVertexP2uiv");
	if (!glVertexP2uiv) { print_msg("glVertexP2uiv not loaded"); }
	glVertexP3ui = (PFNGLVERTEXP3UIPROC)get_gl_func_address_name("glVertexP3ui");
	if (!glVertexP3ui) { print_msg("glVertexP3ui not loaded"); }
	glVertexP3uiv = (PFNGLVERTEXP3UIVPROC)get_gl_func_address_name("glVertexP3uiv");
	if (!glVertexP3uiv) { print_msg("glVertexP3uiv not loaded"); }
	glVertexP4ui = (PFNGLVERTEXP4UIPROC)get_gl_func_address_name("glVertexP4ui");
	if (!glVertexP4ui) { print_msg("glVertexP4ui not loaded"); }
	glVertexP4uiv = (PFNGLVERTEXP4UIVPROC)get_gl_func_address_name("glVertexP4uiv");
	if (!glVertexP4uiv) { print_msg("glVertexP4uiv not loaded"); }
	glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC)get_gl_func_address_name("glTexCoordP1ui");
	if (!glTexCoordP1ui) { print_msg("glTexCoordP1ui not loaded"); }
	glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC)get_gl_func_address_name("glTexCoordP1uiv");
	if (!glTexCoordP1uiv) { print_msg("glTexCoordP1uiv not loaded"); }
	glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC)get_gl_func_address_name("glTexCoordP2ui");
	if (!glTexCoordP2ui) { print_msg("glTexCoordP2ui not loaded"); }
	glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC)get_gl_func_address_name("glTexCoordP2uiv");
	if (!glTexCoordP2uiv) { print_msg("glTexCoordP2uiv not loaded"); }
	glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC)get_gl_func_address_name("glTexCoordP3ui");
	if (!glTexCoordP3ui) { print_msg("glTexCoordP3ui not loaded"); }
	glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC)get_gl_func_address_name("glTexCoordP3uiv");
	if (!glTexCoordP3uiv) { print_msg("glTexCoordP3uiv not loaded"); }
	glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC)get_gl_func_address_name("glTexCoordP4ui");
	if (!glTexCoordP4ui) { print_msg("glTexCoordP4ui not loaded"); }
	glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC)get_gl_func_address_name("glTexCoordP4uiv");
	if (!glTexCoordP4uiv) { print_msg("glTexCoordP4uiv not loaded"); }
	glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC)get_gl_func_address_name("glMultiTexCoordP1ui");
	if (!glMultiTexCoordP1ui) { print_msg("glMultiTexCoordP1ui not loaded"); }
	glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC)get_gl_func_address_name("glMultiTexCoordP1uiv");
	if (!glMultiTexCoordP1uiv) { print_msg("glMultiTexCoordP1uiv not loaded"); }
	glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC)get_gl_func_address_name("glMultiTexCoordP2ui");
	if (!glMultiTexCoordP2ui) { print_msg("glMultiTexCoordP2ui not loaded"); }
	glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC)get_gl_func_address_name("glMultiTexCoordP2uiv");
	if (!glMultiTexCoordP2uiv) { print_msg("glMultiTexCoordP2uiv not loaded"); }
	glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC)get_gl_func_address_name("glMultiTexCoordP3ui");
	if (!glMultiTexCoordP3ui) { print_msg("glMultiTexCoordP3ui not loaded"); }
	glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC)get_gl_func_address_name("glMultiTexCoordP3uiv");
	if (!glMultiTexCoordP3uiv) { print_msg("glMultiTexCoordP3uiv not loaded"); }
	glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC)get_gl_func_address_name("glMultiTexCoordP4ui");
	if (!glMultiTexCoordP4ui) { print_msg("glMultiTexCoordP4ui not loaded"); }
	glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC)get_gl_func_address_name("glMultiTexCoordP4uiv");
	if (!glMultiTexCoordP4uiv) { print_msg("glMultiTexCoordP4uiv not loaded"); }
	glNormalP3ui = (PFNGLNORMALP3UIPROC)get_gl_func_address_name("glNormalP3ui");
	if (!glNormalP3ui) { print_msg("glNormalP3ui not loaded"); }
	glNormalP3uiv = (PFNGLNORMALP3UIVPROC)get_gl_func_address_name("glNormalP3uiv");
	if (!glNormalP3uiv) { print_msg("glNormalP3uiv not loaded"); }
	glColorP3ui = (PFNGLCOLORP3UIPROC)get_gl_func_address_name("glColorP3ui");
	if (!glColorP3ui) { print_msg("glColorP3ui not loaded"); }
	glColorP3uiv = (PFNGLCOLORP3UIVPROC)get_gl_func_address_name("glColorP3uiv");
	if (!glColorP3uiv) { print_msg("glColorP3uiv not loaded"); }
	glColorP4ui = (PFNGLCOLORP4UIPROC)get_gl_func_address_name("glColorP4ui");
	if (!glColorP4ui) { print_msg("glColorP4ui not loaded"); }
	glColorP4uiv = (PFNGLCOLORP4UIVPROC)get_gl_func_address_name("glColorP4uiv");
	if (!glColorP4uiv) { print_msg("glColorP4uiv not loaded"); }
	glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC)get_gl_func_address_name("glSecondaryColorP3ui");
	if (!glSecondaryColorP3ui) { print_msg("glSecondaryColorP3ui not loaded"); }
	glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC)get_gl_func_address_name("glSecondaryColorP3uiv");
	if (!glSecondaryColorP3uiv) { print_msg("glSecondaryColorP3uiv not loaded"); }
}


void glfnlib_init_GL_VERSION_4_0(PFN_loadfunc load) {
	glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC)get_gl_func_address_name("glMinSampleShading");
	if (!glMinSampleShading) { print_msg("glMinSampleShading not loaded"); }
	glBlendEquationi = (PFNGLBLENDEQUATIONIPROC)get_gl_func_address_name("glBlendEquationi");
	if (!glBlendEquationi) { print_msg("glBlendEquationi not loaded"); }
	glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC)get_gl_func_address_name("glBlendEquationSeparatei");
	if (!glBlendEquationSeparatei) { print_msg("glBlendEquationSeparatei not loaded"); }
	glBlendFunci = (PFNGLBLENDFUNCIPROC)get_gl_func_address_name("glBlendFunci");
	if (!glBlendFunci) { print_msg("glBlendFunci not loaded"); }
	glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC)get_gl_func_address_name("glBlendFuncSeparatei");
	if (!glBlendFuncSeparatei) { print_msg("glBlendFuncSeparatei not loaded"); }
	glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC)get_gl_func_address_name("glDrawArraysIndirect");
	if (!glDrawArraysIndirect) { print_msg("glDrawArraysIndirect not loaded"); }
	glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC)get_gl_func_address_name("glDrawElementsIndirect");
	if (!glDrawElementsIndirect) { print_msg("glDrawElementsIndirect not loaded"); }
	glUniform1d = (PFNGLUNIFORM1DPROC)get_gl_func_address_name("glUniform1d");
	if (!glUniform1d) { print_msg("glUniform1d not loaded"); }
	glUniform2d = (PFNGLUNIFORM2DPROC)get_gl_func_address_name("glUniform2d");
	if (!glUniform2d) { print_msg("glUniform2d not loaded"); }
	glUniform3d = (PFNGLUNIFORM3DPROC)get_gl_func_address_name("glUniform3d");
	if (!glUniform3d) { print_msg("glUniform3d not loaded"); }
	glUniform4d = (PFNGLUNIFORM4DPROC)get_gl_func_address_name("glUniform4d");
	if (!glUniform4d) { print_msg("glUniform4d not loaded"); }
	glUniform1dv = (PFNGLUNIFORM1DVPROC)get_gl_func_address_name("glUniform1dv");
	if (!glUniform1dv) { print_msg("glUniform1dv not loaded"); }
	glUniform2dv = (PFNGLUNIFORM2DVPROC)get_gl_func_address_name("glUniform2dv");
	if (!glUniform2dv) { print_msg("glUniform2dv not loaded"); }
	glUniform3dv = (PFNGLUNIFORM3DVPROC)get_gl_func_address_name("glUniform3dv");
	if (!glUniform3dv) { print_msg("glUniform3dv not loaded"); }
	glUniform4dv = (PFNGLUNIFORM4DVPROC)get_gl_func_address_name("glUniform4dv");
	if (!glUniform4dv) { print_msg("glUniform4dv not loaded"); }
	glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC)get_gl_func_address_name("glUniformMatrix2dv");
	if (!glUniformMatrix2dv) { print_msg("glUniformMatrix2dv not loaded"); }
	glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC)get_gl_func_address_name("glUniformMatrix3dv");
	if (!glUniformMatrix3dv) { print_msg("glUniformMatrix3dv not loaded"); }
	glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC)get_gl_func_address_name("glUniformMatrix4dv");
	if (!glUniformMatrix4dv) { print_msg("glUniformMatrix4dv not loaded"); }
	glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC)get_gl_func_address_name("glUniformMatrix2x3dv");
	if (!glUniformMatrix2x3dv) { print_msg("glUniformMatrix2x3dv not loaded"); }
	glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC)get_gl_func_address_name("glUniformMatrix2x4dv");
	if (!glUniformMatrix2x4dv) { print_msg("glUniformMatrix2x4dv not loaded"); }
	glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC)get_gl_func_address_name("glUniformMatrix3x2dv");
	if (!glUniformMatrix3x2dv) { print_msg("glUniformMatrix3x2dv not loaded"); }
	glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC)get_gl_func_address_name("glUniformMatrix3x4dv");
	if (!glUniformMatrix3x4dv) { print_msg("glUniformMatrix3x4dv not loaded"); }
	glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC)get_gl_func_address_name("glUniformMatrix4x2dv");
	if (!glUniformMatrix4x2dv) { print_msg("glUniformMatrix4x2dv not loaded"); }
	glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC)get_gl_func_address_name("glUniformMatrix4x3dv");
	if (!glUniformMatrix4x3dv) { print_msg("glUniformMatrix4x3dv not loaded"); }
	glGetUniformdv = (PFNGLGETUNIFORMDVPROC)get_gl_func_address_name("glGetUniformdv");
	if (!glGetUniformdv) { print_msg("glGetUniformdv not loaded"); }
	glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)get_gl_func_address_name("glGetSubroutineUniformLocation");
	if (!glGetSubroutineUniformLocation) { print_msg("glGetSubroutineUniformLocation not loaded"); }
	glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC)get_gl_func_address_name("glGetSubroutineIndex");
	if (!glGetSubroutineIndex) { print_msg("glGetSubroutineIndex not loaded"); }
	glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)get_gl_func_address_name("glGetActiveSubroutineUniformiv");
	if (!glGetActiveSubroutineUniformiv) { print_msg("glGetActiveSubroutineUniformiv not loaded"); }
	glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)get_gl_func_address_name("glGetActiveSubroutineUniformName");
	if (!glGetActiveSubroutineUniformName) { print_msg("glGetActiveSubroutineUniformName not loaded"); }
	glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC)get_gl_func_address_name("glGetActiveSubroutineName");
	if (!glGetActiveSubroutineName) { print_msg("glGetActiveSubroutineName not loaded"); }
	glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC)get_gl_func_address_name("glUniformSubroutinesuiv");
	if (!glUniformSubroutinesuiv) { print_msg("glUniformSubroutinesuiv not loaded"); }
	glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)get_gl_func_address_name("glGetUniformSubroutineuiv");
	if (!glGetUniformSubroutineuiv) { print_msg("glGetUniformSubroutineuiv not loaded"); }
	glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC)get_gl_func_address_name("glGetProgramStageiv");
	if (!glGetProgramStageiv) { print_msg("glGetProgramStageiv not loaded"); }
	glPatchParameteri = (PFNGLPATCHPARAMETERIPROC)get_gl_func_address_name("glPatchParameteri");
	if (!glPatchParameteri) { print_msg("glPatchParameteri not loaded"); }
	glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC)get_gl_func_address_name("glPatchParameterfv");
	if (!glPatchParameterfv) { print_msg("glPatchParameterfv not loaded"); }
	glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glBindTransformFeedback");
	if (!glBindTransformFeedback) { print_msg("glBindTransformFeedback not loaded"); }
	glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC)get_gl_func_address_name("glDeleteTransformFeedbacks");
	if (!glDeleteTransformFeedbacks) { print_msg("glDeleteTransformFeedbacks not loaded"); }
	glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC)get_gl_func_address_name("glGenTransformFeedbacks");
	if (!glGenTransformFeedbacks) { print_msg("glGenTransformFeedbacks not loaded"); }
	glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glIsTransformFeedback");
	if (!glIsTransformFeedback) { print_msg("glIsTransformFeedback not loaded"); }
	glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC)get_gl_func_address_name("glPauseTransformFeedback");
	if (!glPauseTransformFeedback) { print_msg("glPauseTransformFeedback not loaded"); }
	glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC)get_gl_func_address_name("glResumeTransformFeedback");
	if (!glResumeTransformFeedback) { print_msg("glResumeTransformFeedback not loaded"); }
	glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glDrawTransformFeedback");
	if (!glDrawTransformFeedback) { print_msg("glDrawTransformFeedback not loaded"); }
	glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)get_gl_func_address_name("glDrawTransformFeedbackStream");
	if (!glDrawTransformFeedbackStream) { print_msg("glDrawTransformFeedbackStream not loaded"); }
	glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC)get_gl_func_address_name("glBeginQueryIndexed");
	if (!glBeginQueryIndexed) { print_msg("glBeginQueryIndexed not loaded"); }
	glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC)get_gl_func_address_name("glEndQueryIndexed");
	if (!glEndQueryIndexed) { print_msg("glEndQueryIndexed not loaded"); }
	glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC)get_gl_func_address_name("glGetQueryIndexediv");
	if (!glGetQueryIndexediv) { print_msg("glGetQueryIndexediv not loaded"); }
}


void glfnlib_init_GL_VERSION_4_1(PFN_loadfunc load) {
	glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC)get_gl_func_address_name("glReleaseShaderCompiler");
	if (!glReleaseShaderCompiler) { print_msg("glReleaseShaderCompiler not loaded"); }
	glShaderBinary = (PFNGLSHADERBINARYPROC)get_gl_func_address_name("glShaderBinary");
	if (!glShaderBinary) { print_msg("glShaderBinary not loaded"); }
	glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)get_gl_func_address_name("glGetShaderPrecisionFormat");
	if (!glGetShaderPrecisionFormat) { print_msg("glGetShaderPrecisionFormat not loaded"); }
	glDepthRangef = (PFNGLDEPTHRANGEFPROC)get_gl_func_address_name("glDepthRangef");
	if (!glDepthRangef) { print_msg("glDepthRangef not loaded"); }
	glClearDepthf = (PFNGLCLEARDEPTHFPROC)get_gl_func_address_name("glClearDepthf");
	if (!glClearDepthf) { print_msg("glClearDepthf not loaded"); }
	glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC)get_gl_func_address_name("glGetProgramBinary");
	if (!glGetProgramBinary) { print_msg("glGetProgramBinary not loaded"); }
	glProgramBinary = (PFNGLPROGRAMBINARYPROC)get_gl_func_address_name("glProgramBinary");
	if (!glProgramBinary) { print_msg("glProgramBinary not loaded"); }
	glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC)get_gl_func_address_name("glProgramParameteri");
	if (!glProgramParameteri) { print_msg("glProgramParameteri not loaded"); }
	glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC)get_gl_func_address_name("glUseProgramStages");
	if (!glUseProgramStages) { print_msg("glUseProgramStages not loaded"); }
	glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC)get_gl_func_address_name("glActiveShaderProgram");
	if (!glActiveShaderProgram) { print_msg("glActiveShaderProgram not loaded"); }
	glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC)get_gl_func_address_name("glCreateShaderProgramv");
	if (!glCreateShaderProgramv) { print_msg("glCreateShaderProgramv not loaded"); }
	glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC)get_gl_func_address_name("glBindProgramPipeline");
	if (!glBindProgramPipeline) { print_msg("glBindProgramPipeline not loaded"); }
	glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)get_gl_func_address_name("glDeleteProgramPipelines");
	if (!glDeleteProgramPipelines) { print_msg("glDeleteProgramPipelines not loaded"); }
	glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC)get_gl_func_address_name("glGenProgramPipelines");
	if (!glGenProgramPipelines) { print_msg("glGenProgramPipelines not loaded"); }
	glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC)get_gl_func_address_name("glIsProgramPipeline");
	if (!glIsProgramPipeline) { print_msg("glIsProgramPipeline not loaded"); }
	glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC)get_gl_func_address_name("glGetProgramPipelineiv");
	if (!glGetProgramPipelineiv) { print_msg("glGetProgramPipelineiv not loaded"); }
	glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC)get_gl_func_address_name("glProgramUniform1i");
	if (!glProgramUniform1i) { print_msg("glProgramUniform1i not loaded"); }
	glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC)get_gl_func_address_name("glProgramUniform1iv");
	if (!glProgramUniform1iv) { print_msg("glProgramUniform1iv not loaded"); }
	glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC)get_gl_func_address_name("glProgramUniform1f");
	if (!glProgramUniform1f) { print_msg("glProgramUniform1f not loaded"); }
	glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC)get_gl_func_address_name("glProgramUniform1fv");
	if (!glProgramUniform1fv) { print_msg("glProgramUniform1fv not loaded"); }
	glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC)get_gl_func_address_name("glProgramUniform1d");
	if (!glProgramUniform1d) { print_msg("glProgramUniform1d not loaded"); }
	glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC)get_gl_func_address_name("glProgramUniform1dv");
	if (!glProgramUniform1dv) { print_msg("glProgramUniform1dv not loaded"); }
	glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC)get_gl_func_address_name("glProgramUniform1ui");
	if (!glProgramUniform1ui) { print_msg("glProgramUniform1ui not loaded"); }
	glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC)get_gl_func_address_name("glProgramUniform1uiv");
	if (!glProgramUniform1uiv) { print_msg("glProgramUniform1uiv not loaded"); }
	glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC)get_gl_func_address_name("glProgramUniform2i");
	if (!glProgramUniform2i) { print_msg("glProgramUniform2i not loaded"); }
	glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC)get_gl_func_address_name("glProgramUniform2iv");
	if (!glProgramUniform2iv) { print_msg("glProgramUniform2iv not loaded"); }
	glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC)get_gl_func_address_name("glProgramUniform2f");
	if (!glProgramUniform2f) { print_msg("glProgramUniform2f not loaded"); }
	glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC)get_gl_func_address_name("glProgramUniform2fv");
	if (!glProgramUniform2fv) { print_msg("glProgramUniform2fv not loaded"); }
	glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC)get_gl_func_address_name("glProgramUniform2d");
	if (!glProgramUniform2d) { print_msg("glProgramUniform2d not loaded"); }
	glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC)get_gl_func_address_name("glProgramUniform2dv");
	if (!glProgramUniform2dv) { print_msg("glProgramUniform2dv not loaded"); }
	glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC)get_gl_func_address_name("glProgramUniform2ui");
	if (!glProgramUniform2ui) { print_msg("glProgramUniform2ui not loaded"); }
	glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC)get_gl_func_address_name("glProgramUniform2uiv");
	if (!glProgramUniform2uiv) { print_msg("glProgramUniform2uiv not loaded"); }
	glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC)get_gl_func_address_name("glProgramUniform3i");
	if (!glProgramUniform3i) { print_msg("glProgramUniform3i not loaded"); }
	glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC)get_gl_func_address_name("glProgramUniform3iv");
	if (!glProgramUniform3iv) { print_msg("glProgramUniform3iv not loaded"); }
	glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC)get_gl_func_address_name("glProgramUniform3f");
	if (!glProgramUniform3f) { print_msg("glProgramUniform3f not loaded"); }
	glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC)get_gl_func_address_name("glProgramUniform3fv");
	if (!glProgramUniform3fv) { print_msg("glProgramUniform3fv not loaded"); }
	glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC)get_gl_func_address_name("glProgramUniform3d");
	if (!glProgramUniform3d) { print_msg("glProgramUniform3d not loaded"); }
	glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC)get_gl_func_address_name("glProgramUniform3dv");
	if (!glProgramUniform3dv) { print_msg("glProgramUniform3dv not loaded"); }
	glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC)get_gl_func_address_name("glProgramUniform3ui");
	if (!glProgramUniform3ui) { print_msg("glProgramUniform3ui not loaded"); }
	glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC)get_gl_func_address_name("glProgramUniform3uiv");
	if (!glProgramUniform3uiv) { print_msg("glProgramUniform3uiv not loaded"); }
	glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC)get_gl_func_address_name("glProgramUniform4i");
	if (!glProgramUniform4i) { print_msg("glProgramUniform4i not loaded"); }
	glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC)get_gl_func_address_name("glProgramUniform4iv");
	if (!glProgramUniform4iv) { print_msg("glProgramUniform4iv not loaded"); }
	glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC)get_gl_func_address_name("glProgramUniform4f");
	if (!glProgramUniform4f) { print_msg("glProgramUniform4f not loaded"); }
	glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC)get_gl_func_address_name("glProgramUniform4fv");
	if (!glProgramUniform4fv) { print_msg("glProgramUniform4fv not loaded"); }
	glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC)get_gl_func_address_name("glProgramUniform4d");
	if (!glProgramUniform4d) { print_msg("glProgramUniform4d not loaded"); }
	glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC)get_gl_func_address_name("glProgramUniform4dv");
	if (!glProgramUniform4dv) { print_msg("glProgramUniform4dv not loaded"); }
	glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC)get_gl_func_address_name("glProgramUniform4ui");
	if (!glProgramUniform4ui) { print_msg("glProgramUniform4ui not loaded"); }
	glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC)get_gl_func_address_name("glProgramUniform4uiv");
	if (!glProgramUniform4uiv) { print_msg("glProgramUniform4uiv not loaded"); }
	glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)get_gl_func_address_name("glProgramUniformMatrix2fv");
	if (!glProgramUniformMatrix2fv) { print_msg("glProgramUniformMatrix2fv not loaded"); }
	glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)get_gl_func_address_name("glProgramUniformMatrix3fv");
	if (!glProgramUniformMatrix3fv) { print_msg("glProgramUniformMatrix3fv not loaded"); }
	glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)get_gl_func_address_name("glProgramUniformMatrix4fv");
	if (!glProgramUniformMatrix4fv) { print_msg("glProgramUniformMatrix4fv not loaded"); }
	glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)get_gl_func_address_name("glProgramUniformMatrix2dv");
	if (!glProgramUniformMatrix2dv) { print_msg("glProgramUniformMatrix2dv not loaded"); }
	glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)get_gl_func_address_name("glProgramUniformMatrix3dv");
	if (!glProgramUniformMatrix3dv) { print_msg("glProgramUniformMatrix3dv not loaded"); }
	glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)get_gl_func_address_name("glProgramUniformMatrix4dv");
	if (!glProgramUniformMatrix4dv) { print_msg("glProgramUniformMatrix4dv not loaded"); }
	glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)get_gl_func_address_name("glProgramUniformMatrix2x3fv");
	if (!glProgramUniformMatrix2x3fv) { print_msg("glProgramUniformMatrix2x3fv not loaded"); }
	glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)get_gl_func_address_name("glProgramUniformMatrix3x2fv");
	if (!glProgramUniformMatrix3x2fv) { print_msg("glProgramUniformMatrix3x2fv not loaded"); }
	glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)get_gl_func_address_name("glProgramUniformMatrix2x4fv");
	if (!glProgramUniformMatrix2x4fv) { print_msg("glProgramUniformMatrix2x4fv not loaded"); }
	glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)get_gl_func_address_name("glProgramUniformMatrix4x2fv");
	if (!glProgramUniformMatrix4x2fv) { print_msg("glProgramUniformMatrix4x2fv not loaded"); }
	glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)get_gl_func_address_name("glProgramUniformMatrix3x4fv");
	if (!glProgramUniformMatrix3x4fv) { print_msg("glProgramUniformMatrix3x4fv not loaded"); }
	glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)get_gl_func_address_name("glProgramUniformMatrix4x3fv");
	if (!glProgramUniformMatrix4x3fv) { print_msg("glProgramUniformMatrix4x3fv not loaded"); }
	glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)get_gl_func_address_name("glProgramUniformMatrix2x3dv");
	if (!glProgramUniformMatrix2x3dv) { print_msg("glProgramUniformMatrix2x3dv not loaded"); }
	glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)get_gl_func_address_name("glProgramUniformMatrix3x2dv");
	if (!glProgramUniformMatrix3x2dv) { print_msg("glProgramUniformMatrix3x2dv not loaded"); }
	glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)get_gl_func_address_name("glProgramUniformMatrix2x4dv");
	if (!glProgramUniformMatrix2x4dv) { print_msg("glProgramUniformMatrix2x4dv not loaded"); }
	glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)get_gl_func_address_name("glProgramUniformMatrix4x2dv");
	if (!glProgramUniformMatrix4x2dv) { print_msg("glProgramUniformMatrix4x2dv not loaded"); }
	glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)get_gl_func_address_name("glProgramUniformMatrix3x4dv");
	if (!glProgramUniformMatrix3x4dv) { print_msg("glProgramUniformMatrix3x4dv not loaded"); }
	glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)get_gl_func_address_name("glProgramUniformMatrix4x3dv");
	if (!glProgramUniformMatrix4x3dv) { print_msg("glProgramUniformMatrix4x3dv not loaded"); }
	glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)get_gl_func_address_name("glValidateProgramPipeline");
	if (!glValidateProgramPipeline) { print_msg("glValidateProgramPipeline not loaded"); }
	glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)get_gl_func_address_name("glGetProgramPipelineInfoLog");
	if (!glGetProgramPipelineInfoLog) { print_msg("glGetProgramPipelineInfoLog not loaded"); }
	glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC)get_gl_func_address_name("glVertexAttribL1d");
	if (!glVertexAttribL1d) { print_msg("glVertexAttribL1d not loaded"); }
	glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC)get_gl_func_address_name("glVertexAttribL2d");
	if (!glVertexAttribL2d) { print_msg("glVertexAttribL2d not loaded"); }
	glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC)get_gl_func_address_name("glVertexAttribL3d");
	if (!glVertexAttribL3d) { print_msg("glVertexAttribL3d not loaded"); }
	glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC)get_gl_func_address_name("glVertexAttribL4d");
	if (!glVertexAttribL4d) { print_msg("glVertexAttribL4d not loaded"); }
	glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC)get_gl_func_address_name("glVertexAttribL1dv");
	if (!glVertexAttribL1dv) { print_msg("glVertexAttribL1dv not loaded"); }
	glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC)get_gl_func_address_name("glVertexAttribL2dv");
	if (!glVertexAttribL2dv) { print_msg("glVertexAttribL2dv not loaded"); }
	glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC)get_gl_func_address_name("glVertexAttribL3dv");
	if (!glVertexAttribL3dv) { print_msg("glVertexAttribL3dv not loaded"); }
	glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC)get_gl_func_address_name("glVertexAttribL4dv");
	if (!glVertexAttribL4dv) { print_msg("glVertexAttribL4dv not loaded"); }
	glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC)get_gl_func_address_name("glVertexAttribLPointer");
	if (!glVertexAttribLPointer) { print_msg("glVertexAttribLPointer not loaded"); }
	glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC)get_gl_func_address_name("glGetVertexAttribLdv");
	if (!glGetVertexAttribLdv) { print_msg("glGetVertexAttribLdv not loaded"); }
	glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC)get_gl_func_address_name("glViewportArrayv");
	if (!glViewportArrayv) { print_msg("glViewportArrayv not loaded"); }
	glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC)get_gl_func_address_name("glViewportIndexedf");
	if (!glViewportIndexedf) { print_msg("glViewportIndexedf not loaded"); }
	glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC)get_gl_func_address_name("glViewportIndexedfv");
	if (!glViewportIndexedfv) { print_msg("glViewportIndexedfv not loaded"); }
	glScissorArrayv = (PFNGLSCISSORARRAYVPROC)get_gl_func_address_name("glScissorArrayv");
	if (!glScissorArrayv) { print_msg("glScissorArrayv not loaded"); }
	glScissorIndexed = (PFNGLSCISSORINDEXEDPROC)get_gl_func_address_name("glScissorIndexed");
	if (!glScissorIndexed) { print_msg("glScissorIndexed not loaded"); }
	glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC)get_gl_func_address_name("glScissorIndexedv");
	if (!glScissorIndexedv) { print_msg("glScissorIndexedv not loaded"); }
	glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC)get_gl_func_address_name("glDepthRangeArrayv");
	if (!glDepthRangeArrayv) { print_msg("glDepthRangeArrayv not loaded"); }
	glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC)get_gl_func_address_name("glDepthRangeIndexed");
	if (!glDepthRangeIndexed) { print_msg("glDepthRangeIndexed not loaded"); }
	glGetFloati_v = (PFNGLGETFLOATI_VPROC)get_gl_func_address_name("glGetFloati_v");
	if (!glGetFloati_v) { print_msg("glGetFloati_v not loaded"); }
	glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC)get_gl_func_address_name("glGetDoublei_v");
	if (!glGetDoublei_v) { print_msg("glGetDoublei_v not loaded"); }
}


void glfnlib_init_GL_VERSION_4_2(PFN_loadfunc load) {
	glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)get_gl_func_address_name("glDrawArraysInstancedBaseInstance");
	if (!glDrawArraysInstancedBaseInstance) { print_msg("glDrawArraysInstancedBaseInstance not loaded"); }
	glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)get_gl_func_address_name("glDrawElementsInstancedBaseInstance");
	if (!glDrawElementsInstancedBaseInstance) { print_msg("glDrawElementsInstancedBaseInstance not loaded"); }
	glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)get_gl_func_address_name("glDrawElementsInstancedBaseVertexBaseInstance");
	if (!glDrawElementsInstancedBaseVertexBaseInstance) { print_msg("glDrawElementsInstancedBaseVertexBaseInstance not loaded"); }
	glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC)get_gl_func_address_name("glGetInternalformativ");
	if (!glGetInternalformativ) { print_msg("glGetInternalformativ not loaded"); }
	glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)get_gl_func_address_name("glGetActiveAtomicCounterBufferiv");
	if (!glGetActiveAtomicCounterBufferiv) { print_msg("glGetActiveAtomicCounterBufferiv not loaded"); }
	glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC)get_gl_func_address_name("glBindImageTexture");
	if (!glBindImageTexture) { print_msg("glBindImageTexture not loaded"); }
	glMemoryBarrier = (PFNGLMEMORYBARRIERPROC)get_gl_func_address_name("glMemoryBarrier");
	if (!glMemoryBarrier) { print_msg("glMemoryBarrier not loaded"); }
	glTexStorage1D = (PFNGLTEXSTORAGE1DPROC)get_gl_func_address_name("glTexStorage1D");
	if (!glTexStorage1D) { print_msg("glTexStorage1D not loaded"); }
	glTexStorage2D = (PFNGLTEXSTORAGE2DPROC)get_gl_func_address_name("glTexStorage2D");
	if (!glTexStorage2D) { print_msg("glTexStorage2D not loaded"); }
	glTexStorage3D = (PFNGLTEXSTORAGE3DPROC)get_gl_func_address_name("glTexStorage3D");
	if (!glTexStorage3D) { print_msg("glTexStorage3D not loaded"); }
	glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)get_gl_func_address_name("glDrawTransformFeedbackInstanced");
	if (!glDrawTransformFeedbackInstanced) { print_msg("glDrawTransformFeedbackInstanced not loaded"); }
	glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)get_gl_func_address_name("glDrawTransformFeedbackStreamInstanced");
	if (!glDrawTransformFeedbackStreamInstanced) { print_msg("glDrawTransformFeedbackStreamInstanced not loaded"); }
}


void glfnlib_init_GL_VERSION_4_3(PFN_loadfunc load) {
	glClearBufferData = (PFNGLCLEARBUFFERDATAPROC)get_gl_func_address_name("glClearBufferData");
	if (!glClearBufferData) { print_msg("glClearBufferData not loaded"); }
	glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC)get_gl_func_address_name("glClearBufferSubData");
	if (!glClearBufferSubData) { print_msg("glClearBufferSubData not loaded"); }
	glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC)get_gl_func_address_name("glDispatchCompute");
	if (!glDispatchCompute) { print_msg("glDispatchCompute not loaded"); }
	glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC)get_gl_func_address_name("glDispatchComputeIndirect");
	if (!glDispatchComputeIndirect) { print_msg("glDispatchComputeIndirect not loaded"); }
	glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC)get_gl_func_address_name("glCopyImageSubData");
	if (!glCopyImageSubData) { print_msg("glCopyImageSubData not loaded"); }
	glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC)get_gl_func_address_name("glFramebufferParameteri");
	if (!glFramebufferParameteri) { print_msg("glFramebufferParameteri not loaded"); }
	glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetFramebufferParameteriv");
	if (!glGetFramebufferParameteriv) { print_msg("glGetFramebufferParameteriv not loaded"); }
	glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC)get_gl_func_address_name("glGetInternalformati64v");
	if (!glGetInternalformati64v) { print_msg("glGetInternalformati64v not loaded"); }
	glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC)get_gl_func_address_name("glInvalidateTexSubImage");
	if (!glInvalidateTexSubImage) { print_msg("glInvalidateTexSubImage not loaded"); }
	glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC)get_gl_func_address_name("glInvalidateTexImage");
	if (!glInvalidateTexImage) { print_msg("glInvalidateTexImage not loaded"); }
	glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC)get_gl_func_address_name("glInvalidateBufferSubData");
	if (!glInvalidateBufferSubData) { print_msg("glInvalidateBufferSubData not loaded"); }
	glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC)get_gl_func_address_name("glInvalidateBufferData");
	if (!glInvalidateBufferData) { print_msg("glInvalidateBufferData not loaded"); }
	glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC)get_gl_func_address_name("glInvalidateFramebuffer");
	if (!glInvalidateFramebuffer) { print_msg("glInvalidateFramebuffer not loaded"); }
	glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC)get_gl_func_address_name("glInvalidateSubFramebuffer");
	if (!glInvalidateSubFramebuffer) { print_msg("glInvalidateSubFramebuffer not loaded"); }
	glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC)get_gl_func_address_name("glMultiDrawArraysIndirect");
	if (!glMultiDrawArraysIndirect) { print_msg("glMultiDrawArraysIndirect not loaded"); }
	glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC)get_gl_func_address_name("glMultiDrawElementsIndirect");
	if (!glMultiDrawElementsIndirect) { print_msg("glMultiDrawElementsIndirect not loaded"); }
	glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC)get_gl_func_address_name("glGetProgramInterfaceiv");
	if (!glGetProgramInterfaceiv) { print_msg("glGetProgramInterfaceiv not loaded"); }
	glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC)get_gl_func_address_name("glGetProgramResourceIndex");
	if (!glGetProgramResourceIndex) { print_msg("glGetProgramResourceIndex not loaded"); }
	glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC)get_gl_func_address_name("glGetProgramResourceName");
	if (!glGetProgramResourceName) { print_msg("glGetProgramResourceName not loaded"); }
	glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC)get_gl_func_address_name("glGetProgramResourceiv");
	if (!glGetProgramResourceiv) { print_msg("glGetProgramResourceiv not loaded"); }
	glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC)get_gl_func_address_name("glGetProgramResourceLocation");
	if (!glGetProgramResourceLocation) { print_msg("glGetProgramResourceLocation not loaded"); }
	glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)get_gl_func_address_name("glGetProgramResourceLocationIndex");
	if (!glGetProgramResourceLocationIndex) { print_msg("glGetProgramResourceLocationIndex not loaded"); }
	glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC)get_gl_func_address_name("glShaderStorageBlockBinding");
	if (!glShaderStorageBlockBinding) { print_msg("glShaderStorageBlockBinding not loaded"); }
	glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC)get_gl_func_address_name("glTexBufferRange");
	if (!glTexBufferRange) { print_msg("glTexBufferRange not loaded"); }
	glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC)get_gl_func_address_name("glTexStorage2DMultisample");
	if (!glTexStorage2DMultisample) { print_msg("glTexStorage2DMultisample not loaded"); }
	glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC)get_gl_func_address_name("glTexStorage3DMultisample");
	if (!glTexStorage3DMultisample) { print_msg("glTexStorage3DMultisample not loaded"); }
	glTextureView = (PFNGLTEXTUREVIEWPROC)get_gl_func_address_name("glTextureView");
	if (!glTextureView) { print_msg("glTextureView not loaded"); }
	glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC)get_gl_func_address_name("glBindVertexBuffer");
	if (!glBindVertexBuffer) { print_msg("glBindVertexBuffer not loaded"); }
	glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC)get_gl_func_address_name("glVertexAttribFormat");
	if (!glVertexAttribFormat) { print_msg("glVertexAttribFormat not loaded"); }
	glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC)get_gl_func_address_name("glVertexAttribIFormat");
	if (!glVertexAttribIFormat) { print_msg("glVertexAttribIFormat not loaded"); }
	glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC)get_gl_func_address_name("glVertexAttribLFormat");
	if (!glVertexAttribLFormat) { print_msg("glVertexAttribLFormat not loaded"); }
	glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC)get_gl_func_address_name("glVertexAttribBinding");
	if (!glVertexAttribBinding) { print_msg("glVertexAttribBinding not loaded"); }
	glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC)get_gl_func_address_name("glVertexBindingDivisor");
	if (!glVertexBindingDivisor) { print_msg("glVertexBindingDivisor not loaded"); }
	glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC)get_gl_func_address_name("glDebugMessageControl");
	if (!glDebugMessageControl) { print_msg("glDebugMessageControl not loaded"); }
	glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC)get_gl_func_address_name("glDebugMessageInsert");
	if (!glDebugMessageInsert) { print_msg("glDebugMessageInsert not loaded"); }
	glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC)get_gl_func_address_name("glDebugMessageCallback");
	if (!glDebugMessageCallback) { print_msg("glDebugMessageCallback not loaded"); }
	glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC)get_gl_func_address_name("glGetDebugMessageLog");
	if (!glGetDebugMessageLog) { print_msg("glGetDebugMessageLog not loaded"); }
	glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC)get_gl_func_address_name("glPushDebugGroup");
	if (!glPushDebugGroup) { print_msg("glPushDebugGroup not loaded"); }
	glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC)get_gl_func_address_name("glPopDebugGroup");
	if (!glPopDebugGroup) { print_msg("glPopDebugGroup not loaded"); }
	glObjectLabel = (PFNGLOBJECTLABELPROC)get_gl_func_address_name("glObjectLabel");
	if (!glObjectLabel) { print_msg("glObjectLabel not loaded"); }
	glGetObjectLabel = (PFNGLGETOBJECTLABELPROC)get_gl_func_address_name("glGetObjectLabel");
	if (!glGetObjectLabel) { print_msg("glGetObjectLabel not loaded"); }
	glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC)get_gl_func_address_name("glObjectPtrLabel");
	if (!glObjectPtrLabel) { print_msg("glObjectPtrLabel not loaded"); }
	glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC)get_gl_func_address_name("glGetObjectPtrLabel");
	if (!glGetObjectPtrLabel) { print_msg("glGetObjectPtrLabel not loaded"); }
}


void glfnlib_init_GL_VERSION_4_4(PFN_loadfunc load) {
	glBufferStorage = (PFNGLBUFFERSTORAGEPROC)get_gl_func_address_name("glBufferStorage");
	if (!glBufferStorage) { print_msg("glBufferStorage not loaded"); }
	glClearTexImage = (PFNGLCLEARTEXIMAGEPROC)get_gl_func_address_name("glClearTexImage");
	if (!glClearTexImage) { print_msg("glClearTexImage not loaded"); }
	glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC)get_gl_func_address_name("glClearTexSubImage");
	if (!glClearTexSubImage) { print_msg("glClearTexSubImage not loaded"); }
	glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC)get_gl_func_address_name("glBindBuffersBase");
	if (!glBindBuffersBase) { print_msg("glBindBuffersBase not loaded"); }
	glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC)get_gl_func_address_name("glBindBuffersRange");
	if (!glBindBuffersRange) { print_msg("glBindBuffersRange not loaded"); }
	glBindTextures = (PFNGLBINDTEXTURESPROC)get_gl_func_address_name("glBindTextures");
	if (!glBindTextures) { print_msg("glBindTextures not loaded"); }
	glBindSamplers = (PFNGLBINDSAMPLERSPROC)get_gl_func_address_name("glBindSamplers");
	if (!glBindSamplers) { print_msg("glBindSamplers not loaded"); }
	glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC)get_gl_func_address_name("glBindImageTextures");
	if (!glBindImageTextures) { print_msg("glBindImageTextures not loaded"); }
	glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC)get_gl_func_address_name("glBindVertexBuffers");
	if (!glBindVertexBuffers) { print_msg("glBindVertexBuffers not loaded"); }
}


void glfnlib_init_GL_VERSION_4_5(PFN_loadfunc load) {
	glClipControl = (PFNGLCLIPCONTROLPROC)get_gl_func_address_name("glClipControl");
	if (!glClipControl) { print_msg("glClipControl not loaded"); }
	glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC)get_gl_func_address_name("glCreateTransformFeedbacks");
	if (!glCreateTransformFeedbacks) { print_msg("glCreateTransformFeedbacks not loaded"); }
	glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)get_gl_func_address_name("glTransformFeedbackBufferBase");
	if (!glTransformFeedbackBufferBase) { print_msg("glTransformFeedbackBufferBase not loaded"); }
	glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)get_gl_func_address_name("glTransformFeedbackBufferRange");
	if (!glTransformFeedbackBufferRange) { print_msg("glTransformFeedbackBufferRange not loaded"); }
	glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC)get_gl_func_address_name("glGetTransformFeedbackiv");
	if (!glGetTransformFeedbackiv) { print_msg("glGetTransformFeedbackiv not loaded"); }
	glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC)get_gl_func_address_name("glGetTransformFeedbacki_v");
	if (!glGetTransformFeedbacki_v) { print_msg("glGetTransformFeedbacki_v not loaded"); }
	glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC)get_gl_func_address_name("glGetTransformFeedbacki64_v");
	if (!glGetTransformFeedbacki64_v) { print_msg("glGetTransformFeedbacki64_v not loaded"); }
	glCreateBuffers = (PFNGLCREATEBUFFERSPROC)get_gl_func_address_name("glCreateBuffers");
	if (!glCreateBuffers) { print_msg("glCreateBuffers not loaded"); }
	glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC)get_gl_func_address_name("glNamedBufferStorage");
	if (!glNamedBufferStorage) { print_msg("glNamedBufferStorage not loaded"); }
	glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC)get_gl_func_address_name("glNamedBufferData");
	if (!glNamedBufferData) { print_msg("glNamedBufferData not loaded"); }
	glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC)get_gl_func_address_name("glNamedBufferSubData");
	if (!glNamedBufferSubData) { print_msg("glNamedBufferSubData not loaded"); }
	glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC)get_gl_func_address_name("glCopyNamedBufferSubData");
	if (!glCopyNamedBufferSubData) { print_msg("glCopyNamedBufferSubData not loaded"); }
	glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC)get_gl_func_address_name("glClearNamedBufferData");
	if (!glClearNamedBufferData) { print_msg("glClearNamedBufferData not loaded"); }
	glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC)get_gl_func_address_name("glClearNamedBufferSubData");
	if (!glClearNamedBufferSubData) { print_msg("glClearNamedBufferSubData not loaded"); }
	glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC)get_gl_func_address_name("glMapNamedBuffer");
	if (!glMapNamedBuffer) { print_msg("glMapNamedBuffer not loaded"); }
	glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC)get_gl_func_address_name("glMapNamedBufferRange");
	if (!glMapNamedBufferRange) { print_msg("glMapNamedBufferRange not loaded"); }
	glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC)get_gl_func_address_name("glUnmapNamedBuffer");
	if (!glUnmapNamedBuffer) { print_msg("glUnmapNamedBuffer not loaded"); }
	glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)get_gl_func_address_name("glFlushMappedNamedBufferRange");
	if (!glFlushMappedNamedBufferRange) { print_msg("glFlushMappedNamedBufferRange not loaded"); }
	glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetNamedBufferParameteriv");
	if (!glGetNamedBufferParameteriv) { print_msg("glGetNamedBufferParameteriv not loaded"); }
	glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)get_gl_func_address_name("glGetNamedBufferParameteri64v");
	if (!glGetNamedBufferParameteri64v) { print_msg("glGetNamedBufferParameteri64v not loaded"); }
	glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC)get_gl_func_address_name("glGetNamedBufferPointerv");
	if (!glGetNamedBufferPointerv) { print_msg("glGetNamedBufferPointerv not loaded"); }
	glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC)get_gl_func_address_name("glGetNamedBufferSubData");
	if (!glGetNamedBufferSubData) { print_msg("glGetNamedBufferSubData not loaded"); }
	glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC)get_gl_func_address_name("glCreateFramebuffers");
	if (!glCreateFramebuffers) { print_msg("glCreateFramebuffers not loaded"); }
	glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)get_gl_func_address_name("glNamedFramebufferRenderbuffer");
	if (!glNamedFramebufferRenderbuffer) { print_msg("glNamedFramebufferRenderbuffer not loaded"); }
	glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)get_gl_func_address_name("glNamedFramebufferParameteri");
	if (!glNamedFramebufferParameteri) { print_msg("glNamedFramebufferParameteri not loaded"); }
	glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)get_gl_func_address_name("glNamedFramebufferTexture");
	if (!glNamedFramebufferTexture) { print_msg("glNamedFramebufferTexture not loaded"); }
	glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)get_gl_func_address_name("glNamedFramebufferTextureLayer");
	if (!glNamedFramebufferTextureLayer) { print_msg("glNamedFramebufferTextureLayer not loaded"); }
	glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)get_gl_func_address_name("glNamedFramebufferDrawBuffer");
	if (!glNamedFramebufferDrawBuffer) { print_msg("glNamedFramebufferDrawBuffer not loaded"); }
	glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)get_gl_func_address_name("glNamedFramebufferDrawBuffers");
	if (!glNamedFramebufferDrawBuffers) { print_msg("glNamedFramebufferDrawBuffers not loaded"); }
	glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)get_gl_func_address_name("glNamedFramebufferReadBuffer");
	if (!glNamedFramebufferReadBuffer) { print_msg("glNamedFramebufferReadBuffer not loaded"); }
	glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)get_gl_func_address_name("glInvalidateNamedFramebufferData");
	if (!glInvalidateNamedFramebufferData) { print_msg("glInvalidateNamedFramebufferData not loaded"); }
	glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)get_gl_func_address_name("glInvalidateNamedFramebufferSubData");
	if (!glInvalidateNamedFramebufferSubData) { print_msg("glInvalidateNamedFramebufferSubData not loaded"); }
	glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)get_gl_func_address_name("glClearNamedFramebufferiv");
	if (!glClearNamedFramebufferiv) { print_msg("glClearNamedFramebufferiv not loaded"); }
	glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)get_gl_func_address_name("glClearNamedFramebufferuiv");
	if (!glClearNamedFramebufferuiv) { print_msg("glClearNamedFramebufferuiv not loaded"); }
	glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)get_gl_func_address_name("glClearNamedFramebufferfv");
	if (!glClearNamedFramebufferfv) { print_msg("glClearNamedFramebufferfv not loaded"); }
	glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)get_gl_func_address_name("glClearNamedFramebufferfi");
	if (!glClearNamedFramebufferfi) { print_msg("glClearNamedFramebufferfi not loaded"); }
	glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC)get_gl_func_address_name("glBlitNamedFramebuffer");
	if (!glBlitNamedFramebuffer) { print_msg("glBlitNamedFramebuffer not loaded"); }
	glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)get_gl_func_address_name("glCheckNamedFramebufferStatus");
	if (!glCheckNamedFramebufferStatus) { print_msg("glCheckNamedFramebufferStatus not loaded"); }
	glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetNamedFramebufferParameteriv");
	if (!glGetNamedFramebufferParameteriv) { print_msg("glGetNamedFramebufferParameteriv not loaded"); }
	glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)get_gl_func_address_name("glGetNamedFramebufferAttachmentParameteriv");
	if (!glGetNamedFramebufferAttachmentParameteriv) { print_msg("glGetNamedFramebufferAttachmentParameteriv not loaded"); }
	glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC)get_gl_func_address_name("glCreateRenderbuffers");
	if (!glCreateRenderbuffers) { print_msg("glCreateRenderbuffers not loaded"); }
	glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC)get_gl_func_address_name("glNamedRenderbufferStorage");
	if (!glNamedRenderbufferStorage) { print_msg("glNamedRenderbufferStorage not loaded"); }
	glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)get_gl_func_address_name("glNamedRenderbufferStorageMultisample");
	if (!glNamedRenderbufferStorageMultisample) { print_msg("glNamedRenderbufferStorageMultisample not loaded"); }
	glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetNamedRenderbufferParameteriv");
	if (!glGetNamedRenderbufferParameteriv) { print_msg("glGetNamedRenderbufferParameteriv not loaded"); }
	glCreateTextures = (PFNGLCREATETEXTURESPROC)get_gl_func_address_name("glCreateTextures");
	if (!glCreateTextures) { print_msg("glCreateTextures not loaded"); }
	glTextureBuffer = (PFNGLTEXTUREBUFFERPROC)get_gl_func_address_name("glTextureBuffer");
	if (!glTextureBuffer) { print_msg("glTextureBuffer not loaded"); }
	glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC)get_gl_func_address_name("glTextureBufferRange");
	if (!glTextureBufferRange) { print_msg("glTextureBufferRange not loaded"); }
	glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC)get_gl_func_address_name("glTextureStorage1D");
	if (!glTextureStorage1D) { print_msg("glTextureStorage1D not loaded"); }
	glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC)get_gl_func_address_name("glTextureStorage2D");
	if (!glTextureStorage2D) { print_msg("glTextureStorage2D not loaded"); }
	glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC)get_gl_func_address_name("glTextureStorage3D");
	if (!glTextureStorage3D) { print_msg("glTextureStorage3D not loaded"); }
	glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)get_gl_func_address_name("glTextureStorage2DMultisample");
	if (!glTextureStorage2DMultisample) { print_msg("glTextureStorage2DMultisample not loaded"); }
	glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)get_gl_func_address_name("glTextureStorage3DMultisample");
	if (!glTextureStorage3DMultisample) { print_msg("glTextureStorage3DMultisample not loaded"); }
	glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC)get_gl_func_address_name("glTextureSubImage1D");
	if (!glTextureSubImage1D) { print_msg("glTextureSubImage1D not loaded"); }
	glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC)get_gl_func_address_name("glTextureSubImage2D");
	if (!glTextureSubImage2D) { print_msg("glTextureSubImage2D not loaded"); }
	glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC)get_gl_func_address_name("glTextureSubImage3D");
	if (!glTextureSubImage3D) { print_msg("glTextureSubImage3D not loaded"); }
	glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)get_gl_func_address_name("glCompressedTextureSubImage1D");
	if (!glCompressedTextureSubImage1D) { print_msg("glCompressedTextureSubImage1D not loaded"); }
	glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)get_gl_func_address_name("glCompressedTextureSubImage2D");
	if (!glCompressedTextureSubImage2D) { print_msg("glCompressedTextureSubImage2D not loaded"); }
	glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)get_gl_func_address_name("glCompressedTextureSubImage3D");
	if (!glCompressedTextureSubImage3D) { print_msg("glCompressedTextureSubImage3D not loaded"); }
	glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC)get_gl_func_address_name("glCopyTextureSubImage1D");
	if (!glCopyTextureSubImage1D) { print_msg("glCopyTextureSubImage1D not loaded"); }
	glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC)get_gl_func_address_name("glCopyTextureSubImage2D");
	if (!glCopyTextureSubImage2D) { print_msg("glCopyTextureSubImage2D not loaded"); }
	glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC)get_gl_func_address_name("glCopyTextureSubImage3D");
	if (!glCopyTextureSubImage3D) { print_msg("glCopyTextureSubImage3D not loaded"); }
	glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC)get_gl_func_address_name("glTextureParameterf");
	if (!glTextureParameterf) { print_msg("glTextureParameterf not loaded"); }
	glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC)get_gl_func_address_name("glTextureParameterfv");
	if (!glTextureParameterfv) { print_msg("glTextureParameterfv not loaded"); }
	glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC)get_gl_func_address_name("glTextureParameteri");
	if (!glTextureParameteri) { print_msg("glTextureParameteri not loaded"); }
	glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC)get_gl_func_address_name("glTextureParameterIiv");
	if (!glTextureParameterIiv) { print_msg("glTextureParameterIiv not loaded"); }
	glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC)get_gl_func_address_name("glTextureParameterIuiv");
	if (!glTextureParameterIuiv) { print_msg("glTextureParameterIuiv not loaded"); }
	glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC)get_gl_func_address_name("glTextureParameteriv");
	if (!glTextureParameteriv) { print_msg("glTextureParameteriv not loaded"); }
	glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC)get_gl_func_address_name("glGenerateTextureMipmap");
	if (!glGenerateTextureMipmap) { print_msg("glGenerateTextureMipmap not loaded"); }
	glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC)get_gl_func_address_name("glBindTextureUnit");
	if (!glBindTextureUnit) { print_msg("glBindTextureUnit not loaded"); }
	glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC)get_gl_func_address_name("glGetTextureImage");
	if (!glGetTextureImage) { print_msg("glGetTextureImage not loaded"); }
	glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)get_gl_func_address_name("glGetCompressedTextureImage");
	if (!glGetCompressedTextureImage) { print_msg("glGetCompressedTextureImage not loaded"); }
	glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC)get_gl_func_address_name("glGetTextureLevelParameterfv");
	if (!glGetTextureLevelParameterfv) { print_msg("glGetTextureLevelParameterfv not loaded"); }
	glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC)get_gl_func_address_name("glGetTextureLevelParameteriv");
	if (!glGetTextureLevelParameteriv) { print_msg("glGetTextureLevelParameteriv not loaded"); }
	glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC)get_gl_func_address_name("glGetTextureParameterfv");
	if (!glGetTextureParameterfv) { print_msg("glGetTextureParameterfv not loaded"); }
	glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC)get_gl_func_address_name("glGetTextureParameterIiv");
	if (!glGetTextureParameterIiv) { print_msg("glGetTextureParameterIiv not loaded"); }
	glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC)get_gl_func_address_name("glGetTextureParameterIuiv");
	if (!glGetTextureParameterIuiv) { print_msg("glGetTextureParameterIuiv not loaded"); }
	glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC)get_gl_func_address_name("glGetTextureParameteriv");
	if (!glGetTextureParameteriv) { print_msg("glGetTextureParameteriv not loaded"); }
	glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC)get_gl_func_address_name("glCreateVertexArrays");
	if (!glCreateVertexArrays) { print_msg("glCreateVertexArrays not loaded"); }
	glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC)get_gl_func_address_name("glDisableVertexArrayAttrib");
	if (!glDisableVertexArrayAttrib) { print_msg("glDisableVertexArrayAttrib not loaded"); }
	glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC)get_gl_func_address_name("glEnableVertexArrayAttrib");
	if (!glEnableVertexArrayAttrib) { print_msg("glEnableVertexArrayAttrib not loaded"); }
	glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC)get_gl_func_address_name("glVertexArrayElementBuffer");
	if (!glVertexArrayElementBuffer) { print_msg("glVertexArrayElementBuffer not loaded"); }
	glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC)get_gl_func_address_name("glVertexArrayVertexBuffer");
	if (!glVertexArrayVertexBuffer) { print_msg("glVertexArrayVertexBuffer not loaded"); }
	glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC)get_gl_func_address_name("glVertexArrayVertexBuffers");
	if (!glVertexArrayVertexBuffers) { print_msg("glVertexArrayVertexBuffers not loaded"); }
	glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC)get_gl_func_address_name("glVertexArrayAttribBinding");
	if (!glVertexArrayAttribBinding) { print_msg("glVertexArrayAttribBinding not loaded"); }
	glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC)get_gl_func_address_name("glVertexArrayAttribFormat");
	if (!glVertexArrayAttribFormat) { print_msg("glVertexArrayAttribFormat not loaded"); }
	glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC)get_gl_func_address_name("glVertexArrayAttribIFormat");
	if (!glVertexArrayAttribIFormat) { print_msg("glVertexArrayAttribIFormat not loaded"); }
	glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC)get_gl_func_address_name("glVertexArrayAttribLFormat");
	if (!glVertexArrayAttribLFormat) { print_msg("glVertexArrayAttribLFormat not loaded"); }
	glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC)get_gl_func_address_name("glVertexArrayBindingDivisor");
	if (!glVertexArrayBindingDivisor) { print_msg("glVertexArrayBindingDivisor not loaded"); }
	glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC)get_gl_func_address_name("glGetVertexArrayiv");
	if (!glGetVertexArrayiv) { print_msg("glGetVertexArrayiv not loaded"); }
	glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC)get_gl_func_address_name("glGetVertexArrayIndexediv");
	if (!glGetVertexArrayIndexediv) { print_msg("glGetVertexArrayIndexediv not loaded"); }
	glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC)get_gl_func_address_name("glGetVertexArrayIndexed64iv");
	if (!glGetVertexArrayIndexed64iv) { print_msg("glGetVertexArrayIndexed64iv not loaded"); }
	glCreateSamplers = (PFNGLCREATESAMPLERSPROC)get_gl_func_address_name("glCreateSamplers");
	if (!glCreateSamplers) { print_msg("glCreateSamplers not loaded"); }
	glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC)get_gl_func_address_name("glCreateProgramPipelines");
	if (!glCreateProgramPipelines) { print_msg("glCreateProgramPipelines not loaded"); }
	glCreateQueries = (PFNGLCREATEQUERIESPROC)get_gl_func_address_name("glCreateQueries");
	if (!glCreateQueries) { print_msg("glCreateQueries not loaded"); }
	glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC)get_gl_func_address_name("glGetQueryBufferObjecti64v");
	if (!glGetQueryBufferObjecti64v) { print_msg("glGetQueryBufferObjecti64v not loaded"); }
	glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC)get_gl_func_address_name("glGetQueryBufferObjectiv");
	if (!glGetQueryBufferObjectiv) { print_msg("glGetQueryBufferObjectiv not loaded"); }
	glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC)get_gl_func_address_name("glGetQueryBufferObjectui64v");
	if (!glGetQueryBufferObjectui64v) { print_msg("glGetQueryBufferObjectui64v not loaded"); }
	glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC)get_gl_func_address_name("glGetQueryBufferObjectuiv");
	if (!glGetQueryBufferObjectuiv) { print_msg("glGetQueryBufferObjectuiv not loaded"); }
	glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC)get_gl_func_address_name("glMemoryBarrierByRegion");
	if (!glMemoryBarrierByRegion) { print_msg("glMemoryBarrierByRegion not loaded"); }
	glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC)get_gl_func_address_name("glGetTextureSubImage");
	if (!glGetTextureSubImage) { print_msg("glGetTextureSubImage not loaded"); }
	glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)get_gl_func_address_name("glGetCompressedTextureSubImage");
	if (!glGetCompressedTextureSubImage) { print_msg("glGetCompressedTextureSubImage not loaded"); }
	glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC)get_gl_func_address_name("glGetGraphicsResetStatus");
	if (!glGetGraphicsResetStatus) { print_msg("glGetGraphicsResetStatus not loaded"); }
	glGetnCompressedTexImage = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC)get_gl_func_address_name("glGetnCompressedTexImage");
	if (!glGetnCompressedTexImage) { print_msg("glGetnCompressedTexImage not loaded"); }
	glGetnTexImage = (PFNGLGETNTEXIMAGEPROC)get_gl_func_address_name("glGetnTexImage");
	if (!glGetnTexImage) { print_msg("glGetnTexImage not loaded"); }
	glGetnUniformdv = (PFNGLGETNUNIFORMDVPROC)get_gl_func_address_name("glGetnUniformdv");
	if (!glGetnUniformdv) { print_msg("glGetnUniformdv not loaded"); }
	glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC)get_gl_func_address_name("glGetnUniformfv");
	if (!glGetnUniformfv) { print_msg("glGetnUniformfv not loaded"); }
	glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC)get_gl_func_address_name("glGetnUniformiv");
	if (!glGetnUniformiv) { print_msg("glGetnUniformiv not loaded"); }
	glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC)get_gl_func_address_name("glGetnUniformuiv");
	if (!glGetnUniformuiv) { print_msg("glGetnUniformuiv not loaded"); }
	glReadnPixels = (PFNGLREADNPIXELSPROC)get_gl_func_address_name("glReadnPixels");
	if (!glReadnPixels) { print_msg("glReadnPixels not loaded"); }
	glGetnMapdv = (PFNGLGETNMAPDVPROC)get_gl_func_address_name("glGetnMapdv");
	if (!glGetnMapdv) { print_msg("glGetnMapdv not loaded"); }
	glGetnMapfv = (PFNGLGETNMAPFVPROC)get_gl_func_address_name("glGetnMapfv");
	if (!glGetnMapfv) { print_msg("glGetnMapfv not loaded"); }
	glGetnMapiv = (PFNGLGETNMAPIVPROC)get_gl_func_address_name("glGetnMapiv");
	if (!glGetnMapiv) { print_msg("glGetnMapiv not loaded"); }
	glGetnPixelMapfv = (PFNGLGETNPIXELMAPFVPROC)get_gl_func_address_name("glGetnPixelMapfv");
	if (!glGetnPixelMapfv) { print_msg("glGetnPixelMapfv not loaded"); }
	glGetnPixelMapuiv = (PFNGLGETNPIXELMAPUIVPROC)get_gl_func_address_name("glGetnPixelMapuiv");
	if (!glGetnPixelMapuiv) { print_msg("glGetnPixelMapuiv not loaded"); }
	glGetnPixelMapusv = (PFNGLGETNPIXELMAPUSVPROC)get_gl_func_address_name("glGetnPixelMapusv");
	if (!glGetnPixelMapusv) { print_msg("glGetnPixelMapusv not loaded"); }
	glGetnPolygonStipple = (PFNGLGETNPOLYGONSTIPPLEPROC)get_gl_func_address_name("glGetnPolygonStipple");
	if (!glGetnPolygonStipple) { print_msg("glGetnPolygonStipple not loaded"); }
	glGetnColorTable = (PFNGLGETNCOLORTABLEPROC)get_gl_func_address_name("glGetnColorTable");
	if (!glGetnColorTable) { print_msg("glGetnColorTable not loaded"); }
	glGetnConvolutionFilter = (PFNGLGETNCONVOLUTIONFILTERPROC)get_gl_func_address_name("glGetnConvolutionFilter");
	if (!glGetnConvolutionFilter) { print_msg("glGetnConvolutionFilter not loaded"); }
	glGetnSeparableFilter = (PFNGLGETNSEPARABLEFILTERPROC)get_gl_func_address_name("glGetnSeparableFilter");
	if (!glGetnSeparableFilter) { print_msg("glGetnSeparableFilter not loaded"); }
	glGetnHistogram = (PFNGLGETNHISTOGRAMPROC)get_gl_func_address_name("glGetnHistogram");
	if (!glGetnHistogram) { print_msg("glGetnHistogram not loaded"); }
	glGetnMinmax = (PFNGLGETNMINMAXPROC)get_gl_func_address_name("glGetnMinmax");
	if (!glGetnMinmax) { print_msg("glGetnMinmax not loaded"); }
	glTextureBarrier = (PFNGLTEXTUREBARRIERPROC)get_gl_func_address_name("glTextureBarrier");
	if (!glTextureBarrier) { print_msg("glTextureBarrier not loaded"); }
}


void glfnlib_init_GL_VERSION_4_6(PFN_loadfunc load) {
	glSpecializeShader = (PFNGLSPECIALIZESHADERPROC)get_gl_func_address_name("glSpecializeShader");
	if (!glSpecializeShader) { print_msg("glSpecializeShader not loaded"); }
	glMultiDrawArraysIndirectCount = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC)get_gl_func_address_name("glMultiDrawArraysIndirectCount");
	if (!glMultiDrawArraysIndirectCount) { print_msg("glMultiDrawArraysIndirectCount not loaded"); }
	glMultiDrawElementsIndirectCount = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC)get_gl_func_address_name("glMultiDrawElementsIndirectCount");
	if (!glMultiDrawElementsIndirectCount) { print_msg("glMultiDrawElementsIndirectCount not loaded"); }
	glPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC)get_gl_func_address_name("glPolygonOffsetClamp");
	if (!glPolygonOffsetClamp) { print_msg("glPolygonOffsetClamp not loaded"); }
}


void glfnlib_load_gl(PFN_loadfunc load) {
	glfnlib_init_GL_VERSION_1_0(load);
	glfnlib_init_GL_VERSION_1_2(load);
	glfnlib_init_GL_VERSION_1_3(load);
	glfnlib_init_GL_VERSION_1_4(load);
	glfnlib_init_GL_VERSION_1_5(load);
	glfnlib_init_GL_VERSION_2_0(load);
	glfnlib_init_GL_VERSION_2_1(load);
	glfnlib_init_GL_VERSION_3_0(load);
	glfnlib_init_GL_VERSION_3_1(load);
	glfnlib_init_GL_VERSION_3_2(load);
	glfnlib_init_GL_VERSION_3_3(load);
	glfnlib_init_GL_VERSION_4_0(load);
	glfnlib_init_GL_VERSION_4_1(load);
	glfnlib_init_GL_VERSION_4_2(load);
	glfnlib_init_GL_VERSION_4_3(load);
	glfnlib_init_GL_VERSION_4_4(load);
	glfnlib_init_GL_VERSION_4_5(load);
	glfnlib_init_GL_VERSION_4_6(load);
}
