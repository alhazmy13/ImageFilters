/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  ReliefFilter.java / ReliefFilter is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

package net.alhazmy13.imagefilter;

import android.graphics.Bitmap;


class ReliefFilter {
	
	static {
		System.loadLibrary("ImageFilter");
	}
	
	public static Bitmap changeToRelief(Bitmap bitmap) {        
		int width = bitmap.getWidth();
		int height = bitmap.getHeight();
		int[] pixels = new int[width * height];
		bitmap.getPixels(pixels, 0, width, 0, 0, width, height);
		
		int[] returnPixels = NativeFilterFunc.reliefFilter(pixels, width, height);
		Bitmap returnBitmap = Bitmap.createBitmap(returnPixels, width, height, Bitmap.Config.ARGB_8888);
		
		// set the saturation
//		Canvas c = new Canvas(returnBitmap);
//		Paint paint = new Paint();
//		ColorMatrix cm = new ColorMatrix();
//		cm.setSaturation(0);
//		ColorMatrixColorFilter f = new ColorMatrixColorFilter(cm);
//		paint.setColorFilter(f);
//		c.drawBitmap(returnBitmap, 0, 0, paint);
		
		return returnBitmap;
	}
		
	
}
