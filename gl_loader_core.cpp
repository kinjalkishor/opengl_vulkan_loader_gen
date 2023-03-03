#include "gl_loader_core.h"

#include "../base_print.h"
#define print_msg printfln

//#define print_msg




void glfn_core_ver_1_0::init(PFN_loadfunc load) {
	fglCullFace = (PFNGLCULLFACEPROC)get_gl_func_address_name("glCullFace");
	if (!fglCullFace) { print_msg("glCullFace not loaded"); }
	fglFrontFace = (PFNGLFRONTFACEPROC)get_gl_func_address_name("glFrontFace");
	if (!fglFrontFace) { print_msg("glFrontFace not loaded"); }
	fglHint = (PFNGLHINTPROC)get_gl_func_address_name("glHint");
	if (!fglHint) { print_msg("glHint not loaded"); }
	fglLineWidth = (PFNGLLINEWIDTHPROC)get_gl_func_address_name("glLineWidth");
	if (!fglLineWidth) { print_msg("glLineWidth not loaded"); }
	fglPointSize = (PFNGLPOINTSIZEPROC)get_gl_func_address_name("glPointSize");
	if (!fglPointSize) { print_msg("glPointSize not loaded"); }
	fglPolygonMode = (PFNGLPOLYGONMODEPROC)get_gl_func_address_name("glPolygonMode");
	if (!fglPolygonMode) { print_msg("glPolygonMode not loaded"); }
	fglScissor = (PFNGLSCISSORPROC)get_gl_func_address_name("glScissor");
	if (!fglScissor) { print_msg("glScissor not loaded"); }
	fglTexParameterf = (PFNGLTEXPARAMETERFPROC)get_gl_func_address_name("glTexParameterf");
	if (!fglTexParameterf) { print_msg("glTexParameterf not loaded"); }
	fglTexParameterfv = (PFNGLTEXPARAMETERFVPROC)get_gl_func_address_name("glTexParameterfv");
	if (!fglTexParameterfv) { print_msg("glTexParameterfv not loaded"); }
	fglTexParameteri = (PFNGLTEXPARAMETERIPROC)get_gl_func_address_name("glTexParameteri");
	if (!fglTexParameteri) { print_msg("glTexParameteri not loaded"); }
	fglTexParameteriv = (PFNGLTEXPARAMETERIVPROC)get_gl_func_address_name("glTexParameteriv");
	if (!fglTexParameteriv) { print_msg("glTexParameteriv not loaded"); }
	fglTexImage1D = (PFNGLTEXIMAGE1DPROC)get_gl_func_address_name("glTexImage1D");
	if (!fglTexImage1D) { print_msg("glTexImage1D not loaded"); }
	fglTexImage2D = (PFNGLTEXIMAGE2DPROC)get_gl_func_address_name("glTexImage2D");
	if (!fglTexImage2D) { print_msg("glTexImage2D not loaded"); }
	fglDrawBuffer = (PFNGLDRAWBUFFERPROC)get_gl_func_address_name("glDrawBuffer");
	if (!fglDrawBuffer) { print_msg("glDrawBuffer not loaded"); }
	fglClear = (PFNGLCLEARPROC)get_gl_func_address_name("glClear");
	if (!fglClear) { print_msg("glClear not loaded"); }
	fglClearColor = (PFNGLCLEARCOLORPROC)get_gl_func_address_name("glClearColor");
	if (!fglClearColor) { print_msg("glClearColor not loaded"); }
	fglClearStencil = (PFNGLCLEARSTENCILPROC)get_gl_func_address_name("glClearStencil");
	if (!fglClearStencil) { print_msg("glClearStencil not loaded"); }
	fglClearDepth = (PFNGLCLEARDEPTHPROC)get_gl_func_address_name("glClearDepth");
	if (!fglClearDepth) { print_msg("glClearDepth not loaded"); }
	fglStencilMask = (PFNGLSTENCILMASKPROC)get_gl_func_address_name("glStencilMask");
	if (!fglStencilMask) { print_msg("glStencilMask not loaded"); }
	fglColorMask = (PFNGLCOLORMASKPROC)get_gl_func_address_name("glColorMask");
	if (!fglColorMask) { print_msg("glColorMask not loaded"); }
	fglDepthMask = (PFNGLDEPTHMASKPROC)get_gl_func_address_name("glDepthMask");
	if (!fglDepthMask) { print_msg("glDepthMask not loaded"); }
	fglDisable = (PFNGLDISABLEPROC)get_gl_func_address_name("glDisable");
	if (!fglDisable) { print_msg("glDisable not loaded"); }
	fglEnable = (PFNGLENABLEPROC)get_gl_func_address_name("glEnable");
	if (!fglEnable) { print_msg("glEnable not loaded"); }
	fglFinish = (PFNGLFINISHPROC)get_gl_func_address_name("glFinish");
	if (!fglFinish) { print_msg("glFinish not loaded"); }
	fglFlush = (PFNGLFLUSHPROC)get_gl_func_address_name("glFlush");
	if (!fglFlush) { print_msg("glFlush not loaded"); }
	fglBlendFunc = (PFNGLBLENDFUNCPROC)get_gl_func_address_name("glBlendFunc");
	if (!fglBlendFunc) { print_msg("glBlendFunc not loaded"); }
	fglLogicOp = (PFNGLLOGICOPPROC)get_gl_func_address_name("glLogicOp");
	if (!fglLogicOp) { print_msg("glLogicOp not loaded"); }
	fglStencilFunc = (PFNGLSTENCILFUNCPROC)get_gl_func_address_name("glStencilFunc");
	if (!fglStencilFunc) { print_msg("glStencilFunc not loaded"); }
	fglStencilOp = (PFNGLSTENCILOPPROC)get_gl_func_address_name("glStencilOp");
	if (!fglStencilOp) { print_msg("glStencilOp not loaded"); }
	fglDepthFunc = (PFNGLDEPTHFUNCPROC)get_gl_func_address_name("glDepthFunc");
	if (!fglDepthFunc) { print_msg("glDepthFunc not loaded"); }
	fglPixelStoref = (PFNGLPIXELSTOREFPROC)get_gl_func_address_name("glPixelStoref");
	if (!fglPixelStoref) { print_msg("glPixelStoref not loaded"); }
	fglPixelStorei = (PFNGLPIXELSTOREIPROC)get_gl_func_address_name("glPixelStorei");
	if (!fglPixelStorei) { print_msg("glPixelStorei not loaded"); }
	fglReadBuffer = (PFNGLREADBUFFERPROC)get_gl_func_address_name("glReadBuffer");
	if (!fglReadBuffer) { print_msg("glReadBuffer not loaded"); }
	fglReadPixels = (PFNGLREADPIXELSPROC)get_gl_func_address_name("glReadPixels");
	if (!fglReadPixels) { print_msg("glReadPixels not loaded"); }
	fglGetBooleanv = (PFNGLGETBOOLEANVPROC)get_gl_func_address_name("glGetBooleanv");
	if (!fglGetBooleanv) { print_msg("glGetBooleanv not loaded"); }
	fglGetDoublev = (PFNGLGETDOUBLEVPROC)get_gl_func_address_name("glGetDoublev");
	if (!fglGetDoublev) { print_msg("glGetDoublev not loaded"); }
	fglGetError = (PFNGLGETERRORPROC)get_gl_func_address_name("glGetError");
	if (!fglGetError) { print_msg("glGetError not loaded"); }
	fglGetFloatv = (PFNGLGETFLOATVPROC)get_gl_func_address_name("glGetFloatv");
	if (!fglGetFloatv) { print_msg("glGetFloatv not loaded"); }
	fglGetIntegerv = (PFNGLGETINTEGERVPROC)get_gl_func_address_name("glGetIntegerv");
	if (!fglGetIntegerv) { print_msg("glGetIntegerv not loaded"); }
	fglGetString = (PFNGLGETSTRINGPROC)get_gl_func_address_name("glGetString");
	if (!fglGetString) { print_msg("glGetString not loaded"); }
	fglGetTexImage = (PFNGLGETTEXIMAGEPROC)get_gl_func_address_name("glGetTexImage");
	if (!fglGetTexImage) { print_msg("glGetTexImage not loaded"); }
	fglGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC)get_gl_func_address_name("glGetTexParameterfv");
	if (!fglGetTexParameterfv) { print_msg("glGetTexParameterfv not loaded"); }
	fglGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC)get_gl_func_address_name("glGetTexParameteriv");
	if (!fglGetTexParameteriv) { print_msg("glGetTexParameteriv not loaded"); }
	fglGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC)get_gl_func_address_name("glGetTexLevelParameterfv");
	if (!fglGetTexLevelParameterfv) { print_msg("glGetTexLevelParameterfv not loaded"); }
	fglGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC)get_gl_func_address_name("glGetTexLevelParameteriv");
	if (!fglGetTexLevelParameteriv) { print_msg("glGetTexLevelParameteriv not loaded"); }
	fglIsEnabled = (PFNGLISENABLEDPROC)get_gl_func_address_name("glIsEnabled");
	if (!fglIsEnabled) { print_msg("glIsEnabled not loaded"); }
	fglDepthRange = (PFNGLDEPTHRANGEPROC)get_gl_func_address_name("glDepthRange");
	if (!fglDepthRange) { print_msg("glDepthRange not loaded"); }
	fglViewport = (PFNGLVIEWPORTPROC)get_gl_func_address_name("glViewport");
	if (!fglViewport) { print_msg("glViewport not loaded"); }
}



void glfn_core_ver_1_1::init(PFN_loadfunc load) {
	glfn_core_ver_1_0::init(load);

	fglDrawArrays = (PFNGLDRAWARRAYSPROC)get_gl_func_address_name("glDrawArrays");
	if (!fglDrawArrays) { print_msg("glDrawArrays not loaded"); }
	fglDrawElements = (PFNGLDRAWELEMENTSPROC)get_gl_func_address_name("glDrawElements");
	if (!fglDrawElements) { print_msg("glDrawElements not loaded"); }
	fglGetPointerv = (PFNGLGETPOINTERVPROC)get_gl_func_address_name("glGetPointerv");
	if (!fglGetPointerv) { print_msg("glGetPointerv not loaded"); }
	fglPolygonOffset = (PFNGLPOLYGONOFFSETPROC)get_gl_func_address_name("glPolygonOffset");
	if (!fglPolygonOffset) { print_msg("glPolygonOffset not loaded"); }
	fglCopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC)get_gl_func_address_name("glCopyTexImage1D");
	if (!fglCopyTexImage1D) { print_msg("glCopyTexImage1D not loaded"); }
	fglCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC)get_gl_func_address_name("glCopyTexImage2D");
	if (!fglCopyTexImage2D) { print_msg("glCopyTexImage2D not loaded"); }
	fglCopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC)get_gl_func_address_name("glCopyTexSubImage1D");
	if (!fglCopyTexSubImage1D) { print_msg("glCopyTexSubImage1D not loaded"); }
	fglCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC)get_gl_func_address_name("glCopyTexSubImage2D");
	if (!fglCopyTexSubImage2D) { print_msg("glCopyTexSubImage2D not loaded"); }
	fglTexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC)get_gl_func_address_name("glTexSubImage1D");
	if (!fglTexSubImage1D) { print_msg("glTexSubImage1D not loaded"); }
	fglTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC)get_gl_func_address_name("glTexSubImage2D");
	if (!fglTexSubImage2D) { print_msg("glTexSubImage2D not loaded"); }
	fglBindTexture = (PFNGLBINDTEXTUREPROC)get_gl_func_address_name("glBindTexture");
	if (!fglBindTexture) { print_msg("glBindTexture not loaded"); }
	fglDeleteTextures = (PFNGLDELETETEXTURESPROC)get_gl_func_address_name("glDeleteTextures");
	if (!fglDeleteTextures) { print_msg("glDeleteTextures not loaded"); }
	fglGenTextures = (PFNGLGENTEXTURESPROC)get_gl_func_address_name("glGenTextures");
	if (!fglGenTextures) { print_msg("glGenTextures not loaded"); }
	fglIsTexture = (PFNGLISTEXTUREPROC)get_gl_func_address_name("glIsTexture");
	if (!fglIsTexture) { print_msg("glIsTexture not loaded"); }
}



void glfn_core_ver_1_2::init(PFN_loadfunc load) {
	glfn_core_ver_1_1::init(load);

	fglDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)get_gl_func_address_name("glDrawRangeElements");
	if (!fglDrawRangeElements) { print_msg("glDrawRangeElements not loaded"); }
	fglTexImage3D = (PFNGLTEXIMAGE3DPROC)get_gl_func_address_name("glTexImage3D");
	if (!fglTexImage3D) { print_msg("glTexImage3D not loaded"); }
	fglTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)get_gl_func_address_name("glTexSubImage3D");
	if (!fglTexSubImage3D) { print_msg("glTexSubImage3D not loaded"); }
	fglCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)get_gl_func_address_name("glCopyTexSubImage3D");
	if (!fglCopyTexSubImage3D) { print_msg("glCopyTexSubImage3D not loaded"); }
}



void glfn_core_ver_1_3::init(PFN_loadfunc load) {
	glfn_core_ver_1_2::init(load);

	fglActiveTexture = (PFNGLACTIVETEXTUREPROC)get_gl_func_address_name("glActiveTexture");
	if (!fglActiveTexture) { print_msg("glActiveTexture not loaded"); }
	fglSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)get_gl_func_address_name("glSampleCoverage");
	if (!fglSampleCoverage) { print_msg("glSampleCoverage not loaded"); }
	fglCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)get_gl_func_address_name("glCompressedTexImage3D");
	if (!fglCompressedTexImage3D) { print_msg("glCompressedTexImage3D not loaded"); }
	fglCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)get_gl_func_address_name("glCompressedTexImage2D");
	if (!fglCompressedTexImage2D) { print_msg("glCompressedTexImage2D not loaded"); }
	fglCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)get_gl_func_address_name("glCompressedTexImage1D");
	if (!fglCompressedTexImage1D) { print_msg("glCompressedTexImage1D not loaded"); }
	fglCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)get_gl_func_address_name("glCompressedTexSubImage3D");
	if (!fglCompressedTexSubImage3D) { print_msg("glCompressedTexSubImage3D not loaded"); }
	fglCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)get_gl_func_address_name("glCompressedTexSubImage2D");
	if (!fglCompressedTexSubImage2D) { print_msg("glCompressedTexSubImage2D not loaded"); }
	fglCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)get_gl_func_address_name("glCompressedTexSubImage1D");
	if (!fglCompressedTexSubImage1D) { print_msg("glCompressedTexSubImage1D not loaded"); }
	fglGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)get_gl_func_address_name("glGetCompressedTexImage");
	if (!fglGetCompressedTexImage) { print_msg("glGetCompressedTexImage not loaded"); }
}



void glfn_core_ver_1_4::init(PFN_loadfunc load) {
	glfn_core_ver_1_3::init(load);

	fglBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)get_gl_func_address_name("glBlendFuncSeparate");
	if (!fglBlendFuncSeparate) { print_msg("glBlendFuncSeparate not loaded"); }
	fglMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)get_gl_func_address_name("glMultiDrawArrays");
	if (!fglMultiDrawArrays) { print_msg("glMultiDrawArrays not loaded"); }
	fglMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)get_gl_func_address_name("glMultiDrawElements");
	if (!fglMultiDrawElements) { print_msg("glMultiDrawElements not loaded"); }
	fglPointParameterf = (PFNGLPOINTPARAMETERFPROC)get_gl_func_address_name("glPointParameterf");
	if (!fglPointParameterf) { print_msg("glPointParameterf not loaded"); }
	fglPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)get_gl_func_address_name("glPointParameterfv");
	if (!fglPointParameterfv) { print_msg("glPointParameterfv not loaded"); }
	fglPointParameteri = (PFNGLPOINTPARAMETERIPROC)get_gl_func_address_name("glPointParameteri");
	if (!fglPointParameteri) { print_msg("glPointParameteri not loaded"); }
	fglPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)get_gl_func_address_name("glPointParameteriv");
	if (!fglPointParameteriv) { print_msg("glPointParameteriv not loaded"); }
	fglBlendColor = (PFNGLBLENDCOLORPROC)get_gl_func_address_name("glBlendColor");
	if (!fglBlendColor) { print_msg("glBlendColor not loaded"); }
	fglBlendEquation = (PFNGLBLENDEQUATIONPROC)get_gl_func_address_name("glBlendEquation");
	if (!fglBlendEquation) { print_msg("glBlendEquation not loaded"); }
}



