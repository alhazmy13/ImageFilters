/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  TvFilter.java / TvFilter is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

package net.alhazmy13.imagefilter;

import android.graphics.Bitmap;

class TvFilter {
	
	static {
		System.loadLibrary("ImageFilter");
	}
	
	public static final Bitmap changeToTV(Bitmap bitmap) {
		int height = bitmap.getHeight();
		int width = bitmap.getWidth();
		
		int[] pixels = new int[width * height];
		bitmap.getPixels(pixels, 0, width, 0, 0, width, height);
		
		int[] resultPixels = NativeFilterFunc.tvFilter(pixels, width, height);
		Bitmap returnBitmap = Bitmap.createBitmap(resultPixels, width, height, Bitmap.Config.ARGB_8888);
		
		return returnBitmap;
	}
}
