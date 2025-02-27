/* vim: set sw=4 ts=4 sts=4 expandtab */

#ifndef _LLKA_TRACER_H
#define _LLKA_TRACER_H

#ifdef LLKA_DISABLE_TRACING
#define ECHMET_TRACER_DISABLE_TRACING
#endif

#include "echmet_tracer.h"

enum class LLKATracing {
    CLASSIFICATION_METRICS_DIFFERENCES,
    ALL_NEAREST_NEIGHBORS,
    BEGIN_STEP_CLASSIFICATION_MULTIPLE,
    DIFFERENCES_FROM_NTC_AVERAGES,
    GOLDEN_STEP_REJECTED_TOLERANCE_EXCEEDED,
    DETAILS_STEPS_WITH_NO_NEIGHBORS,
    BESTIE_CLUSTER_INFO,
    PSEUDOROTATION_TOO_DIFFERENT,
    CLOSEST_GOLDEN_STEP_INFO,
    __LAST
};

ECHMET_MAKE_TRACEPOINT_IDS(LLKATracing, CLASSIFICATION_METRICS_DIFFERENCES, __LAST)

#endif // _LLKA_TRACER_H