void glfn_core_ver_1_5::init(PFN_loadfunc load) {
	glfn_core_ver_1_4::init(load);

	fglGenQueries = (PFNGLGENQUERIESPROC)get_gl_func_address_name("glGenQueries");
	if (!fglGenQueries) { print_msg("glGenQueries not loaded"); }
	fglDeleteQueries = (PFNGLDELETEQUERIESPROC)get_gl_func_address_name("glDeleteQueries");
	if (!fglDeleteQueries) { print_msg("glDeleteQueries not loaded"); }
	fglIsQuery = (PFNGLISQUERYPROC)get_gl_func_address_name("glIsQuery");
	if (!fglIsQuery) { print_msg("glIsQuery not loaded"); }
	fglBeginQuery = (PFNGLBEGINQUERYPROC)get_gl_func_address_name("glBeginQuery");
	if (!fglBeginQuery) { print_msg("glBeginQuery not loaded"); }
	fglEndQuery = (PFNGLENDQUERYPROC)get_gl_func_address_name("glEndQuery");
	if (!fglEndQuery) { print_msg("glEndQuery not loaded"); }
	fglGetQueryiv = (PFNGLGETQUERYIVPROC)get_gl_func_address_name("glGetQueryiv");
	if (!fglGetQueryiv) { print_msg("glGetQueryiv not loaded"); }
	fglGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)get_gl_func_address_name("glGetQueryObjectiv");
	if (!fglGetQueryObjectiv) { print_msg("glGetQueryObjectiv not loaded"); }
	fglGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)get_gl_func_address_name("glGetQueryObjectuiv");
	if (!fglGetQueryObjectuiv) { print_msg("glGetQueryObjectuiv not loaded"); }
	fglBindBuffer = (PFNGLBINDBUFFERPROC)get_gl_func_address_name("glBindBuffer");
	if (!fglBindBuffer) { print_msg("glBindBuffer not loaded"); }
	fglDeleteBuffers = (PFNGLDELETEBUFFERSPROC)get_gl_func_address_name("glDeleteBuffers");
	if (!fglDeleteBuffers) { print_msg("glDeleteBuffers not loaded"); }
	fglGenBuffers = (PFNGLGENBUFFERSPROC)get_gl_func_address_name("glGenBuffers");
	if (!fglGenBuffers) { print_msg("glGenBuffers not loaded"); }
	fglIsBuffer = (PFNGLISBUFFERPROC)get_gl_func_address_name("glIsBuffer");
	if (!fglIsBuffer) { print_msg("glIsBuffer not loaded"); }
	fglBufferData = (PFNGLBUFFERDATAPROC)get_gl_func_address_name("glBufferData");
	if (!fglBufferData) { print_msg("glBufferData not loaded"); }
	fglBufferSubData = (PFNGLBUFFERSUBDATAPROC)get_gl_func_address_name("glBufferSubData");
	if (!fglBufferSubData) { print_msg("glBufferSubData not loaded"); }
	fglGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)get_gl_func_address_name("glGetBufferSubData");
	if (!fglGetBufferSubData) { print_msg("glGetBufferSubData not loaded"); }
	fglMapBuffer = (PFNGLMAPBUFFERPROC)get_gl_func_address_name("glMapBuffer");
	if (!fglMapBuffer) { print_msg("glMapBuffer not loaded"); }
	fglUnmapBuffer = (PFNGLUNMAPBUFFERPROC)get_gl_func_address_name("glUnmapBuffer");
	if (!fglUnmapBuffer) { print_msg("glUnmapBuffer not loaded"); }
	fglGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetBufferParameteriv");
	if (!fglGetBufferParameteriv) { print_msg("glGetBufferParameteriv not loaded"); }
	fglGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)get_gl_func_address_name("glGetBufferPointerv");
	if (!fglGetBufferPointerv) { print_msg("glGetBufferPointerv not loaded"); }
}



void glfn_core_ver_2_0::init(PFN_loadfunc load) {
	glfn_core_ver_1_5::init(load);

	fglBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)get_gl_func_address_name("glBlendEquationSeparate");
	if (!fglBlendEquationSeparate) { print_msg("glBlendEquationSeparate not loaded"); }
	fglDrawBuffers = (PFNGLDRAWBUFFERSPROC)get_gl_func_address_name("glDrawBuffers");
	if (!fglDrawBuffers) { print_msg("glDrawBuffers not loaded"); }
	fglStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)get_gl_func_address_name("glStencilOpSeparate");
	if (!fglStencilOpSeparate) { print_msg("glStencilOpSeparate not loaded"); }
	fglStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)get_gl_func_address_name("glStencilFuncSeparate");
	if (!fglStencilFuncSeparate) { print_msg("glStencilFuncSeparate not loaded"); }
	fglStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)get_gl_func_address_name("glStencilMaskSeparate");
	if (!fglStencilMaskSeparate) { print_msg("glStencilMaskSeparate not loaded"); }
	fglAttachShader = (PFNGLATTACHSHADERPROC)get_gl_func_address_name("glAttachShader");
	if (!fglAttachShader) { print_msg("glAttachShader not loaded"); }
	fglBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)get_gl_func_address_name("glBindAttribLocation");
	if (!fglBindAttribLocation) { print_msg("glBindAttribLocation not loaded"); }
	fglCompileShader = (PFNGLCOMPILESHADERPROC)get_gl_func_address_name("glCompileShader");
	if (!fglCompileShader) { print_msg("glCompileShader not loaded"); }
	fglCreateProgram = (PFNGLCREATEPROGRAMPROC)get_gl_func_address_name("glCreateProgram");
	if (!fglCreateProgram) { print_msg("glCreateProgram not loaded"); }
	fglCreateShader = (PFNGLCREATESHADERPROC)get_gl_func_address_name("glCreateShader");
	if (!fglCreateShader) { print_msg("glCreateShader not loaded"); }
	fglDeleteProgram = (PFNGLDELETEPROGRAMPROC)get_gl_func_address_name("glDeleteProgram");
	if (!fglDeleteProgram) { print_msg("glDeleteProgram not loaded"); }
	fglDeleteShader = (PFNGLDELETESHADERPROC)get_gl_func_address_name("glDeleteShader");
	if (!fglDeleteShader) { print_msg("glDeleteShader not loaded"); }
	fglDetachShader = (PFNGLDETACHSHADERPROC)get_gl_func_address_name("glDetachShader");
	if (!fglDetachShader) { print_msg("glDetachShader not loaded"); }
	fglDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)get_gl_func_address_name("glDisableVertexAttribArray");
	if (!fglDisableVertexAttribArray) { print_msg("glDisableVertexAttribArray not loaded"); }
	fglEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)get_gl_func_address_name("glEnableVertexAttribArray");
	if (!fglEnableVertexAttribArray) { print_msg("glEnableVertexAttribArray not loaded"); }
	fglGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)get_gl_func_address_name("glGetActiveAttrib");
	if (!fglGetActiveAttrib) { print_msg("glGetActiveAttrib not loaded"); }
	fglGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)get_gl_func_address_name("glGetActiveUniform");
	if (!fglGetActiveUniform) { print_msg("glGetActiveUniform not loaded"); }
	fglGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)get_gl_func_address_name("glGetAttachedShaders");
	if (!fglGetAttachedShaders) { print_msg("glGetAttachedShaders not loaded"); }
	fglGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)get_gl_func_address_name("glGetAttribLocation");
	if (!fglGetAttribLocation) { print_msg("glGetAttribLocation not loaded"); }
	fglGetProgramiv = (PFNGLGETPROGRAMIVPROC)get_gl_func_address_name("glGetProgramiv");
	if (!fglGetProgramiv) { print_msg("glGetProgramiv not loaded"); }
	fglGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)get_gl_func_address_name("glGetProgramInfoLog");
	if (!fglGetProgramInfoLog) { print_msg("glGetProgramInfoLog not loaded"); }
	fglGetShaderiv = (PFNGLGETSHADERIVPROC)get_gl_func_address_name("glGetShaderiv");
	if (!fglGetShaderiv) { print_msg("glGetShaderiv not loaded"); }
	fglGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)get_gl_func_address_name("glGetShaderInfoLog");
	if (!fglGetShaderInfoLog) { print_msg("glGetShaderInfoLog not loaded"); }
	fglGetShaderSource = (PFNGLGETSHADERSOURCEPROC)get_gl_func_address_name("glGetShaderSource");
	if (!fglGetShaderSource) { print_msg("glGetShaderSource not loaded"); }
	fglGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)get_gl_func_address_name("glGetUniformLocation");
	if (!fglGetUniformLocation) { print_msg("glGetUniformLocation not loaded"); }
	fglGetUniformfv = (PFNGLGETUNIFORMFVPROC)get_gl_func_address_name("glGetUniformfv");
	if (!fglGetUniformfv) { print_msg("glGetUniformfv not loaded"); }
	fglGetUniformiv = (PFNGLGETUNIFORMIVPROC)get_gl_func_address_name("glGetUniformiv");
	if (!fglGetUniformiv) { print_msg("glGetUniformiv not loaded"); }
	fglGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)get_gl_func_address_name("glGetVertexAttribdv");
	if (!fglGetVertexAttribdv) { print_msg("glGetVertexAttribdv not loaded"); }
	fglGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)get_gl_func_address_name("glGetVertexAttribfv");
	if (!fglGetVertexAttribfv) { print_msg("glGetVertexAttribfv not loaded"); }
	fglGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)get_gl_func_address_name("glGetVertexAttribiv");
	if (!fglGetVertexAttribiv) { print_msg("glGetVertexAttribiv not loaded"); }
	fglGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)get_gl_func_address_name("glGetVertexAttribPointerv");
	if (!fglGetVertexAttribPointerv) { print_msg("glGetVertexAttribPointerv not loaded"); }
	fglIsProgram = (PFNGLISPROGRAMPROC)get_gl_func_address_name("glIsProgram");
	if (!fglIsProgram) { print_msg("glIsProgram not loaded"); }
	fglIsShader = (PFNGLISSHADERPROC)get_gl_func_address_name("glIsShader");
	if (!fglIsShader) { print_msg("glIsShader not loaded"); }
	fglLinkProgram = (PFNGLLINKPROGRAMPROC)get_gl_func_address_name("glLinkProgram");
	if (!fglLinkProgram) { print_msg("glLinkProgram not loaded"); }
	fglShaderSource = (PFNGLSHADERSOURCEPROC)get_gl_func_address_name("glShaderSource");
	if (!fglShaderSource) { print_msg("glShaderSource not loaded"); }
	fglUseProgram = (PFNGLUSEPROGRAMPROC)get_gl_func_address_name("glUseProgram");
	if (!fglUseProgram) { print_msg("glUseProgram not loaded"); }
	fglUniform1f = (PFNGLUNIFORM1FPROC)get_gl_func_address_name("glUniform1f");
	if (!fglUniform1f) { print_msg("glUniform1f not loaded"); }
	fglUniform2f = (PFNGLUNIFORM2FPROC)get_gl_func_address_name("glUniform2f");
	if (!fglUniform2f) { print_msg("glUniform2f not loaded"); }
	fglUniform3f = (PFNGLUNIFORM3FPROC)get_gl_func_address_name("glUniform3f");
	if (!fglUniform3f) { print_msg("glUniform3f not loaded"); }
	fglUniform4f = (PFNGLUNIFORM4FPROC)get_gl_func_address_name("glUniform4f");
	if (!fglUniform4f) { print_msg("glUniform4f not loaded"); }
	fglUniform1i = (PFNGLUNIFORM1IPROC)get_gl_func_address_name("glUniform1i");
	if (!fglUniform1i) { print_msg("glUniform1i not loaded"); }
	fglUniform2i = (PFNGLUNIFORM2IPROC)get_gl_func_address_name("glUniform2i");
	if (!fglUniform2i) { print_msg("glUniform2i not loaded"); }
	fglUniform3i = (PFNGLUNIFORM3IPROC)get_gl_func_address_name("glUniform3i");
	if (!fglUniform3i) { print_msg("glUniform3i not loaded"); }
	fglUniform4i = (PFNGLUNIFORM4IPROC)get_gl_func_address_name("glUniform4i");
	if (!fglUniform4i) { print_msg("glUniform4i not loaded"); }
	fglUniform1fv = (PFNGLUNIFORM1FVPROC)get_gl_func_address_name("glUniform1fv");
	if (!fglUniform1fv) { print_msg("glUniform1fv not loaded"); }
	fglUniform2fv = (PFNGLUNIFORM2FVPROC)get_gl_func_address_name("glUniform2fv");
	if (!fglUniform2fv) { print_msg("glUniform2fv not loaded"); }
	fglUniform3fv = (PFNGLUNIFORM3FVPROC)get_gl_func_address_name("glUniform3fv");
	if (!fglUniform3fv) { print_msg("glUniform3fv not loaded"); }
	fglUniform4fv = (PFNGLUNIFORM4FVPROC)get_gl_func_address_name("glUniform4fv");
	if (!fglUniform4fv) { print_msg("glUniform4fv not loaded"); }
	fglUniform1iv = (PFNGLUNIFORM1IVPROC)get_gl_func_address_name("glUniform1iv");
	if (!fglUniform1iv) { print_msg("glUniform1iv not loaded"); }
	fglUniform2iv = (PFNGLUNIFORM2IVPROC)get_gl_func_address_name("glUniform2iv");
	if (!fglUniform2iv) { print_msg("glUniform2iv not loaded"); }
	fglUniform3iv = (PFNGLUNIFORM3IVPROC)get_gl_func_address_name("glUniform3iv");
	if (!fglUniform3iv) { print_msg("glUniform3iv not loaded"); }
	fglUniform4iv = (PFNGLUNIFORM4IVPROC)get_gl_func_address_name("glUniform4iv");
	if (!fglUniform4iv) { print_msg("glUniform4iv not loaded"); }
	fglUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)get_gl_func_address_name("glUniformMatrix2fv");
	if (!fglUniformMatrix2fv) { print_msg("glUniformMatrix2fv not loaded"); }
	fglUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)get_gl_func_address_name("glUniformMatrix3fv");
	if (!fglUniformMatrix3fv) { print_msg("glUniformMatrix3fv not loaded"); }
	fglUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)get_gl_func_address_name("glUniformMatrix4fv");
	if (!fglUniformMatrix4fv) { print_msg("glUniformMatrix4fv not loaded"); }
	fglValidateProgram = (PFNGLVALIDATEPROGRAMPROC)get_gl_func_address_name("glValidateProgram");
	if (!fglValidateProgram) { print_msg("glValidateProgram not loaded"); }
	fglVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)get_gl_func_address_name("glVertexAttrib1d");
	if (!fglVertexAttrib1d) { print_msg("glVertexAttrib1d not loaded"); }
	fglVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)get_gl_func_address_name("glVertexAttrib1dv");
	if (!fglVertexAttrib1dv) { print_msg("glVertexAttrib1dv not loaded"); }
	fglVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)get_gl_func_address_name("glVertexAttrib1f");
	if (!fglVertexAttrib1f) { print_msg("glVertexAttrib1f not loaded"); }
	fglVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)get_gl_func_address_name("glVertexAttrib1fv");
	if (!fglVertexAttrib1fv) { print_msg("glVertexAttrib1fv not loaded"); }
	fglVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)get_gl_func_address_name("glVertexAttrib1s");
	if (!fglVertexAttrib1s) { print_msg("glVertexAttrib1s not loaded"); }
	fglVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)get_gl_func_address_name("glVertexAttrib1sv");
	if (!fglVertexAttrib1sv) { print_msg("glVertexAttrib1sv not loaded"); }
	fglVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)get_gl_func_address_name("glVertexAttrib2d");
	if (!fglVertexAttrib2d) { print_msg("glVertexAttrib2d not loaded"); }
	fglVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)get_gl_func_address_name("glVertexAttrib2dv");
	if (!fglVertexAttrib2dv) { print_msg("glVertexAttrib2dv not loaded"); }
	fglVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)get_gl_func_address_name("glVertexAttrib2f");
	if (!fglVertexAttrib2f) { print_msg("glVertexAttrib2f not loaded"); }
	fglVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)get_gl_func_address_name("glVertexAttrib2fv");
	if (!fglVertexAttrib2fv) { print_msg("glVertexAttrib2fv not loaded"); }
	fglVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)get_gl_func_address_name("glVertexAttrib2s");
	if (!fglVertexAttrib2s) { print_msg("glVertexAttrib2s not loaded"); }
	fglVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)get_gl_func_address_name("glVertexAttrib2sv");
	if (!fglVertexAttrib2sv) { print_msg("glVertexAttrib2sv not loaded"); }
	fglVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)get_gl_func_address_name("glVertexAttrib3d");
	if (!fglVertexAttrib3d) { print_msg("glVertexAttrib3d not loaded"); }
	fglVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)get_gl_func_address_name("glVertexAttrib3dv");
	if (!fglVertexAttrib3dv) { print_msg("glVertexAttrib3dv not loaded"); }
	fglVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)get_gl_func_address_name("glVertexAttrib3f");
	if (!fglVertexAttrib3f) { print_msg("glVertexAttrib3f not loaded"); }
	fglVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)get_gl_func_address_name("glVertexAttrib3fv");
	if (!fglVertexAttrib3fv) { print_msg("glVertexAttrib3fv not loaded"); }
	fglVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)get_gl_func_address_name("glVertexAttrib3s");
	if (!fglVertexAttrib3s) { print_msg("glVertexAttrib3s not loaded"); }
	fglVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)get_gl_func_address_name("glVertexAttrib3sv");
	if (!fglVertexAttrib3sv) { print_msg("glVertexAttrib3sv not loaded"); }
	fglVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)get_gl_func_address_name("glVertexAttrib4Nbv");
	if (!fglVertexAttrib4Nbv) { print_msg("glVertexAttrib4Nbv not loaded"); }
	fglVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)get_gl_func_address_name("glVertexAttrib4Niv");
	if (!fglVertexAttrib4Niv) { print_msg("glVertexAttrib4Niv not loaded"); }
	fglVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)get_gl_func_address_name("glVertexAttrib4Nsv");
	if (!fglVertexAttrib4Nsv) { print_msg("glVertexAttrib4Nsv not loaded"); }
	fglVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)get_gl_func_address_name("glVertexAttrib4Nub");
	if (!fglVertexAttrib4Nub) { print_msg("glVertexAttrib4Nub not loaded"); }
	fglVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)get_gl_func_address_name("glVertexAttrib4Nubv");
	if (!fglVertexAttrib4Nubv) { print_msg("glVertexAttrib4Nubv not loaded"); }
	fglVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)get_gl_func_address_name("glVertexAttrib4Nuiv");
	if (!fglVertexAttrib4Nuiv) { print_msg("glVertexAttrib4Nuiv not loaded"); }
	fglVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)get_gl_func_address_name("glVertexAttrib4Nusv");
	if (!fglVertexAttrib4Nusv) { print_msg("glVertexAttrib4Nusv not loaded"); }
	fglVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)get_gl_func_address_name("glVertexAttrib4bv");
	if (!fglVertexAttrib4bv) { print_msg("glVertexAttrib4bv not loaded"); }
	fglVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)get_gl_func_address_name("glVertexAttrib4d");
	if (!fglVertexAttrib4d) { print_msg("glVertexAttrib4d not loaded"); }
	fglVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)get_gl_func_address_name("glVertexAttrib4dv");
	if (!fglVertexAttrib4dv) { print_msg("glVertexAttrib4dv not loaded"); }
	fglVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)get_gl_func_address_name("glVertexAttrib4f");
	if (!fglVertexAttrib4f) { print_msg("glVertexAttrib4f not loaded"); }
	fglVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)get_gl_func_address_name("glVertexAttrib4fv");
	if (!fglVertexAttrib4fv) { print_msg("glVertexAttrib4fv not loaded"); }
	fglVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)get_gl_func_address_name("glVertexAttrib4iv");
	if (!fglVertexAttrib4iv) { print_msg("glVertexAttrib4iv not loaded"); }
	fglVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)get_gl_func_address_name("glVertexAttrib4s");
	if (!fglVertexAttrib4s) { print_msg("glVertexAttrib4s not loaded"); }
	fglVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)get_gl_func_address_name("glVertexAttrib4sv");
	if (!fglVertexAttrib4sv) { print_msg("glVertexAttrib4sv not loaded"); }
	fglVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)get_gl_func_address_name("glVertexAttrib4ubv");
	if (!fglVertexAttrib4ubv) { print_msg("glVertexAttrib4ubv not loaded"); }
	fglVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)get_gl_func_address_name("glVertexAttrib4uiv");
	if (!fglVertexAttrib4uiv) { print_msg("glVertexAttrib4uiv not loaded"); }
	fglVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)get_gl_func_address_name("glVertexAttrib4usv");
	if (!fglVertexAttrib4usv) { print_msg("glVertexAttrib4usv not loaded"); }
	fglVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)get_gl_func_address_name("glVertexAttribPointer");
	if (!fglVertexAttribPointer) { print_msg("glVertexAttribPointer not loaded"); }
}



