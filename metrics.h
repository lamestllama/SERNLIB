//
//  metrics.h
//  conSERN
//
//  Created by Eric Parsonage on 8/4/15.
//  Copyright 2015. All rights reserved.
//
//

#ifndef __conSERN__metrics__
#define __conSERN__metrics__

#include <math.h>

typedef double (*DistanceFunction)(double xdiff, double ydiff);


extern double euclidean(double xdiff, double ydiff);
extern double manhattan(double xdiff, double ydiff);
extern double maxdist(double xdiff, double ydiff);
extern double discrete(double xdiff, double ydiff);

extern DistanceFunction  distanceFunctions[];


#endif /* defined(__conSERN__metrics__) */
