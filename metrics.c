//
//  metrics.c
//  conSERN
//
//  Created by Eric Parsonage on 8/4/15.
//  Copyright 2015. All rights reserved.
//
//

#include "metrics.h"
#include <math.h>

#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif


double euclidean(double xdiff, double ydiff)
{
    return sqrt(xdiff * xdiff + ydiff * ydiff);
}

double manhattan(double xdiff, double ydiff)
{
    return xdiff + ydiff;
}

double discrete(double xdiff, double ydiff)
{
    return  ((0.0 == xdiff) && (0.0 == ydiff)) ? 0.0 : 1.0;
}

double maxdist(double xdiff, double ydiff)
{
    return max(xdiff, ydiff);
}


