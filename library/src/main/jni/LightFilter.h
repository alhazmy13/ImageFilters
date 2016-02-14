/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef LIGHTFILTER_H_
#define LIGHTFILTER_H_

#include <math.h>

#include "Util.h"
#include "ColorGetter.h"
#include "ImageFilter.h"

typedef struct _lightFilterOptions {
	_lightFilterOptions(int centerX, int centerY, int radius) {
		this->centerX = centerX;
		this->centerY = centerY;
		this->radius = radius;
	}
	int centerX;
	int centerY;
	int radius;
} LightFilterOptions;

class LightFilter : public ImageFilter {
public:
	LightFilter(int *_pixels, int _width, int _height);
	LightFilter(int *_pixels, int _width, int _height, LightFilterOptions options);
	int* procImage();
private:
	int centerX;
	int centerY;
	int radius;
};


#endif /* LIGHTFILTER_H_ */
