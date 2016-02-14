/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */


#include "BrightContrastFilter.h"

BrightContrastFilter::BrightContrastFilter(int* pixels, int width, int height):
	ImageFilter(pixels, width, height) {
}

int* BrightContrastFilter::procImage() {
	return NULL;
}

int* BrightContrastFilter::setBrightness(double brightness) {
	for (int i = 0; i < width * height; i++) {
		Color color(pixels[i]);
		int r = color.R() + brightness;
		int g = color.G() + brightness;
		int b = color.B() + brightness;

		r = min(255, max(0, r));
		g = min(255, max(0, g));
		b = min(255, max(0, b));

		pixels[i] = RGB2Color(r, g, b);
	}

	return pixels;
}

int* BrightContrastFilter::setContrast(double contrast) {
	for (int i = 0; i < width * height; i++) {
		Color color(pixels[i]);
		int r = 128 + (color.R() - 128) * contrast;
		int g = 128 + (color.G() - 128) * contrast;
		int b = 128 + (color.B() - 128) * contrast;

		r = min(255, max(0, r));
		g = min(255, max(0, g));
		b = min(255, max(0, b));

		pixels[i] = RGB2Color(r, g, b);
	}

	return pixels;
}
