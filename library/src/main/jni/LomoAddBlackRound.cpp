/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#include <math.h>
#include <stdlib.h>

#include "LomoAddBlackRound.h"

LomoAddBlackRound::LomoAddBlackRound(int *_pixels, int _height, int _width, BlackRoundOptions options):
	ImageFilter(_pixels, _height, _width),
	roundRadius(options.roundRadius),
	pixelsFalloff(10) {

}

double LomoAddBlackRound::scaleFunc(double distance) {
	return 1 - pow(((distance - roundRadius) / pixelsFalloff), 2);
}

int* LomoAddBlackRound::procImage() {
	double centerX = width / 2;
	double centerY = height / 2;

	int currentPos;
	double pixelsFalloff = 10;

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			double dis = sqrt(pow((centerX - x), 2) + pow(centerY - y, 2));
			currentPos = y * width + x;

			if (dis > roundRadius && currentPos < width * height) {
				Color color(pixels[currentPos]);
				int pixR = color.R();
				int pixG = color.G();
				int pixB = color.B();

				double scaler = scaleFunc(dis);

				scaler = fabs(scaler);

				int newR = pixR - scaler;
				int newG = pixG - scaler;
				int newB = pixB - scaler;

				newR = min(255, max(0, newR));
				newG = min(255, max(0, newG));
				newB = min(255, max(0, newB));

				pixels[currentPos] = RGB2Color(newR, newG, newB);

			}
		}
	}

	return pixels;
}


