/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef HUESATURATIONFILTER_H_
#define HUESATURATIONFILTER_H_

#include "ImageFilter.h"
#include "ColorTranslator.h"

class HueSaturationFilter : public ImageFilter {
public:
	HueSaturationFilter(int *pixels, int width, int height);
	~HueSaturationFilter();
	int* procImage();
	int* setHue(double hue);
	int* setSaturation(double saturation);
	int* setHueSaturation(double hue, double saturation);
	int* setHueSaturationIntesity(double hue, double saturation, double intesity);
private:
	HSI* pixelsHSI;
	void initPixelsHSI();
};




#endif /* HUESATURATIONFILTER_H_ */
