/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef SKETCHFILTER_H_
#define SKETCHFILTER_H_

#include <stdlib.h>

#include "ColorGetter.h"
#include "Util.h"
#include "ImageFilter.h"

class SketchFilter : public ImageFilter {
public:
	SketchFilter(int *_pixels, int _width, int _height);
	int* procImage();
private:
	int threshold;
};


#endif /* SKETCHFILTER_H_ */
