/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef BRIGHTCONTRASTFILTER_H_
#define BRIGHTCONTRASTFILTER_H_

#include "ImageFilter.h"


class BrightContrastFilter : public ImageFilter {
public:
	BrightContrastFilter(int *pixels, int width, int height);
	int* procImage();
	int* setBrightness(double brightness);
	int* setContrast(double contrast);
};



#endif /* BRIGHTCONTRASTFILTER_H_ */
