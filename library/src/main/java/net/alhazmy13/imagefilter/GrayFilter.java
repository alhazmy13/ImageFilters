/*
 *
 *  Written by Alhazmy13  <alhazmy13.net>, 2016/2
 *
 *  GrayFilter.java / GrayFilter is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 * /
 */

package net.alhazmy13.imagefilter;

import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.ColorMatrix;
import android.graphics.ColorMatrixColorFilter;
import android.graphics.Paint;

class GrayFilter {
	public static Bitmap changeToGray(Bitmap bitmap) {
		int width, height;
		width = bitmap.getWidth();
		height = bitmap.getHeight();
			
		Bitmap grayBitmap = Bitmap.createBitmap(width, height, Bitmap.Config.ARGB_8888);
		Canvas canvas = new Canvas(grayBitmap);
		Paint paint = new Paint();
		paint.setAntiAlias(true);
			
		ColorMatrix colorMatrix = new ColorMatrix();
		colorMatrix.setSaturation(0);
			
		ColorMatrixColorFilter filter = new ColorMatrixColorFilter(colorMatrix);
			
		paint.setColorFilter(filter);
		canvas.drawBitmap(bitmap, 0, 0, paint);
			
		return grayBitmap;
	}
}
