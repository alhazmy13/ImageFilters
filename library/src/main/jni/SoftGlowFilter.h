/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef SOFTGLOWFILTER_H_
#define SOFTGLOWFILTER_H_

#include "Util.h"
#include "ColorGetter.h"
#include "ImageFilter.h"
#include "GaussianBlurFilter.h"

typedef struct _softGlowOptions {
	_softGlowOptions(double s) {
		this->blurSigma = s;
	}
	double blurSigma;
} SoftGlowOptions;

class SoftGlowFilter : public ImageFilter {
public:
	SoftGlowFilter(int *_pixels, int _width, int _height, SoftGlowOptions options);
	int* procImage();
private:
	double blurSigma;
};


#endif /* SOFTGLOWFILTER_H_ */
