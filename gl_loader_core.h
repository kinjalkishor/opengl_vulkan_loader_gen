#pragma once

#include <glcorearb.h>

typedef void (*PFN_apiproc)(void);
typedef PFN_apiproc (*PFN_loadfunc)(const char *name);
void* get_gl_func_address_name(const char* name);



class glfn_core_ver_1_0 {
public:

	PFNGLCULLFACEPROC fglCullFace = nullptr;
	PFNGLFRONTFACEPROC fglFrontFace = nullptr;
	PFNGLHINTPROC fglHint = nullptr;
	PFNGLLINEWIDTHPROC fglLineWidth = nullptr;
	PFNGLPOINTSIZEPROC fglPointSize = nullptr;
	PFNGLPOLYGONMODEPROC fglPolygonMode = nullptr;
	PFNGLSCISSORPROC fglScissor = nullptr;
	PFNGLTEXPARAMETERFPROC fglTexParameterf = nullptr;
	PFNGLTEXPARAMETERFVPROC fglTexParameterfv = nullptr;
	PFNGLTEXPARAMETERIPROC fglTexParameteri = nullptr;
	PFNGLTEXPARAMETERIVPROC fglTexParameteriv = nullptr;
	PFNGLTEXIMAGE1DPROC fglTexImage1D = nullptr;
	PFNGLTEXIMAGE2DPROC fglTexImage2D = nullptr;
	PFNGLDRAWBUFFERPROC fglDrawBuffer = nullptr;
	PFNGLCLEARPROC fglClear = nullptr;
	PFNGLCLEARCOLORPROC fglClearColor = nullptr;
	PFNGLCLEARSTENCILPROC fglClearStencil = nullptr;
	PFNGLCLEARDEPTHPROC fglClearDepth = nullptr;
	PFNGLSTENCILMASKPROC fglStencilMask = nullptr;
	PFNGLCOLORMASKPROC fglColorMask = nullptr;
	PFNGLDEPTHMASKPROC fglDepthMask = nullptr;
	PFNGLDISABLEPROC fglDisable = nullptr;
	PFNGLENABLEPROC fglEnable = nullptr;
	PFNGLFINISHPROC fglFinish = nullptr;
	PFNGLFLUSHPROC fglFlush = nullptr;
	PFNGLBLENDFUNCPROC fglBlendFunc = nullptr;
	PFNGLLOGICOPPROC fglLogicOp = nullptr;
	PFNGLSTENCILFUNCPROC fglStencilFunc = nullptr;
	PFNGLSTENCILOPPROC fglStencilOp = nullptr;
	PFNGLDEPTHFUNCPROC fglDepthFunc = nullptr;
	PFNGLPIXELSTOREFPROC fglPixelStoref = nullptr;
	PFNGLPIXELSTOREIPROC fglPixelStorei = nullptr;
	PFNGLREADBUFFERPROC fglReadBuffer = nullptr;
	PFNGLREADPIXELSPROC fglReadPixels = nullptr;
	PFNGLGETBOOLEANVPROC fglGetBooleanv = nullptr;
	PFNGLGETDOUBLEVPROC fglGetDoublev = nullptr;
	PFNGLGETERRORPROC fglGetError = nullptr;
	PFNGLGETFLOATVPROC fglGetFloatv = nullptr;
	PFNGLGETINTEGERVPROC fglGetIntegerv = nullptr;
	PFNGLGETSTRINGPROC fglGetString = nullptr;
	PFNGLGETTEXIMAGEPROC fglGetTexImage = nullptr;
	PFNGLGETTEXPARAMETERFVPROC fglGetTexParameterfv = nullptr;
	PFNGLGETTEXPARAMETERIVPROC fglGetTexParameteriv = nullptr;
	PFNGLGETTEXLEVELPARAMETERFVPROC fglGetTexLevelParameterfv = nullptr;
	PFNGLGETTEXLEVELPARAMETERIVPROC fglGetTexLevelParameteriv = nullptr;
	PFNGLISENABLEDPROC fglIsEnabled = nullptr;
	PFNGLDEPTHRANGEPROC fglDepthRange = nullptr;
	PFNGLVIEWPORTPROC fglViewport = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_1_1 : public glfn_core_ver_1_0 {
public:

	PFNGLDRAWARRAYSPROC fglDrawArrays = nullptr;
	PFNGLDRAWELEMENTSPROC fglDrawElements = nullptr;
	PFNGLGETPOINTERVPROC fglGetPointerv = nullptr;
	PFNGLPOLYGONOFFSETPROC fglPolygonOffset = nullptr;
	PFNGLCOPYTEXIMAGE1DPROC fglCopyTexImage1D = nullptr;
	PFNGLCOPYTEXIMAGE2DPROC fglCopyTexImage2D = nullptr;
	PFNGLCOPYTEXSUBIMAGE1DPROC fglCopyTexSubImage1D = nullptr;
	PFNGLCOPYTEXSUBIMAGE2DPROC fglCopyTexSubImage2D = nullptr;
	PFNGLTEXSUBIMAGE1DPROC fglTexSubImage1D = nullptr;
	PFNGLTEXSUBIMAGE2DPROC fglTexSubImage2D = nullptr;
	PFNGLBINDTEXTUREPROC fglBindTexture = nullptr;
	PFNGLDELETETEXTURESPROC fglDeleteTextures = nullptr;
	PFNGLGENTEXTURESPROC fglGenTextures = nullptr;
	PFNGLISTEXTUREPROC fglIsTexture = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_1_2 : public glfn_core_ver_1_1 {
public:

	PFNGLDRAWRANGEELEMENTSPROC fglDrawRangeElements = nullptr;
	PFNGLTEXIMAGE3DPROC fglTexImage3D = nullptr;
	PFNGLTEXSUBIMAGE3DPROC fglTexSubImage3D = nullptr;
	PFNGLCOPYTEXSUBIMAGE3DPROC fglCopyTexSubImage3D = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_1_3 : public glfn_core_ver_1_2 {
public:

	PFNGLACTIVETEXTUREPROC fglActiveTexture = nullptr;
	PFNGLSAMPLECOVERAGEPROC fglSampleCoverage = nullptr;
	PFNGLCOMPRESSEDTEXIMAGE3DPROC fglCompressedTexImage3D = nullptr;
	PFNGLCOMPRESSEDTEXIMAGE2DPROC fglCompressedTexImage2D = nullptr;
	PFNGLCOMPRESSEDTEXIMAGE1DPROC fglCompressedTexImage1D = nullptr;
	PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC fglCompressedTexSubImage3D = nullptr;
	PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC fglCompressedTexSubImage2D = nullptr;
	PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC fglCompressedTexSubImage1D = nullptr;
	PFNGLGETCOMPRESSEDTEXIMAGEPROC fglGetCompressedTexImage = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_1_4 : public glfn_core_ver_1_3 {
public:

	PFNGLBLENDFUNCSEPARATEPROC fglBlendFuncSeparate = nullptr;
	PFNGLMULTIDRAWARRAYSPROC fglMultiDrawArrays = nullptr;
	PFNGLMULTIDRAWELEMENTSPROC fglMultiDrawElements = nullptr;
	PFNGLPOINTPARAMETERFPROC fglPointParameterf = nullptr;
	PFNGLPOINTPARAMETERFVPROC fglPointParameterfv = nullptr;
	PFNGLPOINTPARAMETERIPROC fglPointParameteri = nullptr;
	PFNGLPOINTPARAMETERIVPROC fglPointParameteriv = nullptr;
	PFNGLBLENDCOLORPROC fglBlendColor = nullptr;
	PFNGLBLENDEQUATIONPROC fglBlendEquation = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_1_5 : public glfn_core_ver_1_4 {
public:

	PFNGLGENQUERIESPROC fglGenQueries = nullptr;
	PFNGLDELETEQUERIESPROC fglDeleteQueries = nullptr;
	PFNGLISQUERYPROC fglIsQuery = nullptr;
	PFNGLBEGINQUERYPROC fglBeginQuery = nullptr;
	PFNGLENDQUERYPROC fglEndQuery = nullptr;
	PFNGLGETQUERYIVPROC fglGetQueryiv = nullptr;
	PFNGLGETQUERYOBJECTIVPROC fglGetQueryObjectiv = nullptr;
	PFNGLGETQUERYOBJECTUIVPROC fglGetQueryObjectuiv = nullptr;
	PFNGLBINDBUFFERPROC fglBindBuffer = nullptr;
	PFNGLDELETEBUFFERSPROC fglDeleteBuffers = nullptr;
	PFNGLGENBUFFERSPROC fglGenBuffers = nullptr;
	PFNGLISBUFFERPROC fglIsBuffer = nullptr;
	PFNGLBUFFERDATAPROC fglBufferData = nullptr;
	PFNGLBUFFERSUBDATAPROC fglBufferSubData = nullptr;
	PFNGLGETBUFFERSUBDATAPROC fglGetBufferSubData = nullptr;
	PFNGLMAPBUFFERPROC fglMapBuffer = nullptr;
	PFNGLUNMAPBUFFERPROC fglUnmapBuffer = nullptr;
	PFNGLGETBUFFERPARAMETERIVPROC fglGetBufferParameteriv = nullptr;
	PFNGLGETBUFFERPOINTERVPROC fglGetBufferPointerv = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_2_0 : public glfn_core_ver_1_5 {
public:

	PFNGLBLENDEQUATIONSEPARATEPROC fglBlendEquationSeparate = nullptr;
	PFNGLDRAWBUFFERSPROC fglDrawBuffers = nullptr;
	PFNGLSTENCILOPSEPARATEPROC fglStencilOpSeparate = nullptr;
	PFNGLSTENCILFUNCSEPARATEPROC fglStencilFuncSeparate = nullptr;
	PFNGLSTENCILMASKSEPARATEPROC fglStencilMaskSeparate = nullptr;
	PFNGLATTACHSHADERPROC fglAttachShader = nullptr;
	PFNGLBINDATTRIBLOCATIONPROC fglBindAttribLocation = nullptr;
	PFNGLCOMPILESHADERPROC fglCompileShader = nullptr;
	PFNGLCREATEPROGRAMPROC fglCreateProgram = nullptr;
	PFNGLCREATESHADERPROC fglCreateShader = nullptr;
	PFNGLDELETEPROGRAMPROC fglDeleteProgram = nullptr;
	PFNGLDELETESHADERPROC fglDeleteShader = nullptr;
	PFNGLDETACHSHADERPROC fglDetachShader = nullptr;
	PFNGLDISABLEVERTEXATTRIBARRAYPROC fglDisableVertexAttribArray = nullptr;
	PFNGLENABLEVERTEXATTRIBARRAYPROC fglEnableVertexAttribArray = nullptr;
	PFNGLGETACTIVEATTRIBPROC fglGetActiveAttrib = nullptr;
	PFNGLGETACTIVEUNIFORMPROC fglGetActiveUniform = nullptr;
	PFNGLGETATTACHEDSHADERSPROC fglGetAttachedShaders = nullptr;
	PFNGLGETATTRIBLOCATIONPROC fglGetAttribLocation = nullptr;
	PFNGLGETPROGRAMIVPROC fglGetProgramiv = nullptr;
	PFNGLGETPROGRAMINFOLOGPROC fglGetProgramInfoLog = nullptr;
	PFNGLGETSHADERIVPROC fglGetShaderiv = nullptr;
	PFNGLGETSHADERINFOLOGPROC fglGetShaderInfoLog = nullptr;
	PFNGLGETSHADERSOURCEPROC fglGetShaderSource = nullptr;
	PFNGLGETUNIFORMLOCATIONPROC fglGetUniformLocation = nullptr;
	PFNGLGETUNIFORMFVPROC fglGetUniformfv = nullptr;
	PFNGLGETUNIFORMIVPROC fglGetUniformiv = nullptr;
	PFNGLGETVERTEXATTRIBDVPROC fglGetVertexAttribdv = nullptr;
	PFNGLGETVERTEXATTRIBFVPROC fglGetVertexAttribfv = nullptr;
	PFNGLGETVERTEXATTRIBIVPROC fglGetVertexAttribiv = nullptr;
	PFNGLGETVERTEXATTRIBPOINTERVPROC fglGetVertexAttribPointerv = nullptr;
	PFNGLISPROGRAMPROC fglIsProgram = nullptr;
	PFNGLISSHADERPROC fglIsShader = nullptr;
	PFNGLLINKPROGRAMPROC fglLinkProgram = nullptr;
	PFNGLSHADERSOURCEPROC fglShaderSource = nullptr;
	PFNGLUSEPROGRAMPROC fglUseProgram = nullptr;
	PFNGLUNIFORM1FPROC fglUniform1f = nullptr;
	PFNGLUNIFORM2FPROC fglUniform2f = nullptr;
	PFNGLUNIFORM3FPROC fglUniform3f = nullptr;
	PFNGLUNIFORM4FPROC fglUniform4f = nullptr;
	PFNGLUNIFORM1IPROC fglUniform1i = nullptr;
	PFNGLUNIFORM2IPROC fglUniform2i = nullptr;
	PFNGLUNIFORM3IPROC fglUniform3i = nullptr;
	PFNGLUNIFORM4IPROC fglUniform4i = nullptr;
	PFNGLUNIFORM1FVPROC fglUniform1fv = nullptr;
	PFNGLUNIFORM2FVPROC fglUniform2fv = nullptr;
	PFNGLUNIFORM3FVPROC fglUniform3fv = nullptr;
	PFNGLUNIFORM4FVPROC fglUniform4fv = nullptr;
	PFNGLUNIFORM1IVPROC fglUniform1iv = nullptr;
	PFNGLUNIFORM2IVPROC fglUniform2iv = nullptr;
	PFNGLUNIFORM3IVPROC fglUniform3iv = nullptr;
	PFNGLUNIFORM4IVPROC fglUniform4iv = nullptr;
	PFNGLUNIFORMMATRIX2FVPROC fglUniformMatrix2fv = nullptr;
	PFNGLUNIFORMMATRIX3FVPROC fglUniformMatrix3fv = nullptr;
	PFNGLUNIFORMMATRIX4FVPROC fglUniformMatrix4fv = nullptr;
	PFNGLVALIDATEPROGRAMPROC fglValidateProgram = nullptr;
	PFNGLVERTEXATTRIB1DPROC fglVertexAttrib1d = nullptr;
	PFNGLVERTEXATTRIB1DVPROC fglVertexAttrib1dv = nullptr;
	PFNGLVERTEXATTRIB1FPROC fglVertexAttrib1f = nullptr;
	PFNGLVERTEXATTRIB1FVPROC fglVertexAttrib1fv = nullptr;
	PFNGLVERTEXATTRIB1SPROC fglVertexAttrib1s = nullptr;
	PFNGLVERTEXATTRIB1SVPROC fglVertexAttrib1sv = nullptr;
	PFNGLVERTEXATTRIB2DPROC fglVertexAttrib2d = nullptr;
	PFNGLVERTEXATTRIB2DVPROC fglVertexAttrib2dv = nullptr;
	PFNGLVERTEXATTRIB2FPROC fglVertexAttrib2f = nullptr;
	PFNGLVERTEXATTRIB2FVPROC fglVertexAttrib2fv = nullptr;
	PFNGLVERTEXATTRIB2SPROC fglVertexAttrib2s = nullptr;
	PFNGLVERTEXATTRIB2SVPROC fglVertexAttrib2sv = nullptr;
	PFNGLVERTEXATTRIB3DPROC fglVertexAttrib3d = nullptr;
	PFNGLVERTEXATTRIB3DVPROC fglVertexAttrib3dv = nullptr;
	PFNGLVERTEXATTRIB3FPROC fglVertexAttrib3f = nullptr;
	PFNGLVERTEXATTRIB3FVPROC fglVertexAttrib3fv = nullptr;
	PFNGLVERTEXATTRIB3SPROC fglVertexAttrib3s = nullptr;
	PFNGLVERTEXATTRIB3SVPROC fglVertexAttrib3sv = nullptr;
	PFNGLVERTEXATTRIB4NBVPROC fglVertexAttrib4Nbv = nullptr;
	PFNGLVERTEXATTRIB4NIVPROC fglVertexAttrib4Niv = nullptr;
	PFNGLVERTEXATTRIB4NSVPROC fglVertexAttrib4Nsv = nullptr;
	PFNGLVERTEXATTRIB4NUBPROC fglVertexAttrib4Nub = nullptr;
	PFNGLVERTEXATTRIB4NUBVPROC fglVertexAttrib4Nubv = nullptr;
	PFNGLVERTEXATTRIB4NUIVPROC fglVertexAttrib4Nuiv = nullptr;
	PFNGLVERTEXATTRIB4NUSVPROC fglVertexAttrib4Nusv = nullptr;
	PFNGLVERTEXATTRIB4BVPROC fglVertexAttrib4bv = nullptr;
	PFNGLVERTEXATTRIB4DPROC fglVertexAttrib4d = nullptr;
	PFNGLVERTEXATTRIB4DVPROC fglVertexAttrib4dv = nullptr;
	PFNGLVERTEXATTRIB4FPROC fglVertexAttrib4f = nullptr;
	PFNGLVERTEXATTRIB4FVPROC fglVertexAttrib4fv = nullptr;
	PFNGLVERTEXATTRIB4IVPROC fglVertexAttrib4iv = nullptr;
	PFNGLVERTEXATTRIB4SPROC fglVertexAttrib4s = nullptr;
	PFNGLVERTEXATTRIB4SVPROC fglVertexAttrib4sv = nullptr;
	PFNGLVERTEXATTRIB4UBVPROC fglVertexAttrib4ubv = nullptr;
	PFNGLVERTEXATTRIB4UIVPROC fglVertexAttrib4uiv = nullptr;
	PFNGLVERTEXATTRIB4USVPROC fglVertexAttrib4usv = nullptr;
	PFNGLVERTEXATTRIBPOINTERPROC fglVertexAttribPointer = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_2_1 : public glfn_core_ver_2_0 {
public:

	PFNGLUNIFORMMATRIX2X3FVPROC fglUniformMatrix2x3fv = nullptr;
	PFNGLUNIFORMMATRIX3X2FVPROC fglUniformMatrix3x2fv = nullptr;
	PFNGLUNIFORMMATRIX2X4FVPROC fglUniformMatrix2x4fv = nullptr;
	PFNGLUNIFORMMATRIX4X2FVPROC fglUniformMatrix4x2fv = nullptr;
	PFNGLUNIFORMMATRIX3X4FVPROC fglUniformMatrix3x4fv = nullptr;
	PFNGLUNIFORMMATRIX4X3FVPROC fglUniformMatrix4x3fv = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_3_0 : public glfn_core_ver_2_1 {
public:

	PFNGLCOLORMASKIPROC fglColorMaski = nullptr;
	PFNGLGETBOOLEANI_VPROC fglGetBooleani_v = nullptr;
	PFNGLGETINTEGERI_VPROC fglGetIntegeri_v = nullptr;
	PFNGLENABLEIPROC fglEnablei = nullptr;
	PFNGLDISABLEIPROC fglDisablei = nullptr;
	PFNGLISENABLEDIPROC fglIsEnabledi = nullptr;
	PFNGLBEGINTRANSFORMFEEDBACKPROC fglBeginTransformFeedback = nullptr;
	PFNGLENDTRANSFORMFEEDBACKPROC fglEndTransformFeedback = nullptr;
	PFNGLBINDBUFFERRANGEPROC fglBindBufferRange = nullptr;
	PFNGLBINDBUFFERBASEPROC fglBindBufferBase = nullptr;
	PFNGLTRANSFORMFEEDBACKVARYINGSPROC fglTransformFeedbackVaryings = nullptr;
	PFNGLGETTRANSFORMFEEDBACKVARYINGPROC fglGetTransformFeedbackVarying = nullptr;
	PFNGLCLAMPCOLORPROC fglClampColor = nullptr;
	PFNGLBEGINCONDITIONALRENDERPROC fglBeginConditionalRender = nullptr;
	PFNGLENDCONDITIONALRENDERPROC fglEndConditionalRender = nullptr;
	PFNGLVERTEXATTRIBIPOINTERPROC fglVertexAttribIPointer = nullptr;
	PFNGLGETVERTEXATTRIBIIVPROC fglGetVertexAttribIiv = nullptr;
	PFNGLGETVERTEXATTRIBIUIVPROC fglGetVertexAttribIuiv = nullptr;
	PFNGLVERTEXATTRIBI1IPROC fglVertexAttribI1i = nullptr;
	PFNGLVERTEXATTRIBI2IPROC fglVertexAttribI2i = nullptr;
	PFNGLVERTEXATTRIBI3IPROC fglVertexAttribI3i = nullptr;
	PFNGLVERTEXATTRIBI4IPROC fglVertexAttribI4i = nullptr;
	PFNGLVERTEXATTRIBI1UIPROC fglVertexAttribI1ui = nullptr;
	PFNGLVERTEXATTRIBI2UIPROC fglVertexAttribI2ui = nullptr;
	PFNGLVERTEXATTRIBI3UIPROC fglVertexAttribI3ui = nullptr;
	PFNGLVERTEXATTRIBI4UIPROC fglVertexAttribI4ui = nullptr;
	PFNGLVERTEXATTRIBI1IVPROC fglVertexAttribI1iv = nullptr;
	PFNGLVERTEXATTRIBI2IVPROC fglVertexAttribI2iv = nullptr;
	PFNGLVERTEXATTRIBI3IVPROC fglVertexAttribI3iv = nullptr;
	PFNGLVERTEXATTRIBI4IVPROC fglVertexAttribI4iv = nullptr;
	PFNGLVERTEXATTRIBI1UIVPROC fglVertexAttribI1uiv = nullptr;
	PFNGLVERTEXATTRIBI2UIVPROC fglVertexAttribI2uiv = nullptr;
	PFNGLVERTEXATTRIBI3UIVPROC fglVertexAttribI3uiv = nullptr;
	PFNGLVERTEXATTRIBI4UIVPROC fglVertexAttribI4uiv = nullptr;
	PFNGLVERTEXATTRIBI4BVPROC fglVertexAttribI4bv = nullptr;
	PFNGLVERTEXATTRIBI4SVPROC fglVertexAttribI4sv = nullptr;
	PFNGLVERTEXATTRIBI4UBVPROC fglVertexAttribI4ubv = nullptr;
	PFNGLVERTEXATTRIBI4USVPROC fglVertexAttribI4usv = nullptr;
	PFNGLGETUNIFORMUIVPROC fglGetUniformuiv = nullptr;
	PFNGLBINDFRAGDATALOCATIONPROC fglBindFragDataLocation = nullptr;
	PFNGLGETFRAGDATALOCATIONPROC fglGetFragDataLocation = nullptr;
	PFNGLUNIFORM1UIPROC fglUniform1ui = nullptr;
	PFNGLUNIFORM2UIPROC fglUniform2ui = nullptr;
	PFNGLUNIFORM3UIPROC fglUniform3ui = nullptr;
	PFNGLUNIFORM4UIPROC fglUniform4ui = nullptr;
	PFNGLUNIFORM1UIVPROC fglUniform1uiv = nullptr;
	PFNGLUNIFORM2UIVPROC fglUniform2uiv = nullptr;
	PFNGLUNIFORM3UIVPROC fglUniform3uiv = nullptr;
	PFNGLUNIFORM4UIVPROC fglUniform4uiv = nullptr;
	PFNGLTEXPARAMETERIIVPROC fglTexParameterIiv = nullptr;
	PFNGLTEXPARAMETERIUIVPROC fglTexParameterIuiv = nullptr;
	PFNGLGETTEXPARAMETERIIVPROC fglGetTexParameterIiv = nullptr;
	PFNGLGETTEXPARAMETERIUIVPROC fglGetTexParameterIuiv = nullptr;
	PFNGLCLEARBUFFERIVPROC fglClearBufferiv = nullptr;
	PFNGLCLEARBUFFERUIVPROC fglClearBufferuiv = nullptr;
	PFNGLCLEARBUFFERFVPROC fglClearBufferfv = nullptr;
	PFNGLCLEARBUFFERFIPROC fglClearBufferfi = nullptr;
	PFNGLGETSTRINGIPROC fglGetStringi = nullptr;
	PFNGLISRENDERBUFFERPROC fglIsRenderbuffer = nullptr;
	PFNGLBINDRENDERBUFFERPROC fglBindRenderbuffer = nullptr;
	PFNGLDELETERENDERBUFFERSPROC fglDeleteRenderbuffers = nullptr;
	PFNGLGENRENDERBUFFERSPROC fglGenRenderbuffers = nullptr;
	PFNGLRENDERBUFFERSTORAGEPROC fglRenderbufferStorage = nullptr;
	PFNGLGETRENDERBUFFERPARAMETERIVPROC fglGetRenderbufferParameteriv = nullptr;
	PFNGLISFRAMEBUFFERPROC fglIsFramebuffer = nullptr;
	PFNGLBINDFRAMEBUFFERPROC fglBindFramebuffer = nullptr;
	PFNGLDELETEFRAMEBUFFERSPROC fglDeleteFramebuffers = nullptr;
	PFNGLGENFRAMEBUFFERSPROC fglGenFramebuffers = nullptr;
	PFNGLCHECKFRAMEBUFFERSTATUSPROC fglCheckFramebufferStatus = nullptr;
	PFNGLFRAMEBUFFERTEXTURE1DPROC fglFramebufferTexture1D = nullptr;
	PFNGLFRAMEBUFFERTEXTURE2DPROC fglFramebufferTexture2D = nullptr;
	PFNGLFRAMEBUFFERTEXTURE3DPROC fglFramebufferTexture3D = nullptr;
	PFNGLFRAMEBUFFERRENDERBUFFERPROC fglFramebufferRenderbuffer = nullptr;
	PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC fglGetFramebufferAttachmentParameteriv = nullptr;
	PFNGLGENERATEMIPMAPPROC fglGenerateMipmap = nullptr;
	PFNGLBLITFRAMEBUFFERPROC fglBlitFramebuffer = nullptr;
	PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC fglRenderbufferStorageMultisample = nullptr;
	PFNGLFRAMEBUFFERTEXTURELAYERPROC fglFramebufferTextureLayer = nullptr;
	PFNGLMAPBUFFERRANGEPROC fglMapBufferRange = nullptr;
	PFNGLFLUSHMAPPEDBUFFERRANGEPROC fglFlushMappedBufferRange = nullptr;
	PFNGLBINDVERTEXARRAYPROC fglBindVertexArray = nullptr;
	PFNGLDELETEVERTEXARRAYSPROC fglDeleteVertexArrays = nullptr;
	PFNGLGENVERTEXARRAYSPROC fglGenVertexArrays = nullptr;
	PFNGLISVERTEXARRAYPROC fglIsVertexArray = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_3_1 : public glfn_core_ver_3_0 {
public:

	PFNGLDRAWARRAYSINSTANCEDPROC fglDrawArraysInstanced = nullptr;
	PFNGLDRAWELEMENTSINSTANCEDPROC fglDrawElementsInstanced = nullptr;
	PFNGLTEXBUFFERPROC fglTexBuffer = nullptr;
	PFNGLPRIMITIVERESTARTINDEXPROC fglPrimitiveRestartIndex = nullptr;
	PFNGLCOPYBUFFERSUBDATAPROC fglCopyBufferSubData = nullptr;
	PFNGLGETUNIFORMINDICESPROC fglGetUniformIndices = nullptr;
	PFNGLGETACTIVEUNIFORMSIVPROC fglGetActiveUniformsiv = nullptr;
	PFNGLGETACTIVEUNIFORMNAMEPROC fglGetActiveUniformName = nullptr;
	PFNGLGETUNIFORMBLOCKINDEXPROC fglGetUniformBlockIndex = nullptr;
	PFNGLGETACTIVEUNIFORMBLOCKIVPROC fglGetActiveUniformBlockiv = nullptr;
	PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC fglGetActiveUniformBlockName = nullptr;
	PFNGLUNIFORMBLOCKBINDINGPROC fglUniformBlockBinding = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_3_2 : public glfn_core_ver_3_1 {
public:

	PFNGLDRAWELEMENTSBASEVERTEXPROC fglDrawElementsBaseVertex = nullptr;
	PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC fglDrawRangeElementsBaseVertex = nullptr;
	PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC fglDrawElementsInstancedBaseVertex = nullptr;
	PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC fglMultiDrawElementsBaseVertex = nullptr;
	PFNGLPROVOKINGVERTEXPROC fglProvokingVertex = nullptr;
	PFNGLFENCESYNCPROC fglFenceSync = nullptr;
	PFNGLISSYNCPROC fglIsSync = nullptr;
	PFNGLDELETESYNCPROC fglDeleteSync = nullptr;
	PFNGLCLIENTWAITSYNCPROC fglClientWaitSync = nullptr;
	PFNGLWAITSYNCPROC fglWaitSync = nullptr;
	PFNGLGETINTEGER64VPROC fglGetInteger64v = nullptr;
	PFNGLGETSYNCIVPROC fglGetSynciv = nullptr;
	PFNGLGETINTEGER64I_VPROC fglGetInteger64i_v = nullptr;
	PFNGLGETBUFFERPARAMETERI64VPROC fglGetBufferParameteri64v = nullptr;
	PFNGLFRAMEBUFFERTEXTUREPROC fglFramebufferTexture = nullptr;
	PFNGLTEXIMAGE2DMULTISAMPLEPROC fglTexImage2DMultisample = nullptr;
	PFNGLTEXIMAGE3DMULTISAMPLEPROC fglTexImage3DMultisample = nullptr;
	PFNGLGETMULTISAMPLEFVPROC fglGetMultisamplefv = nullptr;
	PFNGLSAMPLEMASKIPROC fglSampleMaski = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_3_3 : public glfn_core_ver_3_2 {
public:

	PFNGLBINDFRAGDATALOCATIONINDEXEDPROC fglBindFragDataLocationIndexed = nullptr;
	PFNGLGETFRAGDATAINDEXPROC fglGetFragDataIndex = nullptr;
	PFNGLGENSAMPLERSPROC fglGenSamplers = nullptr;
	PFNGLDELETESAMPLERSPROC fglDeleteSamplers = nullptr;
	PFNGLISSAMPLERPROC fglIsSampler = nullptr;
	PFNGLBINDSAMPLERPROC fglBindSampler = nullptr;
	PFNGLSAMPLERPARAMETERIPROC fglSamplerParameteri = nullptr;
	PFNGLSAMPLERPARAMETERIVPROC fglSamplerParameteriv = nullptr;
	PFNGLSAMPLERPARAMETERFPROC fglSamplerParameterf = nullptr;
	PFNGLSAMPLERPARAMETERFVPROC fglSamplerParameterfv = nullptr;
	PFNGLSAMPLERPARAMETERIIVPROC fglSamplerParameterIiv = nullptr;
	PFNGLSAMPLERPARAMETERIUIVPROC fglSamplerParameterIuiv = nullptr;
	PFNGLGETSAMPLERPARAMETERIVPROC fglGetSamplerParameteriv = nullptr;
	PFNGLGETSAMPLERPARAMETERIIVPROC fglGetSamplerParameterIiv = nullptr;
	PFNGLGETSAMPLERPARAMETERFVPROC fglGetSamplerParameterfv = nullptr;
	PFNGLGETSAMPLERPARAMETERIUIVPROC fglGetSamplerParameterIuiv = nullptr;
	PFNGLQUERYCOUNTERPROC fglQueryCounter = nullptr;
	PFNGLGETQUERYOBJECTI64VPROC fglGetQueryObjecti64v = nullptr;
	PFNGLGETQUERYOBJECTUI64VPROC fglGetQueryObjectui64v = nullptr;
	PFNGLVERTEXATTRIBDIVISORPROC fglVertexAttribDivisor = nullptr;
	PFNGLVERTEXATTRIBP1UIPROC fglVertexAttribP1ui = nullptr;
	PFNGLVERTEXATTRIBP1UIVPROC fglVertexAttribP1uiv = nullptr;
	PFNGLVERTEXATTRIBP2UIPROC fglVertexAttribP2ui = nullptr;
	PFNGLVERTEXATTRIBP2UIVPROC fglVertexAttribP2uiv = nullptr;
	PFNGLVERTEXATTRIBP3UIPROC fglVertexAttribP3ui = nullptr;
	PFNGLVERTEXATTRIBP3UIVPROC fglVertexAttribP3uiv = nullptr;
	PFNGLVERTEXATTRIBP4UIPROC fglVertexAttribP4ui = nullptr;
	PFNGLVERTEXATTRIBP4UIVPROC fglVertexAttribP4uiv = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_4_0 : public glfn_core_ver_3_3 {
public:

	PFNGLMINSAMPLESHADINGPROC fglMinSampleShading = nullptr;
	PFNGLBLENDEQUATIONIPROC fglBlendEquationi = nullptr;
	PFNGLBLENDEQUATIONSEPARATEIPROC fglBlendEquationSeparatei = nullptr;
	PFNGLBLENDFUNCIPROC fglBlendFunci = nullptr;
	PFNGLBLENDFUNCSEPARATEIPROC fglBlendFuncSeparatei = nullptr;
	PFNGLDRAWARRAYSINDIRECTPROC fglDrawArraysIndirect = nullptr;
	PFNGLDRAWELEMENTSINDIRECTPROC fglDrawElementsIndirect = nullptr;
	PFNGLUNIFORM1DPROC fglUniform1d = nullptr;
	PFNGLUNIFORM2DPROC fglUniform2d = nullptr;
	PFNGLUNIFORM3DPROC fglUniform3d = nullptr;
	PFNGLUNIFORM4DPROC fglUniform4d = nullptr;
	PFNGLUNIFORM1DVPROC fglUniform1dv = nullptr;
	PFNGLUNIFORM2DVPROC fglUniform2dv = nullptr;
	PFNGLUNIFORM3DVPROC fglUniform3dv = nullptr;
	PFNGLUNIFORM4DVPROC fglUniform4dv = nullptr;
	PFNGLUNIFORMMATRIX2DVPROC fglUniformMatrix2dv = nullptr;
	PFNGLUNIFORMMATRIX3DVPROC fglUniformMatrix3dv = nullptr;
	PFNGLUNIFORMMATRIX4DVPROC fglUniformMatrix4dv = nullptr;
	PFNGLUNIFORMMATRIX2X3DVPROC fglUniformMatrix2x3dv = nullptr;
	PFNGLUNIFORMMATRIX2X4DVPROC fglUniformMatrix2x4dv = nullptr;
	PFNGLUNIFORMMATRIX3X2DVPROC fglUniformMatrix3x2dv = nullptr;
	PFNGLUNIFORMMATRIX3X4DVPROC fglUniformMatrix3x4dv = nullptr;
	PFNGLUNIFORMMATRIX4X2DVPROC fglUniformMatrix4x2dv = nullptr;
	PFNGLUNIFORMMATRIX4X3DVPROC fglUniformMatrix4x3dv = nullptr;
	PFNGLGETUNIFORMDVPROC fglGetUniformdv = nullptr;
	PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC fglGetSubroutineUniformLocation = nullptr;
	PFNGLGETSUBROUTINEINDEXPROC fglGetSubroutineIndex = nullptr;
	PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC fglGetActiveSubroutineUniformiv = nullptr;
	PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC fglGetActiveSubroutineUniformName = nullptr;
	PFNGLGETACTIVESUBROUTINENAMEPROC fglGetActiveSubroutineName = nullptr;
	PFNGLUNIFORMSUBROUTINESUIVPROC fglUniformSubroutinesuiv = nullptr;
	PFNGLGETUNIFORMSUBROUTINEUIVPROC fglGetUniformSubroutineuiv = nullptr;
	PFNGLGETPROGRAMSTAGEIVPROC fglGetProgramStageiv = nullptr;
	PFNGLPATCHPARAMETERIPROC fglPatchParameteri = nullptr;
	PFNGLPATCHPARAMETERFVPROC fglPatchParameterfv = nullptr;
	PFNGLBINDTRANSFORMFEEDBACKPROC fglBindTransformFeedback = nullptr;
	PFNGLDELETETRANSFORMFEEDBACKSPROC fglDeleteTransformFeedbacks = nullptr;
	PFNGLGENTRANSFORMFEEDBACKSPROC fglGenTransformFeedbacks = nullptr;
	PFNGLISTRANSFORMFEEDBACKPROC fglIsTransformFeedback = nullptr;
	PFNGLPAUSETRANSFORMFEEDBACKPROC fglPauseTransformFeedback = nullptr;
	PFNGLRESUMETRANSFORMFEEDBACKPROC fglResumeTransformFeedback = nullptr;
	PFNGLDRAWTRANSFORMFEEDBACKPROC fglDrawTransformFeedback = nullptr;
	PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC fglDrawTransformFeedbackStream = nullptr;
	PFNGLBEGINQUERYINDEXEDPROC fglBeginQueryIndexed = nullptr;
	PFNGLENDQUERYINDEXEDPROC fglEndQueryIndexed = nullptr;
	PFNGLGETQUERYINDEXEDIVPROC fglGetQueryIndexediv = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_4_1 : public glfn_core_ver_4_0 {
public:

	PFNGLRELEASESHADERCOMPILERPROC fglReleaseShaderCompiler = nullptr;
	PFNGLSHADERBINARYPROC fglShaderBinary = nullptr;
	PFNGLGETSHADERPRECISIONFORMATPROC fglGetShaderPrecisionFormat = nullptr;
	PFNGLDEPTHRANGEFPROC fglDepthRangef = nullptr;
	PFNGLCLEARDEPTHFPROC fglClearDepthf = nullptr;
	PFNGLGETPROGRAMBINARYPROC fglGetProgramBinary = nullptr;
	PFNGLPROGRAMBINARYPROC fglProgramBinary = nullptr;
	PFNGLPROGRAMPARAMETERIPROC fglProgramParameteri = nullptr;
	PFNGLUSEPROGRAMSTAGESPROC fglUseProgramStages = nullptr;
	PFNGLACTIVESHADERPROGRAMPROC fglActiveShaderProgram = nullptr;
	PFNGLCREATESHADERPROGRAMVPROC fglCreateShaderProgramv = nullptr;
	PFNGLBINDPROGRAMPIPELINEPROC fglBindProgramPipeline = nullptr;
	PFNGLDELETEPROGRAMPIPELINESPROC fglDeleteProgramPipelines = nullptr;
	PFNGLGENPROGRAMPIPELINESPROC fglGenProgramPipelines = nullptr;
	PFNGLISPROGRAMPIPELINEPROC fglIsProgramPipeline = nullptr;
	PFNGLGETPROGRAMPIPELINEIVPROC fglGetProgramPipelineiv = nullptr;
	PFNGLPROGRAMUNIFORM1IPROC fglProgramUniform1i = nullptr;
	PFNGLPROGRAMUNIFORM1IVPROC fglProgramUniform1iv = nullptr;
	PFNGLPROGRAMUNIFORM1FPROC fglProgramUniform1f = nullptr;
	PFNGLPROGRAMUNIFORM1FVPROC fglProgramUniform1fv = nullptr;
	PFNGLPROGRAMUNIFORM1DPROC fglProgramUniform1d = nullptr;
	PFNGLPROGRAMUNIFORM1DVPROC fglProgramUniform1dv = nullptr;
	PFNGLPROGRAMUNIFORM1UIPROC fglProgramUniform1ui = nullptr;
	PFNGLPROGRAMUNIFORM1UIVPROC fglProgramUniform1uiv = nullptr;
	PFNGLPROGRAMUNIFORM2IPROC fglProgramUniform2i = nullptr;
	PFNGLPROGRAMUNIFORM2IVPROC fglProgramUniform2iv = nullptr;
	PFNGLPROGRAMUNIFORM2FPROC fglProgramUniform2f = nullptr;
	PFNGLPROGRAMUNIFORM2FVPROC fglProgramUniform2fv = nullptr;
	PFNGLPROGRAMUNIFORM2DPROC fglProgramUniform2d = nullptr;
	PFNGLPROGRAMUNIFORM2DVPROC fglProgramUniform2dv = nullptr;
	PFNGLPROGRAMUNIFORM2UIPROC fglProgramUniform2ui = nullptr;
	PFNGLPROGRAMUNIFORM2UIVPROC fglProgramUniform2uiv = nullptr;
	PFNGLPROGRAMUNIFORM3IPROC fglProgramUniform3i = nullptr;
	PFNGLPROGRAMUNIFORM3IVPROC fglProgramUniform3iv = nullptr;
	PFNGLPROGRAMUNIFORM3FPROC fglProgramUniform3f = nullptr;
	PFNGLPROGRAMUNIFORM3FVPROC fglProgramUniform3fv = nullptr;
	PFNGLPROGRAMUNIFORM3DPROC fglProgramUniform3d = nullptr;
	PFNGLPROGRAMUNIFORM3DVPROC fglProgramUniform3dv = nullptr;
	PFNGLPROGRAMUNIFORM3UIPROC fglProgramUniform3ui = nullptr;
	PFNGLPROGRAMUNIFORM3UIVPROC fglProgramUniform3uiv = nullptr;
	PFNGLPROGRAMUNIFORM4IPROC fglProgramUniform4i = nullptr;
	PFNGLPROGRAMUNIFORM4IVPROC fglProgramUniform4iv = nullptr;
	PFNGLPROGRAMUNIFORM4FPROC fglProgramUniform4f = nullptr;
	PFNGLPROGRAMUNIFORM4FVPROC fglProgramUniform4fv = nullptr;
	PFNGLPROGRAMUNIFORM4DPROC fglProgramUniform4d = nullptr;
	PFNGLPROGRAMUNIFORM4DVPROC fglProgramUniform4dv = nullptr;
	PFNGLPROGRAMUNIFORM4UIPROC fglProgramUniform4ui = nullptr;
	PFNGLPROGRAMUNIFORM4UIVPROC fglProgramUniform4uiv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX2FVPROC fglProgramUniformMatrix2fv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX3FVPROC fglProgramUniformMatrix3fv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX4FVPROC fglProgramUniformMatrix4fv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX2DVPROC fglProgramUniformMatrix2dv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX3DVPROC fglProgramUniformMatrix3dv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX4DVPROC fglProgramUniformMatrix4dv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC fglProgramUniformMatrix2x3fv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC fglProgramUniformMatrix3x2fv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC fglProgramUniformMatrix2x4fv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC fglProgramUniformMatrix4x2fv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC fglProgramUniformMatrix3x4fv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC fglProgramUniformMatrix4x3fv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC fglProgramUniformMatrix2x3dv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC fglProgramUniformMatrix3x2dv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC fglProgramUniformMatrix2x4dv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC fglProgramUniformMatrix4x2dv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC fglProgramUniformMatrix3x4dv = nullptr;
	PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC fglProgramUniformMatrix4x3dv = nullptr;
	PFNGLVALIDATEPROGRAMPIPELINEPROC fglValidateProgramPipeline = nullptr;
	PFNGLGETPROGRAMPIPELINEINFOLOGPROC fglGetProgramPipelineInfoLog = nullptr;
	PFNGLVERTEXATTRIBL1DPROC fglVertexAttribL1d = nullptr;
	PFNGLVERTEXATTRIBL2DPROC fglVertexAttribL2d = nullptr;
	PFNGLVERTEXATTRIBL3DPROC fglVertexAttribL3d = nullptr;
	PFNGLVERTEXATTRIBL4DPROC fglVertexAttribL4d = nullptr;
	PFNGLVERTEXATTRIBL1DVPROC fglVertexAttribL1dv = nullptr;
	PFNGLVERTEXATTRIBL2DVPROC fglVertexAttribL2dv = nullptr;
	PFNGLVERTEXATTRIBL3DVPROC fglVertexAttribL3dv = nullptr;
	PFNGLVERTEXATTRIBL4DVPROC fglVertexAttribL4dv = nullptr;
	PFNGLVERTEXATTRIBLPOINTERPROC fglVertexAttribLPointer = nullptr;
	PFNGLGETVERTEXATTRIBLDVPROC fglGetVertexAttribLdv = nullptr;
	PFNGLVIEWPORTARRAYVPROC fglViewportArrayv = nullptr;
	PFNGLVIEWPORTINDEXEDFPROC fglViewportIndexedf = nullptr;
	PFNGLVIEWPORTINDEXEDFVPROC fglViewportIndexedfv = nullptr;
	PFNGLSCISSORARRAYVPROC fglScissorArrayv = nullptr;
	PFNGLSCISSORINDEXEDPROC fglScissorIndexed = nullptr;
	PFNGLSCISSORINDEXEDVPROC fglScissorIndexedv = nullptr;
	PFNGLDEPTHRANGEARRAYVPROC fglDepthRangeArrayv = nullptr;
	PFNGLDEPTHRANGEINDEXEDPROC fglDepthRangeIndexed = nullptr;
	PFNGLGETFLOATI_VPROC fglGetFloati_v = nullptr;
	PFNGLGETDOUBLEI_VPROC fglGetDoublei_v = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_4_2 : public glfn_core_ver_4_1 {
public:

	PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC fglDrawArraysInstancedBaseInstance = nullptr;
	PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC fglDrawElementsInstancedBaseInstance = nullptr;
	PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC fglDrawElementsInstancedBaseVertexBaseInstance = nullptr;
	PFNGLGETINTERNALFORMATIVPROC fglGetInternalformativ = nullptr;
	PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC fglGetActiveAtomicCounterBufferiv = nullptr;
	PFNGLBINDIMAGETEXTUREPROC fglBindImageTexture = nullptr;
	PFNGLMEMORYBARRIERPROC fglMemoryBarrier = nullptr;
	PFNGLTEXSTORAGE1DPROC fglTexStorage1D = nullptr;
	PFNGLTEXSTORAGE2DPROC fglTexStorage2D = nullptr;
	PFNGLTEXSTORAGE3DPROC fglTexStorage3D = nullptr;
	PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC fglDrawTransformFeedbackInstanced = nullptr;
	PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC fglDrawTransformFeedbackStreamInstanced = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_4_3 : public glfn_core_ver_4_2 {
public:

	PFNGLCLEARBUFFERDATAPROC fglClearBufferData = nullptr;
	PFNGLCLEARBUFFERSUBDATAPROC fglClearBufferSubData = nullptr;
	PFNGLDISPATCHCOMPUTEPROC fglDispatchCompute = nullptr;
	PFNGLDISPATCHCOMPUTEINDIRECTPROC fglDispatchComputeIndirect = nullptr;
	PFNGLCOPYIMAGESUBDATAPROC fglCopyImageSubData = nullptr;
	PFNGLFRAMEBUFFERPARAMETERIPROC fglFramebufferParameteri = nullptr;
	PFNGLGETFRAMEBUFFERPARAMETERIVPROC fglGetFramebufferParameteriv = nullptr;
	PFNGLGETINTERNALFORMATI64VPROC fglGetInternalformati64v = nullptr;
	PFNGLINVALIDATETEXSUBIMAGEPROC fglInvalidateTexSubImage = nullptr;
	PFNGLINVALIDATETEXIMAGEPROC fglInvalidateTexImage = nullptr;
	PFNGLINVALIDATEBUFFERSUBDATAPROC fglInvalidateBufferSubData = nullptr;
	PFNGLINVALIDATEBUFFERDATAPROC fglInvalidateBufferData = nullptr;
	PFNGLINVALIDATEFRAMEBUFFERPROC fglInvalidateFramebuffer = nullptr;
	PFNGLINVALIDATESUBFRAMEBUFFERPROC fglInvalidateSubFramebuffer = nullptr;
	PFNGLMULTIDRAWARRAYSINDIRECTPROC fglMultiDrawArraysIndirect = nullptr;
	PFNGLMULTIDRAWELEMENTSINDIRECTPROC fglMultiDrawElementsIndirect = nullptr;
	PFNGLGETPROGRAMINTERFACEIVPROC fglGetProgramInterfaceiv = nullptr;
	PFNGLGETPROGRAMRESOURCEINDEXPROC fglGetProgramResourceIndex = nullptr;
	PFNGLGETPROGRAMRESOURCENAMEPROC fglGetProgramResourceName = nullptr;
	PFNGLGETPROGRAMRESOURCEIVPROC fglGetProgramResourceiv = nullptr;
	PFNGLGETPROGRAMRESOURCELOCATIONPROC fglGetProgramResourceLocation = nullptr;
	PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC fglGetProgramResourceLocationIndex = nullptr;
	PFNGLSHADERSTORAGEBLOCKBINDINGPROC fglShaderStorageBlockBinding = nullptr;
	PFNGLTEXBUFFERRANGEPROC fglTexBufferRange = nullptr;
	PFNGLTEXSTORAGE2DMULTISAMPLEPROC fglTexStorage2DMultisample = nullptr;
	PFNGLTEXSTORAGE3DMULTISAMPLEPROC fglTexStorage3DMultisample = nullptr;
	PFNGLTEXTUREVIEWPROC fglTextureView = nullptr;
	PFNGLBINDVERTEXBUFFERPROC fglBindVertexBuffer = nullptr;
	PFNGLVERTEXATTRIBFORMATPROC fglVertexAttribFormat = nullptr;
	PFNGLVERTEXATTRIBIFORMATPROC fglVertexAttribIFormat = nullptr;
	PFNGLVERTEXATTRIBLFORMATPROC fglVertexAttribLFormat = nullptr;
	PFNGLVERTEXATTRIBBINDINGPROC fglVertexAttribBinding = nullptr;
	PFNGLVERTEXBINDINGDIVISORPROC fglVertexBindingDivisor = nullptr;
	PFNGLDEBUGMESSAGECONTROLPROC fglDebugMessageControl = nullptr;
	PFNGLDEBUGMESSAGEINSERTPROC fglDebugMessageInsert = nullptr;
	PFNGLDEBUGMESSAGECALLBACKPROC fglDebugMessageCallback = nullptr;
	PFNGLGETDEBUGMESSAGELOGPROC fglGetDebugMessageLog = nullptr;
	PFNGLPUSHDEBUGGROUPPROC fglPushDebugGroup = nullptr;
	PFNGLPOPDEBUGGROUPPROC fglPopDebugGroup = nullptr;
	PFNGLOBJECTLABELPROC fglObjectLabel = nullptr;
	PFNGLGETOBJECTLABELPROC fglGetObjectLabel = nullptr;
	PFNGLOBJECTPTRLABELPROC fglObjectPtrLabel = nullptr;
	PFNGLGETOBJECTPTRLABELPROC fglGetObjectPtrLabel = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_4_4 : public glfn_core_ver_4_3 {
public:

	PFNGLBUFFERSTORAGEPROC fglBufferStorage = nullptr;
	PFNGLCLEARTEXIMAGEPROC fglClearTexImage = nullptr;
	PFNGLCLEARTEXSUBIMAGEPROC fglClearTexSubImage = nullptr;
	PFNGLBINDBUFFERSBASEPROC fglBindBuffersBase = nullptr;
	PFNGLBINDBUFFERSRANGEPROC fglBindBuffersRange = nullptr;
	PFNGLBINDTEXTURESPROC fglBindTextures = nullptr;
	PFNGLBINDSAMPLERSPROC fglBindSamplers = nullptr;
	PFNGLBINDIMAGETEXTURESPROC fglBindImageTextures = nullptr;
	PFNGLBINDVERTEXBUFFERSPROC fglBindVertexBuffers = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_4_5 : public glfn_core_ver_4_4 {
public:

	PFNGLCLIPCONTROLPROC fglClipControl = nullptr;
	PFNGLCREATETRANSFORMFEEDBACKSPROC fglCreateTransformFeedbacks = nullptr;
	PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC fglTransformFeedbackBufferBase = nullptr;
	PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC fglTransformFeedbackBufferRange = nullptr;
	PFNGLGETTRANSFORMFEEDBACKIVPROC fglGetTransformFeedbackiv = nullptr;
	PFNGLGETTRANSFORMFEEDBACKI_VPROC fglGetTransformFeedbacki_v = nullptr;
	PFNGLGETTRANSFORMFEEDBACKI64_VPROC fglGetTransformFeedbacki64_v = nullptr;
	PFNGLCREATEBUFFERSPROC fglCreateBuffers = nullptr;
	PFNGLNAMEDBUFFERSTORAGEPROC fglNamedBufferStorage = nullptr;
	PFNGLNAMEDBUFFERDATAPROC fglNamedBufferData = nullptr;
	PFNGLNAMEDBUFFERSUBDATAPROC fglNamedBufferSubData = nullptr;
	PFNGLCOPYNAMEDBUFFERSUBDATAPROC fglCopyNamedBufferSubData = nullptr;
	PFNGLCLEARNAMEDBUFFERDATAPROC fglClearNamedBufferData = nullptr;
	PFNGLCLEARNAMEDBUFFERSUBDATAPROC fglClearNamedBufferSubData = nullptr;
	PFNGLMAPNAMEDBUFFERPROC fglMapNamedBuffer = nullptr;
	PFNGLMAPNAMEDBUFFERRANGEPROC fglMapNamedBufferRange = nullptr;
	PFNGLUNMAPNAMEDBUFFERPROC fglUnmapNamedBuffer = nullptr;
	PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC fglFlushMappedNamedBufferRange = nullptr;
	PFNGLGETNAMEDBUFFERPARAMETERIVPROC fglGetNamedBufferParameteriv = nullptr;
	PFNGLGETNAMEDBUFFERPARAMETERI64VPROC fglGetNamedBufferParameteri64v = nullptr;
	PFNGLGETNAMEDBUFFERPOINTERVPROC fglGetNamedBufferPointerv = nullptr;
	PFNGLGETNAMEDBUFFERSUBDATAPROC fglGetNamedBufferSubData = nullptr;
	PFNGLCREATEFRAMEBUFFERSPROC fglCreateFramebuffers = nullptr;
	PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC fglNamedFramebufferRenderbuffer = nullptr;
	PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC fglNamedFramebufferParameteri = nullptr;
	PFNGLNAMEDFRAMEBUFFERTEXTUREPROC fglNamedFramebufferTexture = nullptr;
	PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC fglNamedFramebufferTextureLayer = nullptr;
	PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC fglNamedFramebufferDrawBuffer = nullptr;
	PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC fglNamedFramebufferDrawBuffers = nullptr;
	PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC fglNamedFramebufferReadBuffer = nullptr;
	PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC fglInvalidateNamedFramebufferData = nullptr;
	PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC fglInvalidateNamedFramebufferSubData = nullptr;
	PFNGLCLEARNAMEDFRAMEBUFFERIVPROC fglClearNamedFramebufferiv = nullptr;
	PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC fglClearNamedFramebufferuiv = nullptr;
	PFNGLCLEARNAMEDFRAMEBUFFERFVPROC fglClearNamedFramebufferfv = nullptr;
	PFNGLCLEARNAMEDFRAMEBUFFERFIPROC fglClearNamedFramebufferfi = nullptr;
	PFNGLBLITNAMEDFRAMEBUFFERPROC fglBlitNamedFramebuffer = nullptr;
	PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC fglCheckNamedFramebufferStatus = nullptr;
	PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC fglGetNamedFramebufferParameteriv = nullptr;
	PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC fglGetNamedFramebufferAttachmentParameteriv = nullptr;
	PFNGLCREATERENDERBUFFERSPROC fglCreateRenderbuffers = nullptr;
	PFNGLNAMEDRENDERBUFFERSTORAGEPROC fglNamedRenderbufferStorage = nullptr;
	PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC fglNamedRenderbufferStorageMultisample = nullptr;
	PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC fglGetNamedRenderbufferParameteriv = nullptr;
	PFNGLCREATETEXTURESPROC fglCreateTextures = nullptr;
	PFNGLTEXTUREBUFFERPROC fglTextureBuffer = nullptr;
	PFNGLTEXTUREBUFFERRANGEPROC fglTextureBufferRange = nullptr;
	PFNGLTEXTURESTORAGE1DPROC fglTextureStorage1D = nullptr;
	PFNGLTEXTURESTORAGE2DPROC fglTextureStorage2D = nullptr;
	PFNGLTEXTURESTORAGE3DPROC fglTextureStorage3D = nullptr;
	PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC fglTextureStorage2DMultisample = nullptr;
	PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC fglTextureStorage3DMultisample = nullptr;
	PFNGLTEXTURESUBIMAGE1DPROC fglTextureSubImage1D = nullptr;
	PFNGLTEXTURESUBIMAGE2DPROC fglTextureSubImage2D = nullptr;
	PFNGLTEXTURESUBIMAGE3DPROC fglTextureSubImage3D = nullptr;
	PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC fglCompressedTextureSubImage1D = nullptr;
	PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC fglCompressedTextureSubImage2D = nullptr;
	PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC fglCompressedTextureSubImage3D = nullptr;
	PFNGLCOPYTEXTURESUBIMAGE1DPROC fglCopyTextureSubImage1D = nullptr;
	PFNGLCOPYTEXTURESUBIMAGE2DPROC fglCopyTextureSubImage2D = nullptr;
	PFNGLCOPYTEXTURESUBIMAGE3DPROC fglCopyTextureSubImage3D = nullptr;
	PFNGLTEXTUREPARAMETERFPROC fglTextureParameterf = nullptr;
	PFNGLTEXTUREPARAMETERFVPROC fglTextureParameterfv = nullptr;
	PFNGLTEXTUREPARAMETERIPROC fglTextureParameteri = nullptr;
	PFNGLTEXTUREPARAMETERIIVPROC fglTextureParameterIiv = nullptr;
	PFNGLTEXTUREPARAMETERIUIVPROC fglTextureParameterIuiv = nullptr;
	PFNGLTEXTUREPARAMETERIVPROC fglTextureParameteriv = nullptr;
	PFNGLGENERATETEXTUREMIPMAPPROC fglGenerateTextureMipmap = nullptr;
	PFNGLBINDTEXTUREUNITPROC fglBindTextureUnit = nullptr;
	PFNGLGETTEXTUREIMAGEPROC fglGetTextureImage = nullptr;
	PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC fglGetCompressedTextureImage = nullptr;
	PFNGLGETTEXTURELEVELPARAMETERFVPROC fglGetTextureLevelParameterfv = nullptr;
	PFNGLGETTEXTURELEVELPARAMETERIVPROC fglGetTextureLevelParameteriv = nullptr;
	PFNGLGETTEXTUREPARAMETERFVPROC fglGetTextureParameterfv = nullptr;
	PFNGLGETTEXTUREPARAMETERIIVPROC fglGetTextureParameterIiv = nullptr;
	PFNGLGETTEXTUREPARAMETERIUIVPROC fglGetTextureParameterIuiv = nullptr;
	PFNGLGETTEXTUREPARAMETERIVPROC fglGetTextureParameteriv = nullptr;
	PFNGLCREATEVERTEXARRAYSPROC fglCreateVertexArrays = nullptr;
	PFNGLDISABLEVERTEXARRAYATTRIBPROC fglDisableVertexArrayAttrib = nullptr;
	PFNGLENABLEVERTEXARRAYATTRIBPROC fglEnableVertexArrayAttrib = nullptr;
	PFNGLVERTEXARRAYELEMENTBUFFERPROC fglVertexArrayElementBuffer = nullptr;
	PFNGLVERTEXARRAYVERTEXBUFFERPROC fglVertexArrayVertexBuffer = nullptr;
	PFNGLVERTEXARRAYVERTEXBUFFERSPROC fglVertexArrayVertexBuffers = nullptr;
	PFNGLVERTEXARRAYATTRIBBINDINGPROC fglVertexArrayAttribBinding = nullptr;
	PFNGLVERTEXARRAYATTRIBFORMATPROC fglVertexArrayAttribFormat = nullptr;
	PFNGLVERTEXARRAYATTRIBIFORMATPROC fglVertexArrayAttribIFormat = nullptr;
	PFNGLVERTEXARRAYATTRIBLFORMATPROC fglVertexArrayAttribLFormat = nullptr;
	PFNGLVERTEXARRAYBINDINGDIVISORPROC fglVertexArrayBindingDivisor = nullptr;
	PFNGLGETVERTEXARRAYIVPROC fglGetVertexArrayiv = nullptr;
	PFNGLGETVERTEXARRAYINDEXEDIVPROC fglGetVertexArrayIndexediv = nullptr;
	PFNGLGETVERTEXARRAYINDEXED64IVPROC fglGetVertexArrayIndexed64iv = nullptr;
	PFNGLCREATESAMPLERSPROC fglCreateSamplers = nullptr;
	PFNGLCREATEPROGRAMPIPELINESPROC fglCreateProgramPipelines = nullptr;
	PFNGLCREATEQUERIESPROC fglCreateQueries = nullptr;
	PFNGLGETQUERYBUFFEROBJECTI64VPROC fglGetQueryBufferObjecti64v = nullptr;
	PFNGLGETQUERYBUFFEROBJECTIVPROC fglGetQueryBufferObjectiv = nullptr;
	PFNGLGETQUERYBUFFEROBJECTUI64VPROC fglGetQueryBufferObjectui64v = nullptr;
	PFNGLGETQUERYBUFFEROBJECTUIVPROC fglGetQueryBufferObjectuiv = nullptr;
	PFNGLMEMORYBARRIERBYREGIONPROC fglMemoryBarrierByRegion = nullptr;
	PFNGLGETTEXTURESUBIMAGEPROC fglGetTextureSubImage = nullptr;
	PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC fglGetCompressedTextureSubImage = nullptr;
	PFNGLGETGRAPHICSRESETSTATUSPROC fglGetGraphicsResetStatus = nullptr;
	PFNGLGETNCOMPRESSEDTEXIMAGEPROC fglGetnCompressedTexImage = nullptr;
	PFNGLGETNTEXIMAGEPROC fglGetnTexImage = nullptr;
	PFNGLGETNUNIFORMDVPROC fglGetnUniformdv = nullptr;
	PFNGLGETNUNIFORMFVPROC fglGetnUniformfv = nullptr;
	PFNGLGETNUNIFORMIVPROC fglGetnUniformiv = nullptr;
	PFNGLGETNUNIFORMUIVPROC fglGetnUniformuiv = nullptr;
	PFNGLREADNPIXELSPROC fglReadnPixels = nullptr;
	PFNGLTEXTUREBARRIERPROC fglTextureBarrier = nullptr;

	void init(PFN_loadfunc load);
};



class glfn_core_ver_4_6 : public glfn_core_ver_4_5 {
public:

	PFNGLSPECIALIZESHADERPROC fglSpecializeShader = nullptr;
	PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC fglMultiDrawArraysIndirectCount = nullptr;
	PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC fglMultiDrawElementsIndirectCount = nullptr;
	PFNGLPOLYGONOFFSETCLAMPPROC fglPolygonOffsetClamp = nullptr;

	void init(PFN_loadfunc load);
};
