/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType */

#ifndef _Included_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
#define _Included_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
#ifdef __cplusplus
extern "C" {
#endif
#undef com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_STBTT_VMOVE
#define com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_STBTT_VMOVE 1L
#undef com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_STBTT_VLINE
#define com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_STBTT_VLINE 2L
#undef com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_STBTT_VCURVE
#define com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_STBTT_VCURVE 3L
/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    initFont
 * Signature: ([BII)J
 */
JNIEXPORT jlong JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_initFont
  (JNIEnv *, jclass, jbyteArray, jint, jint);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    disposeFont
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_disposeFont
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    findGlyphIndex
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_findGlyphIndex
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    scaleForPixelHeight
 * Signature: (JF)F
 */
JNIEXPORT jfloat JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_scaleForPixelHeight
  (JNIEnv *, jclass, jlong, jfloat);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getFontVMetrics
 * Signature: (J[I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getFontVMetrics
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getCodepointHMetrics
 * Signature: (JI[I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getCodepointHMetrics
  (JNIEnv *, jclass, jlong, jint, jintArray);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getCodepointKernAdvance
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getCodepointKernAdvance
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getCodePointBox
 * Signature: (JI[I)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getCodePointBox
  (JNIEnv *, jclass, jlong, jint, jintArray);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getGlyphHMetrics
 * Signature: (JI[I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getGlyphHMetrics
  (JNIEnv *, jclass, jlong, jint, jintArray);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getGlyphKernAdvance
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getGlyphKernAdvance
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getGlyphBox
 * Signature: (JI[I)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getGlyphBox
  (JNIEnv *, jclass, jlong, jint, jintArray);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getCodePointShape
 * Signature: (JI[J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getCodePointShape
  (JNIEnv *, jclass, jlong, jint, jlongArray);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getGlyphShape
 * Signature: (JI[J)I
 */
JNIEXPORT jint JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getGlyphShape
  (JNIEnv *, jclass, jlong, jint, jlongArray);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getShapeVertex
 * Signature: (JI[I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getShapeVertex
  (JNIEnv *, jclass, jlong, jint, jintArray);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    freeShape
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_freeShape
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    makeCodepointBitmap
 * Signature: (JLjava/nio/ByteBuffer;IIIFFI)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_makeCodepointBitmap
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jint, jfloat, jfloat, jint);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getCodepointBitmapBox
 * Signature: (JIFF[I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getCodepointBitmapBox
  (JNIEnv *, jclass, jlong, jint, jfloat, jfloat, jintArray);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    makeGlyphBitmap
 * Signature: (JLjava/nio/ByteBuffer;IIIFFFFI)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_makeGlyphBitmap
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType
 * Method:    getGlyphBitmapBox
 * Signature: (JIFFFF[I)V
 */
JNIEXPORT void JNICALL Java_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_getGlyphBitmapBox
  (JNIEnv *, jclass, jlong, jint, jfloat, jfloat, jfloat, jfloat, jintArray);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_Vertex */

#ifndef _Included_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_Vertex
#define _Included_com_badlogic_gdx_graphics_g2d_stbtt_StbTrueType_Vertex
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