void glfn_core_ver_2_1::init(PFN_loadfunc load) {
	glfn_core_ver_2_0::init(load);

	fglUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)get_gl_func_address_name("glUniformMatrix2x3fv");
	if (!fglUniformMatrix2x3fv) { print_msg("glUniformMatrix2x3fv not loaded"); }
	fglUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)get_gl_func_address_name("glUniformMatrix3x2fv");
	if (!fglUniformMatrix3x2fv) { print_msg("glUniformMatrix3x2fv not loaded"); }
	fglUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)get_gl_func_address_name("glUniformMatrix2x4fv");
	if (!fglUniformMatrix2x4fv) { print_msg("glUniformMatrix2x4fv not loaded"); }
	fglUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)get_gl_func_address_name("glUniformMatrix4x2fv");
	if (!fglUniformMatrix4x2fv) { print_msg("glUniformMatrix4x2fv not loaded"); }
	fglUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)get_gl_func_address_name("glUniformMatrix3x4fv");
	if (!fglUniformMatrix3x4fv) { print_msg("glUniformMatrix3x4fv not loaded"); }
	fglUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)get_gl_func_address_name("glUniformMatrix4x3fv");
	if (!fglUniformMatrix4x3fv) { print_msg("glUniformMatrix4x3fv not loaded"); }
}



void glfn_core_ver_3_0::init(PFN_loadfunc load) {
	glfn_core_ver_2_1::init(load);

	fglColorMaski = (PFNGLCOLORMASKIPROC)get_gl_func_address_name("glColorMaski");
	if (!fglColorMaski) { print_msg("glColorMaski not loaded"); }
	fglGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)get_gl_func_address_name("glGetBooleani_v");
	if (!fglGetBooleani_v) { print_msg("glGetBooleani_v not loaded"); }
	fglGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)get_gl_func_address_name("glGetIntegeri_v");
	if (!fglGetIntegeri_v) { print_msg("glGetIntegeri_v not loaded"); }
	fglEnablei = (PFNGLENABLEIPROC)get_gl_func_address_name("glEnablei");
	if (!fglEnablei) { print_msg("glEnablei not loaded"); }
	fglDisablei = (PFNGLDISABLEIPROC)get_gl_func_address_name("glDisablei");
	if (!fglDisablei) { print_msg("glDisablei not loaded"); }
	fglIsEnabledi = (PFNGLISENABLEDIPROC)get_gl_func_address_name("glIsEnabledi");
	if (!fglIsEnabledi) { print_msg("glIsEnabledi not loaded"); }
	fglBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glBeginTransformFeedback");
	if (!fglBeginTransformFeedback) { print_msg("glBeginTransformFeedback not loaded"); }
	fglEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glEndTransformFeedback");
	if (!fglEndTransformFeedback) { print_msg("glEndTransformFeedback not loaded"); }
	fglBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)get_gl_func_address_name("glBindBufferRange");
	if (!fglBindBufferRange) { print_msg("glBindBufferRange not loaded"); }
	fglBindBufferBase = (PFNGLBINDBUFFERBASEPROC)get_gl_func_address_name("glBindBufferBase");
	if (!fglBindBufferBase) { print_msg("glBindBufferBase not loaded"); }
	fglTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)get_gl_func_address_name("glTransformFeedbackVaryings");
	if (!fglTransformFeedbackVaryings) { print_msg("glTransformFeedbackVaryings not loaded"); }
	fglGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)get_gl_func_address_name("glGetTransformFeedbackVarying");
	if (!fglGetTransformFeedbackVarying) { print_msg("glGetTransformFeedbackVarying not loaded"); }
	fglClampColor = (PFNGLCLAMPCOLORPROC)get_gl_func_address_name("glClampColor");
	if (!fglClampColor) { print_msg("glClampColor not loaded"); }
	fglBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)get_gl_func_address_name("glBeginConditionalRender");
	if (!fglBeginConditionalRender) { print_msg("glBeginConditionalRender not loaded"); }
	fglEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)get_gl_func_address_name("glEndConditionalRender");
	if (!fglEndConditionalRender) { print_msg("glEndConditionalRender not loaded"); }
	fglVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)get_gl_func_address_name("glVertexAttribIPointer");
	if (!fglVertexAttribIPointer) { print_msg("glVertexAttribIPointer not loaded"); }
	fglGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)get_gl_func_address_name("glGetVertexAttribIiv");
	if (!fglGetVertexAttribIiv) { print_msg("glGetVertexAttribIiv not loaded"); }
	fglGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)get_gl_func_address_name("glGetVertexAttribIuiv");
	if (!fglGetVertexAttribIuiv) { print_msg("glGetVertexAttribIuiv not loaded"); }
	fglVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)get_gl_func_address_name("glVertexAttribI1i");
	if (!fglVertexAttribI1i) { print_msg("glVertexAttribI1i not loaded"); }
	fglVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)get_gl_func_address_name("glVertexAttribI2i");
	if (!fglVertexAttribI2i) { print_msg("glVertexAttribI2i not loaded"); }
	fglVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)get_gl_func_address_name("glVertexAttribI3i");
	if (!fglVertexAttribI3i) { print_msg("glVertexAttribI3i not loaded"); }
	fglVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)get_gl_func_address_name("glVertexAttribI4i");
	if (!fglVertexAttribI4i) { print_msg("glVertexAttribI4i not loaded"); }
	fglVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)get_gl_func_address_name("glVertexAttribI1ui");
	if (!fglVertexAttribI1ui) { print_msg("glVertexAttribI1ui not loaded"); }
	fglVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)get_gl_func_address_name("glVertexAttribI2ui");
	if (!fglVertexAttribI2ui) { print_msg("glVertexAttribI2ui not loaded"); }
	fglVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)get_gl_func_address_name("glVertexAttribI3ui");
	if (!fglVertexAttribI3ui) { print_msg("glVertexAttribI3ui not loaded"); }
	fglVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)get_gl_func_address_name("glVertexAttribI4ui");
	if (!fglVertexAttribI4ui) { print_msg("glVertexAttribI4ui not loaded"); }
	fglVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)get_gl_func_address_name("glVertexAttribI1iv");
	if (!fglVertexAttribI1iv) { print_msg("glVertexAttribI1iv not loaded"); }
	fglVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)get_gl_func_address_name("glVertexAttribI2iv");
	if (!fglVertexAttribI2iv) { print_msg("glVertexAttribI2iv not loaded"); }
	fglVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)get_gl_func_address_name("glVertexAttribI3iv");
	if (!fglVertexAttribI3iv) { print_msg("glVertexAttribI3iv not loaded"); }
	fglVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)get_gl_func_address_name("glVertexAttribI4iv");
	if (!fglVertexAttribI4iv) { print_msg("glVertexAttribI4iv not loaded"); }
	fglVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)get_gl_func_address_name("glVertexAttribI1uiv");
	if (!fglVertexAttribI1uiv) { print_msg("glVertexAttribI1uiv not loaded"); }
	fglVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)get_gl_func_address_name("glVertexAttribI2uiv");
	if (!fglVertexAttribI2uiv) { print_msg("glVertexAttribI2uiv not loaded"); }
	fglVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)get_gl_func_address_name("glVertexAttribI3uiv");
	if (!fglVertexAttribI3uiv) { print_msg("glVertexAttribI3uiv not loaded"); }
	fglVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)get_gl_func_address_name("glVertexAttribI4uiv");
	if (!fglVertexAttribI4uiv) { print_msg("glVertexAttribI4uiv not loaded"); }
	fglVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)get_gl_func_address_name("glVertexAttribI4bv");
	if (!fglVertexAttribI4bv) { print_msg("glVertexAttribI4bv not loaded"); }
	fglVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)get_gl_func_address_name("glVertexAttribI4sv");
	if (!fglVertexAttribI4sv) { print_msg("glVertexAttribI4sv not loaded"); }
	fglVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)get_gl_func_address_name("glVertexAttribI4ubv");
	if (!fglVertexAttribI4ubv) { print_msg("glVertexAttribI4ubv not loaded"); }
	fglVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)get_gl_func_address_name("glVertexAttribI4usv");
	if (!fglVertexAttribI4usv) { print_msg("glVertexAttribI4usv not loaded"); }
	fglGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)get_gl_func_address_name("glGetUniformuiv");
	if (!fglGetUniformuiv) { print_msg("glGetUniformuiv not loaded"); }
	fglBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)get_gl_func_address_name("glBindFragDataLocation");
	if (!fglBindFragDataLocation) { print_msg("glBindFragDataLocation not loaded"); }
	fglGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)get_gl_func_address_name("glGetFragDataLocation");
	if (!fglGetFragDataLocation) { print_msg("glGetFragDataLocation not loaded"); }
	fglUniform1ui = (PFNGLUNIFORM1UIPROC)get_gl_func_address_name("glUniform1ui");
	if (!fglUniform1ui) { print_msg("glUniform1ui not loaded"); }
	fglUniform2ui = (PFNGLUNIFORM2UIPROC)get_gl_func_address_name("glUniform2ui");
	if (!fglUniform2ui) { print_msg("glUniform2ui not loaded"); }
	fglUniform3ui = (PFNGLUNIFORM3UIPROC)get_gl_func_address_name("glUniform3ui");
	if (!fglUniform3ui) { print_msg("glUniform3ui not loaded"); }
	fglUniform4ui = (PFNGLUNIFORM4UIPROC)get_gl_func_address_name("glUniform4ui");
	if (!fglUniform4ui) { print_msg("glUniform4ui not loaded"); }
	fglUniform1uiv = (PFNGLUNIFORM1UIVPROC)get_gl_func_address_name("glUniform1uiv");
	if (!fglUniform1uiv) { print_msg("glUniform1uiv not loaded"); }
	fglUniform2uiv = (PFNGLUNIFORM2UIVPROC)get_gl_func_address_name("glUniform2uiv");
	if (!fglUniform2uiv) { print_msg("glUniform2uiv not loaded"); }
	fglUniform3uiv = (PFNGLUNIFORM3UIVPROC)get_gl_func_address_name("glUniform3uiv");
	if (!fglUniform3uiv) { print_msg("glUniform3uiv not loaded"); }
	fglUniform4uiv = (PFNGLUNIFORM4UIVPROC)get_gl_func_address_name("glUniform4uiv");
	if (!fglUniform4uiv) { print_msg("glUniform4uiv not loaded"); }
	fglTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)get_gl_func_address_name("glTexParameterIiv");
	if (!fglTexParameterIiv) { print_msg("glTexParameterIiv not loaded"); }
	fglTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)get_gl_func_address_name("glTexParameterIuiv");
	if (!fglTexParameterIuiv) { print_msg("glTexParameterIuiv not loaded"); }
	fglGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)get_gl_func_address_name("glGetTexParameterIiv");
	if (!fglGetTexParameterIiv) { print_msg("glGetTexParameterIiv not loaded"); }
	fglGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)get_gl_func_address_name("glGetTexParameterIuiv");
	if (!fglGetTexParameterIuiv) { print_msg("glGetTexParameterIuiv not loaded"); }
	fglClearBufferiv = (PFNGLCLEARBUFFERIVPROC)get_gl_func_address_name("glClearBufferiv");
	if (!fglClearBufferiv) { print_msg("glClearBufferiv not loaded"); }
	fglClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)get_gl_func_address_name("glClearBufferuiv");
	if (!fglClearBufferuiv) { print_msg("glClearBufferuiv not loaded"); }
	fglClearBufferfv = (PFNGLCLEARBUFFERFVPROC)get_gl_func_address_name("glClearBufferfv");
	if (!fglClearBufferfv) { print_msg("glClearBufferfv not loaded"); }
	fglClearBufferfi = (PFNGLCLEARBUFFERFIPROC)get_gl_func_address_name("glClearBufferfi");
	if (!fglClearBufferfi) { print_msg("glClearBufferfi not loaded"); }
	fglGetStringi = (PFNGLGETSTRINGIPROC)get_gl_func_address_name("glGetStringi");
	if (!fglGetStringi) { print_msg("glGetStringi not loaded"); }
	fglIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)get_gl_func_address_name("glIsRenderbuffer");
	if (!fglIsRenderbuffer) { print_msg("glIsRenderbuffer not loaded"); }
	fglBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)get_gl_func_address_name("glBindRenderbuffer");
	if (!fglBindRenderbuffer) { print_msg("glBindRenderbuffer not loaded"); }
	fglDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)get_gl_func_address_name("glDeleteRenderbuffers");
	if (!fglDeleteRenderbuffers) { print_msg("glDeleteRenderbuffers not loaded"); }
	fglGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)get_gl_func_address_name("glGenRenderbuffers");
	if (!fglGenRenderbuffers) { print_msg("glGenRenderbuffers not loaded"); }
	fglRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)get_gl_func_address_name("glRenderbufferStorage");
	if (!fglRenderbufferStorage) { print_msg("glRenderbufferStorage not loaded"); }
	fglGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetRenderbufferParameteriv");
	if (!fglGetRenderbufferParameteriv) { print_msg("glGetRenderbufferParameteriv not loaded"); }
	fglIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)get_gl_func_address_name("glIsFramebuffer");
	if (!fglIsFramebuffer) { print_msg("glIsFramebuffer not loaded"); }
	fglBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)get_gl_func_address_name("glBindFramebuffer");
	if (!fglBindFramebuffer) { print_msg("glBindFramebuffer not loaded"); }
	fglDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)get_gl_func_address_name("glDeleteFramebuffers");
	if (!fglDeleteFramebuffers) { print_msg("glDeleteFramebuffers not loaded"); }
	fglGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)get_gl_func_address_name("glGenFramebuffers");
	if (!fglGenFramebuffers) { print_msg("glGenFramebuffers not loaded"); }
	fglCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)get_gl_func_address_name("glCheckFramebufferStatus");
	if (!fglCheckFramebufferStatus) { print_msg("glCheckFramebufferStatus not loaded"); }
	fglFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)get_gl_func_address_name("glFramebufferTexture1D");
	if (!fglFramebufferTexture1D) { print_msg("glFramebufferTexture1D not loaded"); }
	fglFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)get_gl_func_address_name("glFramebufferTexture2D");
	if (!fglFramebufferTexture2D) { print_msg("glFramebufferTexture2D not loaded"); }
	fglFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)get_gl_func_address_name("glFramebufferTexture3D");
	if (!fglFramebufferTexture3D) { print_msg("glFramebufferTexture3D not loaded"); }
	fglFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)get_gl_func_address_name("glFramebufferRenderbuffer");
	if (!fglFramebufferRenderbuffer) { print_msg("glFramebufferRenderbuffer not loaded"); }
	fglGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)get_gl_func_address_name("glGetFramebufferAttachmentParameteriv");
	if (!fglGetFramebufferAttachmentParameteriv) { print_msg("glGetFramebufferAttachmentParameteriv not loaded"); }
	fglGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)get_gl_func_address_name("glGenerateMipmap");
	if (!fglGenerateMipmap) { print_msg("glGenerateMipmap not loaded"); }
	fglBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)get_gl_func_address_name("glBlitFramebuffer");
	if (!fglBlitFramebuffer) { print_msg("glBlitFramebuffer not loaded"); }
	fglRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)get_gl_func_address_name("glRenderbufferStorageMultisample");
	if (!fglRenderbufferStorageMultisample) { print_msg("glRenderbufferStorageMultisample not loaded"); }
	fglFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)get_gl_func_address_name("glFramebufferTextureLayer");
	if (!fglFramebufferTextureLayer) { print_msg("glFramebufferTextureLayer not loaded"); }
	fglMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)get_gl_func_address_name("glMapBufferRange");
	if (!fglMapBufferRange) { print_msg("glMapBufferRange not loaded"); }
	fglFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)get_gl_func_address_name("glFlushMappedBufferRange");
	if (!fglFlushMappedBufferRange) { print_msg("glFlushMappedBufferRange not loaded"); }
	fglBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)get_gl_func_address_name("glBindVertexArray");
	if (!fglBindVertexArray) { print_msg("glBindVertexArray not loaded"); }
	fglDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)get_gl_func_address_name("glDeleteVertexArrays");
	if (!fglDeleteVertexArrays) { print_msg("glDeleteVertexArrays not loaded"); }
	fglGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)get_gl_func_address_name("glGenVertexArrays");
	if (!fglGenVertexArrays) { print_msg("glGenVertexArrays not loaded"); }
	fglIsVertexArray = (PFNGLISVERTEXARRAYPROC)get_gl_func_address_name("glIsVertexArray");
	if (!fglIsVertexArray) { print_msg("glIsVertexArray not loaded"); }
}



