/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef LOMOADDBLACKROUND_H_
#define LOMOADDBLACKROUND_H_

#include "Util.h"
#include "ImageFilter.h"
#include "ColorGetter.h"

typedef struct _blackRoundOptions {
	_blackRoundOptions(double r) {
		roundRadius = r;
	}
	double roundRadius;
} BlackRoundOptions;

class LomoAddBlackRound : public ImageFilter {
public:
	LomoAddBlackRound(int *_pixels, int _width, int _height, BlackRoundOptions options);
	int* procImage();
private:
	double roundRadius;
	double pixelsFalloff;
	double scaleFunc(double distance);
};


#endif /* LOMOADDBLACKROUND_H_ */
