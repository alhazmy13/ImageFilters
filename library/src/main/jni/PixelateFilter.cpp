/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#include "PixelateFilter.h"

PixelateFilter::PixelateFilter(int* pixels, int width, int height, PixelateOptions options):
	ImageFilter(pixels, width, height),
	pixelSize(options.pixelateSize) {
}

PixelateFilter::PixelateFilter(int *pixels, int width, int height):
	ImageFilter(pixels, width, height),
	pixelSize(10) {

}

int* PixelateFilter::procImage() {
	for (int i = 0; i < width; i += pixelSize) {
		for (int j = 0; j < height; j += pixelSize) {
			Color rectColor = getRectColor(i, j);
			fillRectColor(rectColor, i, j);
		}
	}
	return pixels;
}

Color PixelateFilter::getRectColor(int col, int row) {
	int r = 0, g = 0, b = 0;
	int sum = 0;
	for (int x = col; x < col + pixelSize; x++) {
		for (int y = row; y < row + pixelSize; y++) {
			int index = x + y * width;
			if (index < width * height) {
				Color pixColor(pixels[x + y * width]);
				r += pixColor.R();
				g += pixColor.G();
				b += pixColor.B();
			}

		}
	}
	sum = pixelSize * pixelSize;
	return Color(r / sum, g / sum, b / sum);
}

void PixelateFilter::fillRectColor(Color &color, int col, int row) {
	for (int x = col; x < col + pixelSize; x++) {
		for (int y = row; y < row + pixelSize; y++) {
			int index = x + y * width;
			if (x < width && y < height && index < width * height) {
				pixels[x + y * width] = color.getColor();
			}

		}
	}
}