void glfn_core_ver_3_1::init(PFN_loadfunc load) {
	glfn_core_ver_3_0::init(load);

	fglDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)get_gl_func_address_name("glDrawArraysInstanced");
	if (!fglDrawArraysInstanced) { print_msg("glDrawArraysInstanced not loaded"); }
	fglDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)get_gl_func_address_name("glDrawElementsInstanced");
	if (!fglDrawElementsInstanced) { print_msg("glDrawElementsInstanced not loaded"); }
	fglTexBuffer = (PFNGLTEXBUFFERPROC)get_gl_func_address_name("glTexBuffer");
	if (!fglTexBuffer) { print_msg("glTexBuffer not loaded"); }
	fglPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)get_gl_func_address_name("glPrimitiveRestartIndex");
	if (!fglPrimitiveRestartIndex) { print_msg("glPrimitiveRestartIndex not loaded"); }
	fglCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)get_gl_func_address_name("glCopyBufferSubData");
	if (!fglCopyBufferSubData) { print_msg("glCopyBufferSubData not loaded"); }
	fglGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)get_gl_func_address_name("glGetUniformIndices");
	if (!fglGetUniformIndices) { print_msg("glGetUniformIndices not loaded"); }
	fglGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)get_gl_func_address_name("glGetActiveUniformsiv");
	if (!fglGetActiveUniformsiv) { print_msg("glGetActiveUniformsiv not loaded"); }
	fglGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)get_gl_func_address_name("glGetActiveUniformName");
	if (!fglGetActiveUniformName) { print_msg("glGetActiveUniformName not loaded"); }
	fglGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)get_gl_func_address_name("glGetUniformBlockIndex");
	if (!fglGetUniformBlockIndex) { print_msg("glGetUniformBlockIndex not loaded"); }
	fglGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)get_gl_func_address_name("glGetActiveUniformBlockiv");
	if (!fglGetActiveUniformBlockiv) { print_msg("glGetActiveUniformBlockiv not loaded"); }
	fglGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)get_gl_func_address_name("glGetActiveUniformBlockName");
	if (!fglGetActiveUniformBlockName) { print_msg("glGetActiveUniformBlockName not loaded"); }
	fglUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)get_gl_func_address_name("glUniformBlockBinding");
	if (!fglUniformBlockBinding) { print_msg("glUniformBlockBinding not loaded"); }
}



void glfn_core_ver_3_2::init(PFN_loadfunc load) {
	glfn_core_ver_3_1::init(load);

	fglDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)get_gl_func_address_name("glDrawElementsBaseVertex");
	if (!fglDrawElementsBaseVertex) { print_msg("glDrawElementsBaseVertex not loaded"); }
	fglDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)get_gl_func_address_name("glDrawRangeElementsBaseVertex");
	if (!fglDrawRangeElementsBaseVertex) { print_msg("glDrawRangeElementsBaseVertex not loaded"); }
	fglDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)get_gl_func_address_name("glDrawElementsInstancedBaseVertex");
	if (!fglDrawElementsInstancedBaseVertex) { print_msg("glDrawElementsInstancedBaseVertex not loaded"); }
	fglMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)get_gl_func_address_name("glMultiDrawElementsBaseVertex");
	if (!fglMultiDrawElementsBaseVertex) { print_msg("glMultiDrawElementsBaseVertex not loaded"); }
	fglProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)get_gl_func_address_name("glProvokingVertex");
	if (!fglProvokingVertex) { print_msg("glProvokingVertex not loaded"); }
	fglFenceSync = (PFNGLFENCESYNCPROC)get_gl_func_address_name("glFenceSync");
	if (!fglFenceSync) { print_msg("glFenceSync not loaded"); }
	fglIsSync = (PFNGLISSYNCPROC)get_gl_func_address_name("glIsSync");
	if (!fglIsSync) { print_msg("glIsSync not loaded"); }
	fglDeleteSync = (PFNGLDELETESYNCPROC)get_gl_func_address_name("glDeleteSync");
	if (!fglDeleteSync) { print_msg("glDeleteSync not loaded"); }
	fglClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)get_gl_func_address_name("glClientWaitSync");
	if (!fglClientWaitSync) { print_msg("glClientWaitSync not loaded"); }
	fglWaitSync = (PFNGLWAITSYNCPROC)get_gl_func_address_name("glWaitSync");
	if (!fglWaitSync) { print_msg("glWaitSync not loaded"); }
	fglGetInteger64v = (PFNGLGETINTEGER64VPROC)get_gl_func_address_name("glGetInteger64v");
	if (!fglGetInteger64v) { print_msg("glGetInteger64v not loaded"); }
	fglGetSynciv = (PFNGLGETSYNCIVPROC)get_gl_func_address_name("glGetSynciv");
	if (!fglGetSynciv) { print_msg("glGetSynciv not loaded"); }
	fglGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)get_gl_func_address_name("glGetInteger64i_v");
	if (!fglGetInteger64i_v) { print_msg("glGetInteger64i_v not loaded"); }
	fglGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)get_gl_func_address_name("glGetBufferParameteri64v");
	if (!fglGetBufferParameteri64v) { print_msg("glGetBufferParameteri64v not loaded"); }
	fglFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)get_gl_func_address_name("glFramebufferTexture");
	if (!fglFramebufferTexture) { print_msg("glFramebufferTexture not loaded"); }
	fglTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)get_gl_func_address_name("glTexImage2DMultisample");
	if (!fglTexImage2DMultisample) { print_msg("glTexImage2DMultisample not loaded"); }
	fglTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)get_gl_func_address_name("glTexImage3DMultisample");
	if (!fglTexImage3DMultisample) { print_msg("glTexImage3DMultisample not loaded"); }
	fglGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)get_gl_func_address_name("glGetMultisamplefv");
	if (!fglGetMultisamplefv) { print_msg("glGetMultisamplefv not loaded"); }
	fglSampleMaski = (PFNGLSAMPLEMASKIPROC)get_gl_func_address_name("glSampleMaski");
	if (!fglSampleMaski) { print_msg("glSampleMaski not loaded"); }
}



