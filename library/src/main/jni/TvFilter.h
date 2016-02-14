/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef TVFILTER_H_
#define TVFILTER_H_

#include "Util.h"
#include "ColorGetter.h"
#include "ImageFilter.h"

class TvFilter : public ImageFilter {
public:
	TvFilter(int *pixels, int width, int height);
	int* procImage();
private:
	int gap;
};



#endif /* TVFILTER_H_ */
