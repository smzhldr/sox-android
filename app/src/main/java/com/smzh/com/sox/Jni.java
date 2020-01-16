package com.smzh.com.sox;

public class Jni {

    static {
        System.loadLibrary("sox");
    }

    public native String hello();
}
