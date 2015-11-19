# HelloJNI
This is sample application for using JNI with Android.

The jni directory was created from HelloJNI/app/src/main directory using:
```
  javah -d jni -cp $ANDROID_SDK/platforms/android-23/android.jar:$ANDROID_SDK/extras/android/support/v4/android-support-v4.jar:$ANDROID_SDK/extras/android/support/v7/appcompat/libs/android-support-v7-appcompat.jar:../../build/intermediates/classes/debug:. com.example.hellojni.MainActivity
```

This project was created using Ubuntu 15.10 and Android Studio 1.4.1 using latest Android SDK (API 23) and NDK (r10e).
You may need to configure ```ndk.dir``` in ```local.properties``` or in Android Studio.
