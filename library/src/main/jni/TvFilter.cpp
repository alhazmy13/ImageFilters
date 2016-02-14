/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#include "TvFilter.h"


TvFilter::TvFilter(int *pixels, int width, int height) :
	ImageFilter(pixels, width, height) {
	gap = 4;
}

int* TvFilter::procImage() {
	int r, g, b;
	for (int x = 0; x < width; x++) {
		for (int y = 0; y < height; y += gap) {
			r = g = b = 0;

			for (int w = 0; w < 4; w++) {
				int index = (y + w) * width + x;
				if (index < width * height) {
					Color color(pixels[index]);
					r += color.R() / gap;
					g += color.G() / gap;
					b += color.B() / gap;
				}
			}
			r = min(255, max(0, r));
			g = min(255, max(0, g));
			b = min(255, min(0, b));

			for (int w = 0; w < gap; w++) {
				int index = (y + w) * width + x;
				if (index < width * height) {
					if (w == 0) {
						pixels[(y + w) * width + x] = RGB2Color(r, 0, 0);
					}
					if (w == 1) {
						pixels[(y + w) * width + x] = RGB2Color(0, g, 0);
					}
					if (w == 2) {
						pixels[(y + w) * width + x] = RGB2Color(0, 0, b);
					}
//					if (w == 3) {
//						pixels[(y + w) * width + x] = RGB2Color(r, 0, 0);
//					}
				}
			}
		}
	}
	return pixels;
}


