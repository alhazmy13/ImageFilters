/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef OLDFILTER_H_
#define OLDFILTER_H_

#include <stdlib.h>

#include "Util.h"
#include "ImageFilter.h"

#define OIL_FILTER_LEVEL 256
#define OIL_RANGE 10

typedef struct _oilFilterOptions {
	int oilRange;
	_oilFilterOptions(int range) {
		oilRange = range;
	}
} OilFilterOptions;

class OilFilter : public ImageFilter {
public:
	OilFilter(int *_pixels, int _width, int _height);
	OilFilter(int *pixels, int width, int height, OilFilterOptions options);
	int* procImage();
private:
	int oilRange;
};


#endif /* OLDFILTER_H_ */
