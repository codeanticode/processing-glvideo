/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class processing_glvideo_GLVideo */

#ifndef _Included_processing_glvideo_GLVideo
#define _Included_processing_glvideo_GLVideo
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_processing_glvideo_GLVideo_gstreamer_1init
  (JNIEnv *, jclass);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_open
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_processing_glvideo_GLVideo_gstreamer_1open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_isAvailable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_processing_glvideo_GLVideo_gstreamer_1isAvailable
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_getFrame
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_processing_glvideo_GLVideo_gstreamer_1getFrame
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_startPlayback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_processing_glvideo_GLVideo_gstreamer_1startPlayback
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_isPlaying
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_processing_glvideo_GLVideo_gstreamer_1isPlaying
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_stopPlayback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_processing_glvideo_GLVideo_gstreamer_1stopPlayback
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_setLooping
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_processing_glvideo_GLVideo_gstreamer_1setLooping
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_seek
 * Signature: (JF)Z
 */
JNIEXPORT jboolean JNICALL Java_processing_glvideo_GLVideo_gstreamer_1seek
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_setSpeed
 * Signature: (JF)Z
 */
JNIEXPORT jboolean JNICALL Java_processing_glvideo_GLVideo_gstreamer_1setSpeed
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_setVolume
 * Signature: (JF)Z
 */
JNIEXPORT jboolean JNICALL Java_processing_glvideo_GLVideo_gstreamer_1setVolume
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_getDuration
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_processing_glvideo_GLVideo_gstreamer_1getDuration
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_getPosition
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_processing_glvideo_GLVideo_gstreamer_1getPosition
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_getWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_processing_glvideo_GLVideo_gstreamer_1getWidth
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_getHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_processing_glvideo_GLVideo_gstreamer_1getHeight
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_getFramerate
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_processing_glvideo_GLVideo_gstreamer_1getFramerate
  (JNIEnv *, jobject, jlong);

/*
 * Class:     processing_glvideo_GLVideo
 * Method:    gstreamer_close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_processing_glvideo_GLVideo_gstreamer_1close
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
