/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  PixelateFilter.java / PixelateFilter is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

package net.alhazmy13.imagefilter;

import android.graphics.Bitmap;

class PixelateFilter {
	static {
		System.loadLibrary("ImageFilter");
	}
	
	public static final Bitmap changeToPixelate(Bitmap bitmap, int pixelSize) {
		int width = bitmap.getWidth();
		int height = bitmap.getHeight();
		
		int[] pixels = new int[width * height];
		bitmap.getPixels(pixels, 0, width, 0, 0, width, height);
		
		int[] returnPixels = NativeFilterFunc.pxelateFilter(pixels, width, height, pixelSize);
		Bitmap returnBitmap = Bitmap.createBitmap(returnPixels, width, height, Bitmap.Config.ARGB_8888);
		
		return returnBitmap;
		
	}
}
