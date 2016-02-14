/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef HDRFILTER_H_
#define HDRFILTER_H_

#include "Util.h"
#include "ImageFilter.h"
#include "GaussianBlurFilter.h"

class HDRFilter : public ImageFilter {
public:
	HDRFilter(int *_pixels, int _width, int _height): ImageFilter(_pixels, _width, _height) {};
	int* procImage();
};


#endif /* HDRFILTER_H_ */
