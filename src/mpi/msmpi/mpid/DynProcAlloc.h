#pragma once
#include "DynProcTypes.h"

CONN_INFO_TYPE*
ConnInfoAlloc(
    size_t count );

void
ConnInfoFree(
    _In_opt_ CONN_INFO_TYPE* ppConn
    );