void glfn_core_ver_3_3::init(PFN_loadfunc load) {
	glfn_core_ver_3_2::init(load);

	fglBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)get_gl_func_address_name("glBindFragDataLocationIndexed");
	if (!fglBindFragDataLocationIndexed) { print_msg("glBindFragDataLocationIndexed not loaded"); }
	fglGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)get_gl_func_address_name("glGetFragDataIndex");
	if (!fglGetFragDataIndex) { print_msg("glGetFragDataIndex not loaded"); }
	fglGenSamplers = (PFNGLGENSAMPLERSPROC)get_gl_func_address_name("glGenSamplers");
	if (!fglGenSamplers) { print_msg("glGenSamplers not loaded"); }
	fglDeleteSamplers = (PFNGLDELETESAMPLERSPROC)get_gl_func_address_name("glDeleteSamplers");
	if (!fglDeleteSamplers) { print_msg("glDeleteSamplers not loaded"); }
	fglIsSampler = (PFNGLISSAMPLERPROC)get_gl_func_address_name("glIsSampler");
	if (!fglIsSampler) { print_msg("glIsSampler not loaded"); }
	fglBindSampler = (PFNGLBINDSAMPLERPROC)get_gl_func_address_name("glBindSampler");
	if (!fglBindSampler) { print_msg("glBindSampler not loaded"); }
	fglSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)get_gl_func_address_name("glSamplerParameteri");
	if (!fglSamplerParameteri) { print_msg("glSamplerParameteri not loaded"); }
	fglSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)get_gl_func_address_name("glSamplerParameteriv");
	if (!fglSamplerParameteriv) { print_msg("glSamplerParameteriv not loaded"); }
	fglSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)get_gl_func_address_name("glSamplerParameterf");
	if (!fglSamplerParameterf) { print_msg("glSamplerParameterf not loaded"); }
	fglSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)get_gl_func_address_name("glSamplerParameterfv");
	if (!fglSamplerParameterfv) { print_msg("glSamplerParameterfv not loaded"); }
	fglSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC)get_gl_func_address_name("glSamplerParameterIiv");
	if (!fglSamplerParameterIiv) { print_msg("glSamplerParameterIiv not loaded"); }
	fglSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)get_gl_func_address_name("glSamplerParameterIuiv");
	if (!fglSamplerParameterIuiv) { print_msg("glSamplerParameterIuiv not loaded"); }
	fglGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)get_gl_func_address_name("glGetSamplerParameteriv");
	if (!fglGetSamplerParameteriv) { print_msg("glGetSamplerParameteriv not loaded"); }
	fglGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)get_gl_func_address_name("glGetSamplerParameterIiv");
	if (!fglGetSamplerParameterIiv) { print_msg("glGetSamplerParameterIiv not loaded"); }
	fglGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)get_gl_func_address_name("glGetSamplerParameterfv");
	if (!fglGetSamplerParameterfv) { print_msg("glGetSamplerParameterfv not loaded"); }
	fglGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)get_gl_func_address_name("glGetSamplerParameterIuiv");
	if (!fglGetSamplerParameterIuiv) { print_msg("glGetSamplerParameterIuiv not loaded"); }
	fglQueryCounter = (PFNGLQUERYCOUNTERPROC)get_gl_func_address_name("glQueryCounter");
	if (!fglQueryCounter) { print_msg("glQueryCounter not loaded"); }
	fglGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC)get_gl_func_address_name("glGetQueryObjecti64v");
	if (!fglGetQueryObjecti64v) { print_msg("glGetQueryObjecti64v not loaded"); }
	fglGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)get_gl_func_address_name("glGetQueryObjectui64v");
	if (!fglGetQueryObjectui64v) { print_msg("glGetQueryObjectui64v not loaded"); }
	fglVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC)get_gl_func_address_name("glVertexAttribDivisor");
	if (!fglVertexAttribDivisor) { print_msg("glVertexAttribDivisor not loaded"); }
	fglVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC)get_gl_func_address_name("glVertexAttribP1ui");
	if (!fglVertexAttribP1ui) { print_msg("glVertexAttribP1ui not loaded"); }
	fglVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)get_gl_func_address_name("glVertexAttribP1uiv");
	if (!fglVertexAttribP1uiv) { print_msg("glVertexAttribP1uiv not loaded"); }
	fglVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC)get_gl_func_address_name("glVertexAttribP2ui");
	if (!fglVertexAttribP2ui) { print_msg("glVertexAttribP2ui not loaded"); }
	fglVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)get_gl_func_address_name("glVertexAttribP2uiv");
	if (!fglVertexAttribP2uiv) { print_msg("glVertexAttribP2uiv not loaded"); }
	fglVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC)get_gl_func_address_name("glVertexAttribP3ui");
	if (!fglVertexAttribP3ui) { print_msg("glVertexAttribP3ui not loaded"); }
	fglVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)get_gl_func_address_name("glVertexAttribP3uiv");
	if (!fglVertexAttribP3uiv) { print_msg("glVertexAttribP3uiv not loaded"); }
	fglVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC)get_gl_func_address_name("glVertexAttribP4ui");
	if (!fglVertexAttribP4ui) { print_msg("glVertexAttribP4ui not loaded"); }
	fglVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)get_gl_func_address_name("glVertexAttribP4uiv");
	if (!fglVertexAttribP4uiv) { print_msg("glVertexAttribP4uiv not loaded"); }
}



void glfn_core_ver_4_0::init(PFN_loadfunc load) {
	glfn_core_ver_3_3::init(load);

	fglMinSampleShading = (PFNGLMINSAMPLESHADINGPROC)get_gl_func_address_name("glMinSampleShading");
	if (!fglMinSampleShading) { print_msg("glMinSampleShading not loaded"); }
	fglBlendEquationi = (PFNGLBLENDEQUATIONIPROC)get_gl_func_address_name("glBlendEquationi");
	if (!fglBlendEquationi) { print_msg("glBlendEquationi not loaded"); }
	fglBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC)get_gl_func_address_name("glBlendEquationSeparatei");
	if (!fglBlendEquationSeparatei) { print_msg("glBlendEquationSeparatei not loaded"); }
	fglBlendFunci = (PFNGLBLENDFUNCIPROC)get_gl_func_address_name("glBlendFunci");
	if (!fglBlendFunci) { print_msg("glBlendFunci not loaded"); }
	fglBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC)get_gl_func_address_name("glBlendFuncSeparatei");
	if (!fglBlendFuncSeparatei) { print_msg("glBlendFuncSeparatei not loaded"); }
	fglDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC)get_gl_func_address_name("glDrawArraysIndirect");
	if (!fglDrawArraysIndirect) { print_msg("glDrawArraysIndirect not loaded"); }
	fglDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC)get_gl_func_address_name("glDrawElementsIndirect");
	if (!fglDrawElementsIndirect) { print_msg("glDrawElementsIndirect not loaded"); }
	fglUniform1d = (PFNGLUNIFORM1DPROC)get_gl_func_address_name("glUniform1d");
	if (!fglUniform1d) { print_msg("glUniform1d not loaded"); }
	fglUniform2d = (PFNGLUNIFORM2DPROC)get_gl_func_address_name("glUniform2d");
	if (!fglUniform2d) { print_msg("glUniform2d not loaded"); }
	fglUniform3d = (PFNGLUNIFORM3DPROC)get_gl_func_address_name("glUniform3d");
	if (!fglUniform3d) { print_msg("glUniform3d not loaded"); }
	fglUniform4d = (PFNGLUNIFORM4DPROC)get_gl_func_address_name("glUniform4d");
	if (!fglUniform4d) { print_msg("glUniform4d not loaded"); }
	fglUniform1dv = (PFNGLUNIFORM1DVPROC)get_gl_func_address_name("glUniform1dv");
	if (!fglUniform1dv) { print_msg("glUniform1dv not loaded"); }
	fglUniform2dv = (PFNGLUNIFORM2DVPROC)get_gl_func_address_name("glUniform2dv");
	if (!fglUniform2dv) { print_msg("glUniform2dv not loaded"); }
	fglUniform3dv = (PFNGLUNIFORM3DVPROC)get_gl_func_address_name("glUniform3dv");
	if (!fglUniform3dv) { print_msg("glUniform3dv not loaded"); }
	fglUniform4dv = (PFNGLUNIFORM4DVPROC)get_gl_func_address_name("glUniform4dv");
	if (!fglUniform4dv) { print_msg("glUniform4dv not loaded"); }
	fglUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC)get_gl_func_address_name("glUniformMatrix2dv");
	if (!fglUniformMatrix2dv) { print_msg("glUniformMatrix2dv not loaded"); }
	fglUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC)get_gl_func_address_name("glUniformMatrix3dv");
	if (!fglUniformMatrix3dv) { print_msg("glUniformMatrix3dv not loaded"); }
	fglUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC)get_gl_func_address_name("glUniformMatrix4dv");
	if (!fglUniformMatrix4dv) { print_msg("glUniformMatrix4dv not loaded"); }
	fglUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC)get_gl_func_address_name("glUniformMatrix2x3dv");
	if (!fglUniformMatrix2x3dv) { print_msg("glUniformMatrix2x3dv not loaded"); }
	fglUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC)get_gl_func_address_name("glUniformMatrix2x4dv");
	if (!fglUniformMatrix2x4dv) { print_msg("glUniformMatrix2x4dv not loaded"); }
	fglUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC)get_gl_func_address_name("glUniformMatrix3x2dv");
	if (!fglUniformMatrix3x2dv) { print_msg("glUniformMatrix3x2dv not loaded"); }
	fglUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC)get_gl_func_address_name("glUniformMatrix3x4dv");
	if (!fglUniformMatrix3x4dv) { print_msg("glUniformMatrix3x4dv not loaded"); }
	fglUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC)get_gl_func_address_name("glUniformMatrix4x2dv");
	if (!fglUniformMatrix4x2dv) { print_msg("glUniformMatrix4x2dv not loaded"); }
	fglUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC)get_gl_func_address_name("glUniformMatrix4x3dv");
	if (!fglUniformMatrix4x3dv) { print_msg("glUniformMatrix4x3dv not loaded"); }
	fglGetUniformdv = (PFNGLGETUNIFORMDVPROC)get_gl_func_address_name("glGetUniformdv");
	if (!fglGetUniformdv) { print_msg("glGetUniformdv not loaded"); }
	fglGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)get_gl_func_address_name("glGetSubroutineUniformLocation");
	if (!fglGetSubroutineUniformLocation) { print_msg("glGetSubroutineUniformLocation not loaded"); }
	fglGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC)get_gl_func_address_name("glGetSubroutineIndex");
	if (!fglGetSubroutineIndex) { print_msg("glGetSubroutineIndex not loaded"); }
	fglGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)get_gl_func_address_name("glGetActiveSubroutineUniformiv");
	if (!fglGetActiveSubroutineUniformiv) { print_msg("glGetActiveSubroutineUniformiv not loaded"); }
	fglGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)get_gl_func_address_name("glGetActiveSubroutineUniformName");
	if (!fglGetActiveSubroutineUniformName) { print_msg("glGetActiveSubroutineUniformName not loaded"); }
	fglGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC)get_gl_func_address_name("glGetActiveSubroutineName");
	if (!fglGetActiveSubroutineName) { print_msg("glGetActiveSubroutineName not loaded"); }
	fglUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC)get_gl_func_address_name("glUniformSubroutinesuiv");
	if (!fglUniformSubroutinesuiv) { print_msg("glUniformSubroutinesuiv not loaded"); }
	fglGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)get_gl_func_address_name("glGetUniformSubroutineuiv");
	if (!fglGetUniformSubroutineuiv) { print_msg("glGetUniformSubroutineuiv not loaded"); }
	fglGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC)get_gl_func_address_name("glGetProgramStageiv");
	if (!fglGetProgramStageiv) { print_msg("glGetProgramStageiv not loaded"); }
	fglPatchParameteri = (PFNGLPATCHPARAMETERIPROC)get_gl_func_address_name("glPatchParameteri");
	if (!fglPatchParameteri) { print_msg("glPatchParameteri not loaded"); }
	fglPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC)get_gl_func_address_name("glPatchParameterfv");
	if (!fglPatchParameterfv) { print_msg("glPatchParameterfv not loaded"); }
	fglBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glBindTransformFeedback");
	if (!fglBindTransformFeedback) { print_msg("glBindTransformFeedback not loaded"); }
	fglDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC)get_gl_func_address_name("glDeleteTransformFeedbacks");
	if (!fglDeleteTransformFeedbacks) { print_msg("glDeleteTransformFeedbacks not loaded"); }
	fglGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC)get_gl_func_address_name("glGenTransformFeedbacks");
	if (!fglGenTransformFeedbacks) { print_msg("glGenTransformFeedbacks not loaded"); }
	fglIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glIsTransformFeedback");
	if (!fglIsTransformFeedback) { print_msg("glIsTransformFeedback not loaded"); }
	fglPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC)get_gl_func_address_name("glPauseTransformFeedback");
	if (!fglPauseTransformFeedback) { print_msg("glPauseTransformFeedback not loaded"); }
	fglResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC)get_gl_func_address_name("glResumeTransformFeedback");
	if (!fglResumeTransformFeedback) { print_msg("glResumeTransformFeedback not loaded"); }
	fglDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC)get_gl_func_address_name("glDrawTransformFeedback");
	if (!fglDrawTransformFeedback) { print_msg("glDrawTransformFeedback not loaded"); }
	fglDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)get_gl_func_address_name("glDrawTransformFeedbackStream");
	if (!fglDrawTransformFeedbackStream) { print_msg("glDrawTransformFeedbackStream not loaded"); }
	fglBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC)get_gl_func_address_name("glBeginQueryIndexed");
	if (!fglBeginQueryIndexed) { print_msg("glBeginQueryIndexed not loaded"); }
	fglEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC)get_gl_func_address_name("glEndQueryIndexed");
	if (!fglEndQueryIndexed) { print_msg("glEndQueryIndexed not loaded"); }
	fglGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC)get_gl_func_address_name("glGetQueryIndexediv");
	if (!fglGetQueryIndexediv) { print_msg("glGetQueryIndexediv not loaded"); }
}



