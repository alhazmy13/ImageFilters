/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef SHARPENFILTER_H_
#define SHARPENFILTER_H_

#include "ImageFilter.h"
#include "Util.h"
#include "ColorGetter.h"

class SharpenFilter : public ImageFilter {
public:
	SharpenFilter(int *pixels, int width, int height);
	~SharpenFilter();
	int* procImage();
	int* highBoostSharpen();
};


#endif /* SHARPENFILTER_H_ */
