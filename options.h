//
//  Header.h
//  conSERN
//
//  Created by Eric Parsonage on 8/3/15.
//  Copyright 2015. All rights reserved.
//
//

#ifndef conSERN_Header_h
#define conSERN_Header_h
#include <stdlib.h>
#include <stdint.h>
#include "edgeprobfuncs.h"
#include "metrics.h"

typedef void *(*ReallocFunction)(void *, size_t);
typedef void *(*CallocFunction)(size_t, size_t);

typedef void  (*ErrIdAndTxt)(const char * identifier, uint32_t line,
                             const char * fmt,	// printf style
                             ...);
typedef float coordType;



typedef struct
{
    double s1;
    double s2;
    double q;
    uint32_t N;
    uint32_t M;
    
    uint32_t connected;
    uint32_t algorithm;
    uint32_t ThreadCount;
    uint32_t BufferSize;

    
    uint32_t seedval;
    uint32_t components_enabled;
    uint32_t weights_enabled;
    ProbabilityFunction probGivenDistance;
    DistanceFunction distance;
    ReallocFunction realloc;
    CallocFunction calloc;
    ErrIdAndTxt errIdAndTxt;

} Options;

#endif
