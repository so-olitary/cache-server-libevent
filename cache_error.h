﻿#include "stdafx.h"

#ifndef _CACHE_ERROR_H_
#define _CACHE_ERROR_H_

#define _DEBUG
//-----------------------------------------
typedef enum
{ SRV_ERR_NONE,  SRV_ERR_PARAM,
  SRV_ERR_INPUT, SRV_ERR_LIBEV,
  SRV_ERR_RCMMN, SRV_ERR_RFREE,
  SRV_ERR_FDTRS
} myerr;
myerr my_errno;
//-----------------------------------------
const char*  strmyerror (void);
//-----------------------------------------
#endif // _CACHE_ERROR_H_