void glfn_core_ver_4_1::init(PFN_loadfunc load) {
	glfn_core_ver_4_0::init(load);

	fglReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC)get_gl_func_address_name("glReleaseShaderCompiler");
	if (!fglReleaseShaderCompiler) { print_msg("glReleaseShaderCompiler not loaded"); }
	fglShaderBinary = (PFNGLSHADERBINARYPROC)get_gl_func_address_name("glShaderBinary");
	if (!fglShaderBinary) { print_msg("glShaderBinary not loaded"); }
	fglGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)get_gl_func_address_name("glGetShaderPrecisionFormat");
	if (!fglGetShaderPrecisionFormat) { print_msg("glGetShaderPrecisionFormat not loaded"); }
	fglDepthRangef = (PFNGLDEPTHRANGEFPROC)get_gl_func_address_name("glDepthRangef");
	if (!fglDepthRangef) { print_msg("glDepthRangef not loaded"); }
	fglClearDepthf = (PFNGLCLEARDEPTHFPROC)get_gl_func_address_name("glClearDepthf");
	if (!fglClearDepthf) { print_msg("glClearDepthf not loaded"); }
	fglGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC)get_gl_func_address_name("glGetProgramBinary");
	if (!fglGetProgramBinary) { print_msg("glGetProgramBinary not loaded"); }
	fglProgramBinary = (PFNGLPROGRAMBINARYPROC)get_gl_func_address_name("glProgramBinary");
	if (!fglProgramBinary) { print_msg("glProgramBinary not loaded"); }
	fglProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC)get_gl_func_address_name("glProgramParameteri");
	if (!fglProgramParameteri) { print_msg("glProgramParameteri not loaded"); }
	fglUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC)get_gl_func_address_name("glUseProgramStages");
	if (!fglUseProgramStages) { print_msg("glUseProgramStages not loaded"); }
	fglActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC)get_gl_func_address_name("glActiveShaderProgram");
	if (!fglActiveShaderProgram) { print_msg("glActiveShaderProgram not loaded"); }
	fglCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC)get_gl_func_address_name("glCreateShaderProgramv");
	if (!fglCreateShaderProgramv) { print_msg("glCreateShaderProgramv not loaded"); }
	fglBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC)get_gl_func_address_name("glBindProgramPipeline");
	if (!fglBindProgramPipeline) { print_msg("glBindProgramPipeline not loaded"); }
	fglDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)get_gl_func_address_name("glDeleteProgramPipelines");
	if (!fglDeleteProgramPipelines) { print_msg("glDeleteProgramPipelines not loaded"); }
	fglGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC)get_gl_func_address_name("glGenProgramPipelines");
	if (!fglGenProgramPipelines) { print_msg("glGenProgramPipelines not loaded"); }
	fglIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC)get_gl_func_address_name("glIsProgramPipeline");
	if (!fglIsProgramPipeline) { print_msg("glIsProgramPipeline not loaded"); }
	fglGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC)get_gl_func_address_name("glGetProgramPipelineiv");
	if (!fglGetProgramPipelineiv) { print_msg("glGetProgramPipelineiv not loaded"); }
	fglProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC)get_gl_func_address_name("glProgramUniform1i");
	if (!fglProgramUniform1i) { print_msg("glProgramUniform1i not loaded"); }
	fglProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC)get_gl_func_address_name("glProgramUniform1iv");
	if (!fglProgramUniform1iv) { print_msg("glProgramUniform1iv not loaded"); }
	fglProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC)get_gl_func_address_name("glProgramUniform1f");
	if (!fglProgramUniform1f) { print_msg("glProgramUniform1f not loaded"); }
	fglProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC)get_gl_func_address_name("glProgramUniform1fv");
	if (!fglProgramUniform1fv) { print_msg("glProgramUniform1fv not loaded"); }
	fglProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC)get_gl_func_address_name("glProgramUniform1d");
	if (!fglProgramUniform1d) { print_msg("glProgramUniform1d not loaded"); }
	fglProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC)get_gl_func_address_name("glProgramUniform1dv");
	if (!fglProgramUniform1dv) { print_msg("glProgramUniform1dv not loaded"); }
	fglProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC)get_gl_func_address_name("glProgramUniform1ui");
	if (!fglProgramUniform1ui) { print_msg("glProgramUniform1ui not loaded"); }
	fglProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC)get_gl_func_address_name("glProgramUniform1uiv");
	if (!fglProgramUniform1uiv) { print_msg("glProgramUniform1uiv not loaded"); }
	fglProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC)get_gl_func_address_name("glProgramUniform2i");
	if (!fglProgramUniform2i) { print_msg("glProgramUniform2i not loaded"); }
	fglProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC)get_gl_func_address_name("glProgramUniform2iv");
	if (!fglProgramUniform2iv) { print_msg("glProgramUniform2iv not loaded"); }
	fglProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC)get_gl_func_address_name("glProgramUniform2f");
	if (!fglProgramUniform2f) { print_msg("glProgramUniform2f not loaded"); }
	fglProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC)get_gl_func_address_name("glProgramUniform2fv");
	if (!fglProgramUniform2fv) { print_msg("glProgramUniform2fv not loaded"); }
	fglProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC)get_gl_func_address_name("glProgramUniform2d");
	if (!fglProgramUniform2d) { print_msg("glProgramUniform2d not loaded"); }
	fglProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC)get_gl_func_address_name("glProgramUniform2dv");
	if (!fglProgramUniform2dv) { print_msg("glProgramUniform2dv not loaded"); }
	fglProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC)get_gl_func_address_name("glProgramUniform2ui");
	if (!fglProgramUniform2ui) { print_msg("glProgramUniform2ui not loaded"); }
	fglProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC)get_gl_func_address_name("glProgramUniform2uiv");
	if (!fglProgramUniform2uiv) { print_msg("glProgramUniform2uiv not loaded"); }
	fglProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC)get_gl_func_address_name("glProgramUniform3i");
	if (!fglProgramUniform3i) { print_msg("glProgramUniform3i not loaded"); }
	fglProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC)get_gl_func_address_name("glProgramUniform3iv");
	if (!fglProgramUniform3iv) { print_msg("glProgramUniform3iv not loaded"); }
	fglProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC)get_gl_func_address_name("glProgramUniform3f");
	if (!fglProgramUniform3f) { print_msg("glProgramUniform3f not loaded"); }
	fglProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC)get_gl_func_address_name("glProgramUniform3fv");
	if (!fglProgramUniform3fv) { print_msg("glProgramUniform3fv not loaded"); }
	fglProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC)get_gl_func_address_name("glProgramUniform3d");
	if (!fglProgramUniform3d) { print_msg("glProgramUniform3d not loaded"); }
	fglProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC)get_gl_func_address_name("glProgramUniform3dv");
	if (!fglProgramUniform3dv) { print_msg("glProgramUniform3dv not loaded"); }
	fglProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC)get_gl_func_address_name("glProgramUniform3ui");
	if (!fglProgramUniform3ui) { print_msg("glProgramUniform3ui not loaded"); }
	fglProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC)get_gl_func_address_name("glProgramUniform3uiv");
	if (!fglProgramUniform3uiv) { print_msg("glProgramUniform3uiv not loaded"); }
	fglProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC)get_gl_func_address_name("glProgramUniform4i");
	if (!fglProgramUniform4i) { print_msg("glProgramUniform4i not loaded"); }
	fglProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC)get_gl_func_address_name("glProgramUniform4iv");
	if (!fglProgramUniform4iv) { print_msg("glProgramUniform4iv not loaded"); }
	fglProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC)get_gl_func_address_name("glProgramUniform4f");
	if (!fglProgramUniform4f) { print_msg("glProgramUniform4f not loaded"); }
	fglProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC)get_gl_func_address_name("glProgramUniform4fv");
	if (!fglProgramUniform4fv) { print_msg("glProgramUniform4fv not loaded"); }
	fglProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC)get_gl_func_address_name("glProgramUniform4d");
	if (!fglProgramUniform4d) { print_msg("glProgramUniform4d not loaded"); }
	fglProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC)get_gl_func_address_name("glProgramUniform4dv");
	if (!fglProgramUniform4dv) { print_msg("glProgramUniform4dv not loaded"); }
	fglProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC)get_gl_func_address_name("glProgramUniform4ui");
	if (!fglProgramUniform4ui) { print_msg("glProgramUniform4ui not loaded"); }
	fglProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC)get_gl_func_address_name("glProgramUniform4uiv");
	if (!fglProgramUniform4uiv) { print_msg("glProgramUniform4uiv not loaded"); }
	fglProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)get_gl_func_address_name("glProgramUniformMatrix2fv");
	if (!fglProgramUniformMatrix2fv) { print_msg("glProgramUniformMatrix2fv not loaded"); }
	fglProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)get_gl_func_address_name("glProgramUniformMatrix3fv");
	if (!fglProgramUniformMatrix3fv) { print_msg("glProgramUniformMatrix3fv not loaded"); }
	fglProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)get_gl_func_address_name("glProgramUniformMatrix4fv");
	if (!fglProgramUniformMatrix4fv) { print_msg("glProgramUniformMatrix4fv not loaded"); }
	fglProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)get_gl_func_address_name("glProgramUniformMatrix2dv");
	if (!fglProgramUniformMatrix2dv) { print_msg("glProgramUniformMatrix2dv not loaded"); }
	fglProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)get_gl_func_address_name("glProgramUniformMatrix3dv");
	if (!fglProgramUniformMatrix3dv) { print_msg("glProgramUniformMatrix3dv not loaded"); }
	fglProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)get_gl_func_address_name("glProgramUniformMatrix4dv");
	if (!fglProgramUniformMatrix4dv) { print_msg("glProgramUniformMatrix4dv not loaded"); }
	fglProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)get_gl_func_address_name("glProgramUniformMatrix2x3fv");
	if (!fglProgramUniformMatrix2x3fv) { print_msg("glProgramUniformMatrix2x3fv not loaded"); }
	fglProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)get_gl_func_address_name("glProgramUniformMatrix3x2fv");
	if (!fglProgramUniformMatrix3x2fv) { print_msg("glProgramUniformMatrix3x2fv not loaded"); }
	fglProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)get_gl_func_address_name("glProgramUniformMatrix2x4fv");
	if (!fglProgramUniformMatrix2x4fv) { print_msg("glProgramUniformMatrix2x4fv not loaded"); }
	fglProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)get_gl_func_address_name("glProgramUniformMatrix4x2fv");
	if (!fglProgramUniformMatrix4x2fv) { print_msg("glProgramUniformMatrix4x2fv not loaded"); }
	fglProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)get_gl_func_address_name("glProgramUniformMatrix3x4fv");
	if (!fglProgramUniformMatrix3x4fv) { print_msg("glProgramUniformMatrix3x4fv not loaded"); }
	fglProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)get_gl_func_address_name("glProgramUniformMatrix4x3fv");
	if (!fglProgramUniformMatrix4x3fv) { print_msg("glProgramUniformMatrix4x3fv not loaded"); }
	fglProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)get_gl_func_address_name("glProgramUniformMatrix2x3dv");
	if (!fglProgramUniformMatrix2x3dv) { print_msg("glProgramUniformMatrix2x3dv not loaded"); }
	fglProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)get_gl_func_address_name("glProgramUniformMatrix3x2dv");
	if (!fglProgramUniformMatrix3x2dv) { print_msg("glProgramUniformMatrix3x2dv not loaded"); }
	fglProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)get_gl_func_address_name("glProgramUniformMatrix2x4dv");
	if (!fglProgramUniformMatrix2x4dv) { print_msg("glProgramUniformMatrix2x4dv not loaded"); }
	fglProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)get_gl_func_address_name("glProgramUniformMatrix4x2dv");
	if (!fglProgramUniformMatrix4x2dv) { print_msg("glProgramUniformMatrix4x2dv not loaded"); }
	fglProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)get_gl_func_address_name("glProgramUniformMatrix3x4dv");
	if (!fglProgramUniformMatrix3x4dv) { print_msg("glProgramUniformMatrix3x4dv not loaded"); }
	fglProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)get_gl_func_address_name("glProgramUniformMatrix4x3dv");
	if (!fglProgramUniformMatrix4x3dv) { print_msg("glProgramUniformMatrix4x3dv not loaded"); }
	fglValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)get_gl_func_address_name("glValidateProgramPipeline");
	if (!fglValidateProgramPipeline) { print_msg("glValidateProgramPipeline not loaded"); }
	fglGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)get_gl_func_address_name("glGetProgramPipelineInfoLog");
	if (!fglGetProgramPipelineInfoLog) { print_msg("glGetProgramPipelineInfoLog not loaded"); }
	fglVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC)get_gl_func_address_name("glVertexAttribL1d");
	if (!fglVertexAttribL1d) { print_msg("glVertexAttribL1d not loaded"); }
	fglVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC)get_gl_func_address_name("glVertexAttribL2d");
	if (!fglVertexAttribL2d) { print_msg("glVertexAttribL2d not loaded"); }
	fglVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC)get_gl_func_address_name("glVertexAttribL3d");
	if (!fglVertexAttribL3d) { print_msg("glVertexAttribL3d not loaded"); }
	fglVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC)get_gl_func_address_name("glVertexAttribL4d");
	if (!fglVertexAttribL4d) { print_msg("glVertexAttribL4d not loaded"); }
	fglVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC)get_gl_func_address_name("glVertexAttribL1dv");
	if (!fglVertexAttribL1dv) { print_msg("glVertexAttribL1dv not loaded"); }
	fglVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC)get_gl_func_address_name("glVertexAttribL2dv");
	if (!fglVertexAttribL2dv) { print_msg("glVertexAttribL2dv not loaded"); }
	fglVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC)get_gl_func_address_name("glVertexAttribL3dv");
	if (!fglVertexAttribL3dv) { print_msg("glVertexAttribL3dv not loaded"); }
	fglVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC)get_gl_func_address_name("glVertexAttribL4dv");
	if (!fglVertexAttribL4dv) { print_msg("glVertexAttribL4dv not loaded"); }
	fglVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC)get_gl_func_address_name("glVertexAttribLPointer");
	if (!fglVertexAttribLPointer) { print_msg("glVertexAttribLPointer not loaded"); }
	fglGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC)get_gl_func_address_name("glGetVertexAttribLdv");
	if (!fglGetVertexAttribLdv) { print_msg("glGetVertexAttribLdv not loaded"); }
	fglViewportArrayv = (PFNGLVIEWPORTARRAYVPROC)get_gl_func_address_name("glViewportArrayv");
	if (!fglViewportArrayv) { print_msg("glViewportArrayv not loaded"); }
	fglViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC)get_gl_func_address_name("glViewportIndexedf");
	if (!fglViewportIndexedf) { print_msg("glViewportIndexedf not loaded"); }
	fglViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC)get_gl_func_address_name("glViewportIndexedfv");
	if (!fglViewportIndexedfv) { print_msg("glViewportIndexedfv not loaded"); }
	fglScissorArrayv = (PFNGLSCISSORARRAYVPROC)get_gl_func_address_name("glScissorArrayv");
	if (!fglScissorArrayv) { print_msg("glScissorArrayv not loaded"); }
	fglScissorIndexed = (PFNGLSCISSORINDEXEDPROC)get_gl_func_address_name("glScissorIndexed");
	if (!fglScissorIndexed) { print_msg("glScissorIndexed not loaded"); }
	fglScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC)get_gl_func_address_name("glScissorIndexedv");
	if (!fglScissorIndexedv) { print_msg("glScissorIndexedv not loaded"); }
	fglDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC)get_gl_func_address_name("glDepthRangeArrayv");
	if (!fglDepthRangeArrayv) { print_msg("glDepthRangeArrayv not loaded"); }
	fglDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC)get_gl_func_address_name("glDepthRangeIndexed");
	if (!fglDepthRangeIndexed) { print_msg("glDepthRangeIndexed not loaded"); }
	fglGetFloati_v = (PFNGLGETFLOATI_VPROC)get_gl_func_address_name("glGetFloati_v");
	if (!fglGetFloati_v) { print_msg("glGetFloati_v not loaded"); }
	fglGetDoublei_v = (PFNGLGETDOUBLEI_VPROC)get_gl_func_address_name("glGetDoublei_v");
	if (!fglGetDoublei_v) { print_msg("glGetDoublei_v not loaded"); }
}



void glfn_core_ver_4_2::init(PFN_loadfunc load) {
	glfn_core_ver_4_1::init(load);

	fglDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)get_gl_func_address_name("glDrawArraysInstancedBaseInstance");
	if (!fglDrawArraysInstancedBaseInstance) { print_msg("glDrawArraysInstancedBaseInstance not loaded"); }
	fglDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)get_gl_func_address_name("glDrawElementsInstancedBaseInstance");
	if (!fglDrawElementsInstancedBaseInstance) { print_msg("glDrawElementsInstancedBaseInstance not loaded"); }
	fglDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)get_gl_func_address_name("glDrawElementsInstancedBaseVertexBaseInstance");
	if (!fglDrawElementsInstancedBaseVertexBaseInstance) { print_msg("glDrawElementsInstancedBaseVertexBaseInstance not loaded"); }
	fglGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC)get_gl_func_address_name("glGetInternalformativ");
	if (!fglGetInternalformativ) { print_msg("glGetInternalformativ not loaded"); }
	fglGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)get_gl_func_address_name("glGetActiveAtomicCounterBufferiv");
	if (!fglGetActiveAtomicCounterBufferiv) { print_msg("glGetActiveAtomicCounterBufferiv not loaded"); }
	fglBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC)get_gl_func_address_name("glBindImageTexture");
	if (!fglBindImageTexture) { print_msg("glBindImageTexture not loaded"); }
	fglMemoryBarrier = (PFNGLMEMORYBARRIERPROC)get_gl_func_address_name("glMemoryBarrier");
	if (!fglMemoryBarrier) { print_msg("glMemoryBarrier not loaded"); }
	fglTexStorage1D = (PFNGLTEXSTORAGE1DPROC)get_gl_func_address_name("glTexStorage1D");
	if (!fglTexStorage1D) { print_msg("glTexStorage1D not loaded"); }
	fglTexStorage2D = (PFNGLTEXSTORAGE2DPROC)get_gl_func_address_name("glTexStorage2D");
	if (!fglTexStorage2D) { print_msg("glTexStorage2D not loaded"); }
	fglTexStorage3D = (PFNGLTEXSTORAGE3DPROC)get_gl_func_address_name("glTexStorage3D");
	if (!fglTexStorage3D) { print_msg("glTexStorage3D not loaded"); }
	fglDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)get_gl_func_address_name("glDrawTransformFeedbackInstanced");
	if (!fglDrawTransformFeedbackInstanced) { print_msg("glDrawTransformFeedbackInstanced not loaded"); }
	fglDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)get_gl_func_address_name("glDrawTransformFeedbackStreamInstanced");
	if (!fglDrawTransformFeedbackStreamInstanced) { print_msg("glDrawTransformFeedbackStreamInstanced not loaded"); }
}



