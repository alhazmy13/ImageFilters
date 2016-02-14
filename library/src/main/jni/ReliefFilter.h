/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef RELIEFFILTER_H_
#define RELIEFFILTER_H_

#include "Util.h"
#include "ImageFilter.h"

class ReliefFilter : public ImageFilter {
public:
	ReliefFilter(int *pixels, int width, int height);
	int* procImage();
private:
	int colorCompensation;
};



#endif /* RELIEFFILTER_H_ */
