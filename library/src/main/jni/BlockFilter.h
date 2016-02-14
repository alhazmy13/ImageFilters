/*
 *
 *  Written by Alhazmy13  <http://alhazmy13.net>, 2016/2
 *
 *  This file is part of ImageFilter
 *  Licensed under the Apache License, Version 2.0
 *
 */

#ifndef BLOCKFILTER_H_
#define BLOCKFILTER_H_

#include "Util.h"
#include "ImageFilter.h"

class BlockFilter : public ImageFilter {
public:
	BlockFilter(int* pixels, int width, int height);
	int* procImage();
private:
	int threshold;
};



#endif /* BLOCKFILTER_H_ */
