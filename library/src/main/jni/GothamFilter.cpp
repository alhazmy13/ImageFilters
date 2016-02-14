/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#include "GothamFilter.h"
#include "ColorTranslator.h"
#include "HueSaturationFilter.h"
#include "GammaCorrectionFilter.h"
#include "BrightContrastFilter.h"
#include "Util.h"

GothamFilter::GothamFilter(int* pixels, int width, int height):
	ImageFilter(pixels, width, height) {

	HSI gothamHSI = ColorTranslator::RGB2HSI(GOTHAM_R, GOTHAM_G, GOTHAM_B);
	gothamHue = 233.69;

//	LOGI("gothamHue = %f", gothamHue);

	saturationFactor = 0.2;
	gammaValue = 0.7;
	contrastValue = 1.2;
}

int* GothamFilter::procImage() {

	long startTime = getCurrentTime();

	BrightContrastFilter *brightContrastFilter = new BrightContrastFilter(pixels, width, height);
	this->pixels = brightContrastFilter->setBrightness(-50);

	GammaCorrectionFilter *gammaCorrectionFilter = new GammaCorrectionFilter(pixels, width, height, gammaValue);
	this->pixels = gammaCorrectionFilter->procImage();

	HueSaturationFilter *hueSaturationFilter = new HueSaturationFilter(pixels, width, height);
	this->pixels = hueSaturationFilter->setHueSaturationIntesity(gothamHue, saturationFactor, 0.3);

	this->pixels = brightContrastFilter->setContrast(contrastValue);

	delete gammaCorrectionFilter;
	delete brightContrastFilter;
	delete hueSaturationFilter;

	long endTime = getCurrentTime();
	LOGI("GothamFilter use %ld ms", endTime - startTime);

	return pixels;
}