void glfn_core_ver_4_3::init(PFN_loadfunc load) {
	glfn_core_ver_4_2::init(load);

	fglClearBufferData = (PFNGLCLEARBUFFERDATAPROC)get_gl_func_address_name("glClearBufferData");
	if (!fglClearBufferData) { print_msg("glClearBufferData not loaded"); }
	fglClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC)get_gl_func_address_name("glClearBufferSubData");
	if (!fglClearBufferSubData) { print_msg("glClearBufferSubData not loaded"); }
	fglDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC)get_gl_func_address_name("glDispatchCompute");
	if (!fglDispatchCompute) { print_msg("glDispatchCompute not loaded"); }
	fglDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC)get_gl_func_address_name("glDispatchComputeIndirect");
	if (!fglDispatchComputeIndirect) { print_msg("glDispatchComputeIndirect not loaded"); }
	fglCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC)get_gl_func_address_name("glCopyImageSubData");
	if (!fglCopyImageSubData) { print_msg("glCopyImageSubData not loaded"); }
	fglFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC)get_gl_func_address_name("glFramebufferParameteri");
	if (!fglFramebufferParameteri) { print_msg("glFramebufferParameteri not loaded"); }
	fglGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetFramebufferParameteriv");
	if (!fglGetFramebufferParameteriv) { print_msg("glGetFramebufferParameteriv not loaded"); }
	fglGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC)get_gl_func_address_name("glGetInternalformati64v");
	if (!fglGetInternalformati64v) { print_msg("glGetInternalformati64v not loaded"); }
	fglInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC)get_gl_func_address_name("glInvalidateTexSubImage");
	if (!fglInvalidateTexSubImage) { print_msg("glInvalidateTexSubImage not loaded"); }
	fglInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC)get_gl_func_address_name("glInvalidateTexImage");
	if (!fglInvalidateTexImage) { print_msg("glInvalidateTexImage not loaded"); }
	fglInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC)get_gl_func_address_name("glInvalidateBufferSubData");
	if (!fglInvalidateBufferSubData) { print_msg("glInvalidateBufferSubData not loaded"); }
	fglInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC)get_gl_func_address_name("glInvalidateBufferData");
	if (!fglInvalidateBufferData) { print_msg("glInvalidateBufferData not loaded"); }
	fglInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC)get_gl_func_address_name("glInvalidateFramebuffer");
	if (!fglInvalidateFramebuffer) { print_msg("glInvalidateFramebuffer not loaded"); }
	fglInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC)get_gl_func_address_name("glInvalidateSubFramebuffer");
	if (!fglInvalidateSubFramebuffer) { print_msg("glInvalidateSubFramebuffer not loaded"); }
	fglMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC)get_gl_func_address_name("glMultiDrawArraysIndirect");
	if (!fglMultiDrawArraysIndirect) { print_msg("glMultiDrawArraysIndirect not loaded"); }
	fglMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC)get_gl_func_address_name("glMultiDrawElementsIndirect");
	if (!fglMultiDrawElementsIndirect) { print_msg("glMultiDrawElementsIndirect not loaded"); }
	fglGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC)get_gl_func_address_name("glGetProgramInterfaceiv");
	if (!fglGetProgramInterfaceiv) { print_msg("glGetProgramInterfaceiv not loaded"); }
	fglGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC)get_gl_func_address_name("glGetProgramResourceIndex");
	if (!fglGetProgramResourceIndex) { print_msg("glGetProgramResourceIndex not loaded"); }
	fglGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC)get_gl_func_address_name("glGetProgramResourceName");
	if (!fglGetProgramResourceName) { print_msg("glGetProgramResourceName not loaded"); }
	fglGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC)get_gl_func_address_name("glGetProgramResourceiv");
	if (!fglGetProgramResourceiv) { print_msg("glGetProgramResourceiv not loaded"); }
	fglGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC)get_gl_func_address_name("glGetProgramResourceLocation");
	if (!fglGetProgramResourceLocation) { print_msg("glGetProgramResourceLocation not loaded"); }
	fglGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)get_gl_func_address_name("glGetProgramResourceLocationIndex");
	if (!fglGetProgramResourceLocationIndex) { print_msg("glGetProgramResourceLocationIndex not loaded"); }
	fglShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC)get_gl_func_address_name("glShaderStorageBlockBinding");
	if (!fglShaderStorageBlockBinding) { print_msg("glShaderStorageBlockBinding not loaded"); }
	fglTexBufferRange = (PFNGLTEXBUFFERRANGEPROC)get_gl_func_address_name("glTexBufferRange");
	if (!fglTexBufferRange) { print_msg("glTexBufferRange not loaded"); }
	fglTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC)get_gl_func_address_name("glTexStorage2DMultisample");
	if (!fglTexStorage2DMultisample) { print_msg("glTexStorage2DMultisample not loaded"); }
	fglTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC)get_gl_func_address_name("glTexStorage3DMultisample");
	if (!fglTexStorage3DMultisample) { print_msg("glTexStorage3DMultisample not loaded"); }
	fglTextureView = (PFNGLTEXTUREVIEWPROC)get_gl_func_address_name("glTextureView");
	if (!fglTextureView) { print_msg("glTextureView not loaded"); }
	fglBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC)get_gl_func_address_name("glBindVertexBuffer");
	if (!fglBindVertexBuffer) { print_msg("glBindVertexBuffer not loaded"); }
	fglVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC)get_gl_func_address_name("glVertexAttribFormat");
	if (!fglVertexAttribFormat) { print_msg("glVertexAttribFormat not loaded"); }
	fglVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC)get_gl_func_address_name("glVertexAttribIFormat");
	if (!fglVertexAttribIFormat) { print_msg("glVertexAttribIFormat not loaded"); }
	fglVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC)get_gl_func_address_name("glVertexAttribLFormat");
	if (!fglVertexAttribLFormat) { print_msg("glVertexAttribLFormat not loaded"); }
	fglVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC)get_gl_func_address_name("glVertexAttribBinding");
	if (!fglVertexAttribBinding) { print_msg("glVertexAttribBinding not loaded"); }
	fglVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC)get_gl_func_address_name("glVertexBindingDivisor");
	if (!fglVertexBindingDivisor) { print_msg("glVertexBindingDivisor not loaded"); }
	fglDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC)get_gl_func_address_name("glDebugMessageControl");
	if (!fglDebugMessageControl) { print_msg("glDebugMessageControl not loaded"); }
	fglDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC)get_gl_func_address_name("glDebugMessageInsert");
	if (!fglDebugMessageInsert) { print_msg("glDebugMessageInsert not loaded"); }
	fglDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC)get_gl_func_address_name("glDebugMessageCallback");
	if (!fglDebugMessageCallback) { print_msg("glDebugMessageCallback not loaded"); }
	fglGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC)get_gl_func_address_name("glGetDebugMessageLog");
	if (!fglGetDebugMessageLog) { print_msg("glGetDebugMessageLog not loaded"); }
	fglPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC)get_gl_func_address_name("glPushDebugGroup");
	if (!fglPushDebugGroup) { print_msg("glPushDebugGroup not loaded"); }
	fglPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC)get_gl_func_address_name("glPopDebugGroup");
	if (!fglPopDebugGroup) { print_msg("glPopDebugGroup not loaded"); }
	fglObjectLabel = (PFNGLOBJECTLABELPROC)get_gl_func_address_name("glObjectLabel");
	if (!fglObjectLabel) { print_msg("glObjectLabel not loaded"); }
	fglGetObjectLabel = (PFNGLGETOBJECTLABELPROC)get_gl_func_address_name("glGetObjectLabel");
	if (!fglGetObjectLabel) { print_msg("glGetObjectLabel not loaded"); }
	fglObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC)get_gl_func_address_name("glObjectPtrLabel");
	if (!fglObjectPtrLabel) { print_msg("glObjectPtrLabel not loaded"); }
	fglGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC)get_gl_func_address_name("glGetObjectPtrLabel");
	if (!fglGetObjectPtrLabel) { print_msg("glGetObjectPtrLabel not loaded"); }
}



void glfn_core_ver_4_4::init(PFN_loadfunc load) {
	glfn_core_ver_4_3::init(load);

	fglBufferStorage = (PFNGLBUFFERSTORAGEPROC)get_gl_func_address_name("glBufferStorage");
	if (!fglBufferStorage) { print_msg("glBufferStorage not loaded"); }
	fglClearTexImage = (PFNGLCLEARTEXIMAGEPROC)get_gl_func_address_name("glClearTexImage");
	if (!fglClearTexImage) { print_msg("glClearTexImage not loaded"); }
	fglClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC)get_gl_func_address_name("glClearTexSubImage");
	if (!fglClearTexSubImage) { print_msg("glClearTexSubImage not loaded"); }
	fglBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC)get_gl_func_address_name("glBindBuffersBase");
	if (!fglBindBuffersBase) { print_msg("glBindBuffersBase not loaded"); }
	fglBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC)get_gl_func_address_name("glBindBuffersRange");
	if (!fglBindBuffersRange) { print_msg("glBindBuffersRange not loaded"); }
	fglBindTextures = (PFNGLBINDTEXTURESPROC)get_gl_func_address_name("glBindTextures");
	if (!fglBindTextures) { print_msg("glBindTextures not loaded"); }
	fglBindSamplers = (PFNGLBINDSAMPLERSPROC)get_gl_func_address_name("glBindSamplers");
	if (!fglBindSamplers) { print_msg("glBindSamplers not loaded"); }
	fglBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC)get_gl_func_address_name("glBindImageTextures");
	if (!fglBindImageTextures) { print_msg("glBindImageTextures not loaded"); }
	fglBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC)get_gl_func_address_name("glBindVertexBuffers");
	if (!fglBindVertexBuffers) { print_msg("glBindVertexBuffers not loaded"); }
}



