/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef AVERAGESMOOTHFILTER_H_
#define AVERAGESMOOTHFILTER_H_

#include "ImageFilter.h"
#include "Util.h"

typedef struct _averageSmoothOptions {
	_averageSmoothOptions(int maskSize) {
		this->maskSize = maskSize;
	}
	int maskSize;
} AverageSmoothOptions;

class AverageSmoothFilter : public ImageFilter {
public:
	AverageSmoothFilter(int *pixels, int width, int height);
	AverageSmoothFilter(int *_pixels, int _width, int _height, AverageSmoothOptions options);
	virtual ~AverageSmoothFilter() {};
	int* procImage();
private:
	int maskSize;
};

#endif /* AVERAGESMOOTHFILTER_H_ */