void glfn_core_ver_4_5::init(PFN_loadfunc load) {
	glfn_core_ver_4_4::init(load);

	fglClipControl = (PFNGLCLIPCONTROLPROC)get_gl_func_address_name("glClipControl");
	if (!fglClipControl) { print_msg("glClipControl not loaded"); }
	fglCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC)get_gl_func_address_name("glCreateTransformFeedbacks");
	if (!fglCreateTransformFeedbacks) { print_msg("glCreateTransformFeedbacks not loaded"); }
	fglTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)get_gl_func_address_name("glTransformFeedbackBufferBase");
	if (!fglTransformFeedbackBufferBase) { print_msg("glTransformFeedbackBufferBase not loaded"); }
	fglTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)get_gl_func_address_name("glTransformFeedbackBufferRange");
	if (!fglTransformFeedbackBufferRange) { print_msg("glTransformFeedbackBufferRange not loaded"); }
	fglGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC)get_gl_func_address_name("glGetTransformFeedbackiv");
	if (!fglGetTransformFeedbackiv) { print_msg("glGetTransformFeedbackiv not loaded"); }
	fglGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC)get_gl_func_address_name("glGetTransformFeedbacki_v");
	if (!fglGetTransformFeedbacki_v) { print_msg("glGetTransformFeedbacki_v not loaded"); }
	fglGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC)get_gl_func_address_name("glGetTransformFeedbacki64_v");
	if (!fglGetTransformFeedbacki64_v) { print_msg("glGetTransformFeedbacki64_v not loaded"); }
	fglCreateBuffers = (PFNGLCREATEBUFFERSPROC)get_gl_func_address_name("glCreateBuffers");
	if (!fglCreateBuffers) { print_msg("glCreateBuffers not loaded"); }
	fglNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC)get_gl_func_address_name("glNamedBufferStorage");
	if (!fglNamedBufferStorage) { print_msg("glNamedBufferStorage not loaded"); }
	fglNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC)get_gl_func_address_name("glNamedBufferData");
	if (!fglNamedBufferData) { print_msg("glNamedBufferData not loaded"); }
	fglNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC)get_gl_func_address_name("glNamedBufferSubData");
	if (!fglNamedBufferSubData) { print_msg("glNamedBufferSubData not loaded"); }
	fglCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC)get_gl_func_address_name("glCopyNamedBufferSubData");
	if (!fglCopyNamedBufferSubData) { print_msg("glCopyNamedBufferSubData not loaded"); }
	fglClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC)get_gl_func_address_name("glClearNamedBufferData");
	if (!fglClearNamedBufferData) { print_msg("glClearNamedBufferData not loaded"); }
	fglClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC)get_gl_func_address_name("glClearNamedBufferSubData");
	if (!fglClearNamedBufferSubData) { print_msg("glClearNamedBufferSubData not loaded"); }
	fglMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC)get_gl_func_address_name("glMapNamedBuffer");
	if (!fglMapNamedBuffer) { print_msg("glMapNamedBuffer not loaded"); }
	fglMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC)get_gl_func_address_name("glMapNamedBufferRange");
	if (!fglMapNamedBufferRange) { print_msg("glMapNamedBufferRange not loaded"); }
	fglUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC)get_gl_func_address_name("glUnmapNamedBuffer");
	if (!fglUnmapNamedBuffer) { print_msg("glUnmapNamedBuffer not loaded"); }
	fglFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)get_gl_func_address_name("glFlushMappedNamedBufferRange");
	if (!fglFlushMappedNamedBufferRange) { print_msg("glFlushMappedNamedBufferRange not loaded"); }
	fglGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetNamedBufferParameteriv");
	if (!fglGetNamedBufferParameteriv) { print_msg("glGetNamedBufferParameteriv not loaded"); }
	fglGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)get_gl_func_address_name("glGetNamedBufferParameteri64v");
	if (!fglGetNamedBufferParameteri64v) { print_msg("glGetNamedBufferParameteri64v not loaded"); }
	fglGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC)get_gl_func_address_name("glGetNamedBufferPointerv");
	if (!fglGetNamedBufferPointerv) { print_msg("glGetNamedBufferPointerv not loaded"); }
	fglGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC)get_gl_func_address_name("glGetNamedBufferSubData");
	if (!fglGetNamedBufferSubData) { print_msg("glGetNamedBufferSubData not loaded"); }
	fglCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC)get_gl_func_address_name("glCreateFramebuffers");
	if (!fglCreateFramebuffers) { print_msg("glCreateFramebuffers not loaded"); }
	fglNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)get_gl_func_address_name("glNamedFramebufferRenderbuffer");
	if (!fglNamedFramebufferRenderbuffer) { print_msg("glNamedFramebufferRenderbuffer not loaded"); }
	fglNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)get_gl_func_address_name("glNamedFramebufferParameteri");
	if (!fglNamedFramebufferParameteri) { print_msg("glNamedFramebufferParameteri not loaded"); }
	fglNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)get_gl_func_address_name("glNamedFramebufferTexture");
	if (!fglNamedFramebufferTexture) { print_msg("glNamedFramebufferTexture not loaded"); }
	fglNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)get_gl_func_address_name("glNamedFramebufferTextureLayer");
	if (!fglNamedFramebufferTextureLayer) { print_msg("glNamedFramebufferTextureLayer not loaded"); }
	fglNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)get_gl_func_address_name("glNamedFramebufferDrawBuffer");
	if (!fglNamedFramebufferDrawBuffer) { print_msg("glNamedFramebufferDrawBuffer not loaded"); }
	fglNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)get_gl_func_address_name("glNamedFramebufferDrawBuffers");
	if (!fglNamedFramebufferDrawBuffers) { print_msg("glNamedFramebufferDrawBuffers not loaded"); }
	fglNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)get_gl_func_address_name("glNamedFramebufferReadBuffer");
	if (!fglNamedFramebufferReadBuffer) { print_msg("glNamedFramebufferReadBuffer not loaded"); }
	fglInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)get_gl_func_address_name("glInvalidateNamedFramebufferData");
	if (!fglInvalidateNamedFramebufferData) { print_msg("glInvalidateNamedFramebufferData not loaded"); }
	fglInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)get_gl_func_address_name("glInvalidateNamedFramebufferSubData");
	if (!fglInvalidateNamedFramebufferSubData) { print_msg("glInvalidateNamedFramebufferSubData not loaded"); }
	fglClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)get_gl_func_address_name("glClearNamedFramebufferiv");
	if (!fglClearNamedFramebufferiv) { print_msg("glClearNamedFramebufferiv not loaded"); }
	fglClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)get_gl_func_address_name("glClearNamedFramebufferuiv");
	if (!fglClearNamedFramebufferuiv) { print_msg("glClearNamedFramebufferuiv not loaded"); }
	fglClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)get_gl_func_address_name("glClearNamedFramebufferfv");
	if (!fglClearNamedFramebufferfv) { print_msg("glClearNamedFramebufferfv not loaded"); }
	fglClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)get_gl_func_address_name("glClearNamedFramebufferfi");
	if (!fglClearNamedFramebufferfi) { print_msg("glClearNamedFramebufferfi not loaded"); }
	fglBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC)get_gl_func_address_name("glBlitNamedFramebuffer");
	if (!fglBlitNamedFramebuffer) { print_msg("glBlitNamedFramebuffer not loaded"); }
	fglCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)get_gl_func_address_name("glCheckNamedFramebufferStatus");
	if (!fglCheckNamedFramebufferStatus) { print_msg("glCheckNamedFramebufferStatus not loaded"); }
	fglGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetNamedFramebufferParameteriv");
	if (!fglGetNamedFramebufferParameteriv) { print_msg("glGetNamedFramebufferParameteriv not loaded"); }
	fglGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)get_gl_func_address_name("glGetNamedFramebufferAttachmentParameteriv");
	if (!fglGetNamedFramebufferAttachmentParameteriv) { print_msg("glGetNamedFramebufferAttachmentParameteriv not loaded"); }
	fglCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC)get_gl_func_address_name("glCreateRenderbuffers");
	if (!fglCreateRenderbuffers) { print_msg("glCreateRenderbuffers not loaded"); }
	fglNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC)get_gl_func_address_name("glNamedRenderbufferStorage");
	if (!fglNamedRenderbufferStorage) { print_msg("glNamedRenderbufferStorage not loaded"); }
	fglNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)get_gl_func_address_name("glNamedRenderbufferStorageMultisample");
	if (!fglNamedRenderbufferStorageMultisample) { print_msg("glNamedRenderbufferStorageMultisample not loaded"); }
	fglGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)get_gl_func_address_name("glGetNamedRenderbufferParameteriv");
	if (!fglGetNamedRenderbufferParameteriv) { print_msg("glGetNamedRenderbufferParameteriv not loaded"); }
	fglCreateTextures = (PFNGLCREATETEXTURESPROC)get_gl_func_address_name("glCreateTextures");
	if (!fglCreateTextures) { print_msg("glCreateTextures not loaded"); }
	fglTextureBuffer = (PFNGLTEXTUREBUFFERPROC)get_gl_func_address_name("glTextureBuffer");
	if (!fglTextureBuffer) { print_msg("glTextureBuffer not loaded"); }
	fglTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC)get_gl_func_address_name("glTextureBufferRange");
	if (!fglTextureBufferRange) { print_msg("glTextureBufferRange not loaded"); }
	fglTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC)get_gl_func_address_name("glTextureStorage1D");
	if (!fglTextureStorage1D) { print_msg("glTextureStorage1D not loaded"); }
	fglTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC)get_gl_func_address_name("glTextureStorage2D");
	if (!fglTextureStorage2D) { print_msg("glTextureStorage2D not loaded"); }
	fglTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC)get_gl_func_address_name("glTextureStorage3D");
	if (!fglTextureStorage3D) { print_msg("glTextureStorage3D not loaded"); }
	fglTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)get_gl_func_address_name("glTextureStorage2DMultisample");
	if (!fglTextureStorage2DMultisample) { print_msg("glTextureStorage2DMultisample not loaded"); }
	fglTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)get_gl_func_address_name("glTextureStorage3DMultisample");
	if (!fglTextureStorage3DMultisample) { print_msg("glTextureStorage3DMultisample not loaded"); }
	fglTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC)get_gl_func_address_name("glTextureSubImage1D");
	if (!fglTextureSubImage1D) { print_msg("glTextureSubImage1D not loaded"); }
	fglTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC)get_gl_func_address_name("glTextureSubImage2D");
	if (!fglTextureSubImage2D) { print_msg("glTextureSubImage2D not loaded"); }
	fglTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC)get_gl_func_address_name("glTextureSubImage3D");
	if (!fglTextureSubImage3D) { print_msg("glTextureSubImage3D not loaded"); }
	fglCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)get_gl_func_address_name("glCompressedTextureSubImage1D");
	if (!fglCompressedTextureSubImage1D) { print_msg("glCompressedTextureSubImage1D not loaded"); }
	fglCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)get_gl_func_address_name("glCompressedTextureSubImage2D");
	if (!fglCompressedTextureSubImage2D) { print_msg("glCompressedTextureSubImage2D not loaded"); }
	fglCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)get_gl_func_address_name("glCompressedTextureSubImage3D");
	if (!fglCompressedTextureSubImage3D) { print_msg("glCompressedTextureSubImage3D not loaded"); }
	fglCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC)get_gl_func_address_name("glCopyTextureSubImage1D");
	if (!fglCopyTextureSubImage1D) { print_msg("glCopyTextureSubImage1D not loaded"); }
	fglCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC)get_gl_func_address_name("glCopyTextureSubImage2D");
	if (!fglCopyTextureSubImage2D) { print_msg("glCopyTextureSubImage2D not loaded"); }
	fglCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC)get_gl_func_address_name("glCopyTextureSubImage3D");
	if (!fglCopyTextureSubImage3D) { print_msg("glCopyTextureSubImage3D not loaded"); }
	fglTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC)get_gl_func_address_name("glTextureParameterf");
	if (!fglTextureParameterf) { print_msg("glTextureParameterf not loaded"); }
	fglTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC)get_gl_func_address_name("glTextureParameterfv");
	if (!fglTextureParameterfv) { print_msg("glTextureParameterfv not loaded"); }
	fglTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC)get_gl_func_address_name("glTextureParameteri");
	if (!fglTextureParameteri) { print_msg("glTextureParameteri not loaded"); }
	fglTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC)get_gl_func_address_name("glTextureParameterIiv");
	if (!fglTextureParameterIiv) { print_msg("glTextureParameterIiv not loaded"); }
	fglTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC)get_gl_func_address_name("glTextureParameterIuiv");
	if (!fglTextureParameterIuiv) { print_msg("glTextureParameterIuiv not loaded"); }
	fglTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC)get_gl_func_address_name("glTextureParameteriv");
	if (!fglTextureParameteriv) { print_msg("glTextureParameteriv not loaded"); }
	fglGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC)get_gl_func_address_name("glGenerateTextureMipmap");
	if (!fglGenerateTextureMipmap) { print_msg("glGenerateTextureMipmap not loaded"); }
	fglBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC)get_gl_func_address_name("glBindTextureUnit");
	if (!fglBindTextureUnit) { print_msg("glBindTextureUnit not loaded"); }
	fglGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC)get_gl_func_address_name("glGetTextureImage");
	if (!fglGetTextureImage) { print_msg("glGetTextureImage not loaded"); }
	fglGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)get_gl_func_address_name("glGetCompressedTextureImage");
	if (!fglGetCompressedTextureImage) { print_msg("glGetCompressedTextureImage not loaded"); }
	fglGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC)get_gl_func_address_name("glGetTextureLevelParameterfv");
	if (!fglGetTextureLevelParameterfv) { print_msg("glGetTextureLevelParameterfv not loaded"); }
	fglGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC)get_gl_func_address_name("glGetTextureLevelParameteriv");
	if (!fglGetTextureLevelParameteriv) { print_msg("glGetTextureLevelParameteriv not loaded"); }
	fglGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC)get_gl_func_address_name("glGetTextureParameterfv");
	if (!fglGetTextureParameterfv) { print_msg("glGetTextureParameterfv not loaded"); }
	fglGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC)get_gl_func_address_name("glGetTextureParameterIiv");
	if (!fglGetTextureParameterIiv) { print_msg("glGetTextureParameterIiv not loaded"); }
	fglGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC)get_gl_func_address_name("glGetTextureParameterIuiv");
	if (!fglGetTextureParameterIuiv) { print_msg("glGetTextureParameterIuiv not loaded"); }
	fglGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC)get_gl_func_address_name("glGetTextureParameteriv");
	if (!fglGetTextureParameteriv) { print_msg("glGetTextureParameteriv not loaded"); }
	fglCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC)get_gl_func_address_name("glCreateVertexArrays");
	if (!fglCreateVertexArrays) { print_msg("glCreateVertexArrays not loaded"); }
	fglDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC)get_gl_func_address_name("glDisableVertexArrayAttrib");
	if (!fglDisableVertexArrayAttrib) { print_msg("glDisableVertexArrayAttrib not loaded"); }
	fglEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC)get_gl_func_address_name("glEnableVertexArrayAttrib");
	if (!fglEnableVertexArrayAttrib) { print_msg("glEnableVertexArrayAttrib not loaded"); }
	fglVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC)get_gl_func_address_name("glVertexArrayElementBuffer");
	if (!fglVertexArrayElementBuffer) { print_msg("glVertexArrayElementBuffer not loaded"); }
	fglVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC)get_gl_func_address_name("glVertexArrayVertexBuffer");
	if (!fglVertexArrayVertexBuffer) { print_msg("glVertexArrayVertexBuffer not loaded"); }
	fglVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC)get_gl_func_address_name("glVertexArrayVertexBuffers");
	if (!fglVertexArrayVertexBuffers) { print_msg("glVertexArrayVertexBuffers not loaded"); }
	fglVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC)get_gl_func_address_name("glVertexArrayAttribBinding");
	if (!fglVertexArrayAttribBinding) { print_msg("glVertexArrayAttribBinding not loaded"); }
	fglVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC)get_gl_func_address_name("glVertexArrayAttribFormat");
	if (!fglVertexArrayAttribFormat) { print_msg("glVertexArrayAttribFormat not loaded"); }
	fglVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC)get_gl_func_address_name("glVertexArrayAttribIFormat");
	if (!fglVertexArrayAttribIFormat) { print_msg("glVertexArrayAttribIFormat not loaded"); }
	fglVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC)get_gl_func_address_name("glVertexArrayAttribLFormat");
	if (!fglVertexArrayAttribLFormat) { print_msg("glVertexArrayAttribLFormat not loaded"); }
	fglVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC)get_gl_func_address_name("glVertexArrayBindingDivisor");
	if (!fglVertexArrayBindingDivisor) { print_msg("glVertexArrayBindingDivisor not loaded"); }
	fglGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC)get_gl_func_address_name("glGetVertexArrayiv");
	if (!fglGetVertexArrayiv) { print_msg("glGetVertexArrayiv not loaded"); }
	fglGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC)get_gl_func_address_name("glGetVertexArrayIndexediv");
	if (!fglGetVertexArrayIndexediv) { print_msg("glGetVertexArrayIndexediv not loaded"); }
	fglGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC)get_gl_func_address_name("glGetVertexArrayIndexed64iv");
	if (!fglGetVertexArrayIndexed64iv) { print_msg("glGetVertexArrayIndexed64iv not loaded"); }
	fglCreateSamplers = (PFNGLCREATESAMPLERSPROC)get_gl_func_address_name("glCreateSamplers");
	if (!fglCreateSamplers) { print_msg("glCreateSamplers not loaded"); }
	fglCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC)get_gl_func_address_name("glCreateProgramPipelines");
	if (!fglCreateProgramPipelines) { print_msg("glCreateProgramPipelines not loaded"); }
	fglCreateQueries = (PFNGLCREATEQUERIESPROC)get_gl_func_address_name("glCreateQueries");
	if (!fglCreateQueries) { print_msg("glCreateQueries not loaded"); }
	fglGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC)get_gl_func_address_name("glGetQueryBufferObjecti64v");
	if (!fglGetQueryBufferObjecti64v) { print_msg("glGetQueryBufferObjecti64v not loaded"); }
	fglGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC)get_gl_func_address_name("glGetQueryBufferObjectiv");
	if (!fglGetQueryBufferObjectiv) { print_msg("glGetQueryBufferObjectiv not loaded"); }
	fglGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC)get_gl_func_address_name("glGetQueryBufferObjectui64v");
	if (!fglGetQueryBufferObjectui64v) { print_msg("glGetQueryBufferObjectui64v not loaded"); }
	fglGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC)get_gl_func_address_name("glGetQueryBufferObjectuiv");
	if (!fglGetQueryBufferObjectuiv) { print_msg("glGetQueryBufferObjectuiv not loaded"); }
	fglMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC)get_gl_func_address_name("glMemoryBarrierByRegion");
	if (!fglMemoryBarrierByRegion) { print_msg("glMemoryBarrierByRegion not loaded"); }
	fglGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC)get_gl_func_address_name("glGetTextureSubImage");
	if (!fglGetTextureSubImage) { print_msg("glGetTextureSubImage not loaded"); }
	fglGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)get_gl_func_address_name("glGetCompressedTextureSubImage");
	if (!fglGetCompressedTextureSubImage) { print_msg("glGetCompressedTextureSubImage not loaded"); }
	fglGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC)get_gl_func_address_name("glGetGraphicsResetStatus");
	if (!fglGetGraphicsResetStatus) { print_msg("glGetGraphicsResetStatus not loaded"); }
	fglGetnCompressedTexImage = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC)get_gl_func_address_name("glGetnCompressedTexImage");
	if (!fglGetnCompressedTexImage) { print_msg("glGetnCompressedTexImage not loaded"); }
	fglGetnTexImage = (PFNGLGETNTEXIMAGEPROC)get_gl_func_address_name("glGetnTexImage");
	if (!fglGetnTexImage) { print_msg("glGetnTexImage not loaded"); }
	fglGetnUniformdv = (PFNGLGETNUNIFORMDVPROC)get_gl_func_address_name("glGetnUniformdv");
	if (!fglGetnUniformdv) { print_msg("glGetnUniformdv not loaded"); }
	fglGetnUniformfv = (PFNGLGETNUNIFORMFVPROC)get_gl_func_address_name("glGetnUniformfv");
	if (!fglGetnUniformfv) { print_msg("glGetnUniformfv not loaded"); }
	fglGetnUniformiv = (PFNGLGETNUNIFORMIVPROC)get_gl_func_address_name("glGetnUniformiv");
	if (!fglGetnUniformiv) { print_msg("glGetnUniformiv not loaded"); }
	fglGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC)get_gl_func_address_name("glGetnUniformuiv");
	if (!fglGetnUniformuiv) { print_msg("glGetnUniformuiv not loaded"); }
	fglReadnPixels = (PFNGLREADNPIXELSPROC)get_gl_func_address_name("glReadnPixels");
	if (!fglReadnPixels) { print_msg("glReadnPixels not loaded"); }
	fglTextureBarrier = (PFNGLTEXTUREBARRIERPROC)get_gl_func_address_name("glTextureBarrier");
	if (!fglTextureBarrier) { print_msg("glTextureBarrier not loaded"); }
}



void glfn_core_ver_4_6::init(PFN_loadfunc load) {
	glfn_core_ver_4_5::init(load);

	fglSpecializeShader = (PFNGLSPECIALIZESHADERPROC)get_gl_func_address_name("glSpecializeShader");
	if (!fglSpecializeShader) { print_msg("glSpecializeShader not loaded"); }
	fglMultiDrawArraysIndirectCount = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC)get_gl_func_address_name("glMultiDrawArraysIndirectCount");
	if (!fglMultiDrawArraysIndirectCount) { print_msg("glMultiDrawArraysIndirectCount not loaded"); }
	fglMultiDrawElementsIndirectCount = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC)get_gl_func_address_name("glMultiDrawElementsIndirectCount");
	if (!fglMultiDrawElementsIndirectCount) { print_msg("glMultiDrawElementsIndirectCount not loaded"); }
	fglPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC)get_gl_func_address_name("glPolygonOffsetClamp");
	if (!fglPolygonOffsetClamp) { print_msg("glPolygonOffsetClamp not loaded"); }
}



