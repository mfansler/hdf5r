/**************************************************************************
 * 
 * Copyright 2016 Novartis Institutes for BioMedical Research Inc.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *************************************************************************/


#ifndef _CONST_EXPORT_H
#define _CONST_EXPORT_H

#include "global.h"
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

// set some constants of my own
#define H5TOR_CONV_NONE 0
#define H5TOR_CONV_INT64_INT_NOLOSS 1
#define H5TOR_CONV_INT64_FLOAT_NOLOSS 2
#define H5TOR_CONV_INT64_FLOAT_FORCE 4
#define H5TOR_CONV_UINT64_NA 8
#define H5TOR_CONV_INT64_NOLOSS 3



// create a dataframe with all type information
SEXP show_all_const_data_frame(void);

typedef enum {
  CONST_H5F_ACC_TRUNC,
  CONST_H5F_ACC_EXCL,
  CONST_H5F_ACC_DEBUG,
  CONST_H5F_ACC_RDONLY,
  CONST_H5F_ACC_RDWR,
  CONST_H5F_ACC_DEFAULT,
  CONST_H5F_ACC_SWMR_WRITE,
  CONST_H5F_ACC_SWMR_READ,
  CONST_H5P_DEFAULT,
  CONST_H5S_ALL,
  CONST_H5TOR_CONV_NONE,
  CONST_H5TOR_CONV_INT64_INT_NOLOSS,
  CONST_H5TOR_CONV_INT64_FLOAT_NOLOSS,
  CONST_H5TOR_CONV_INT64_FLOAT_FORCE,
  CONST_H5TOR_CONV_UINT64_NA,
  CONST_H5TOR_CONV_INT64_NOLOSS,
  CONST_H5F_OBJ_FILE,
  CONST_H5F_OBJ_DATASET,
  CONST_H5F_OBJ_GROUP,
  CONST_H5F_OBJ_DATATYPE,
  CONST_H5F_OBJ_ATTR,
  CONST_H5F_OBJ_ALL,
  CONST_H5F_OBJ_LOCAL,
  CONST_H5P_ATTRIBUTE_CREATE,
  CONST_H5P_DATASET_ACCESS,
  CONST_H5P_DATASET_CREATE,
  CONST_H5P_DATASET_XFER,
  CONST_H5P_DATATYPE_ACCESS,
  CONST_H5P_DATATYPE_CREATE,
  CONST_H5P_FILE_ACCESS,
  CONST_H5P_FILE_CREATE,
  CONST_H5P_FILE_MOUNT,
  CONST_H5P_GROUP_ACCESS,
  CONST_H5P_GROUP_CREATE,
  CONST_H5P_LINK_ACCESS,
  CONST_H5P_LINK_CREATE,
  CONST_H5P_OBJECT_COPY,
  CONST_H5P_OBJECT_CREATE,
  CONST_H5P_STRING_CREATE,
  CONST_H5Z_FILTER_ALL,
  CONST_H5Z_FILTER_DEFLATE,
  CONST_H5Z_FILTER_SHUFFLE,
  CONST_H5Z_FILTER_FLETCHER32,
  CONST_H5Z_FILTER_SZIP,
  CONST_H5Z_FILTER_NBIT,
  CONST_H5Z_FILTER_SCALEOFFSET,
  CONST_H5Z_FLAG_OPTIONAL,
  CONST_H5Z_FLAG_MANDATORY,
  CONST_H5P_CRT_ORDER_TRACKED,
  CONST_H5P_CRT_ORDER_INDEXED,
  CONST_H5O_COPY_SHALLOW_HIERARCHY_FLAG,
  CONST_H5O_COPY_EXPAND_SOFT_LINK_FLAG,
  CONST_H5O_COPY_EXPAND_EXT_LINK_FLAG,
  CONST_H5O_COPY_EXPAND_REFERENCE_FLAG,
  CONST_H5O_COPY_WITHOUT_ATTR_FLAG,
  CONST_H5O_COPY_MERGE_COMMITTED_DTYPE_FLAG,
  CONST_H5D_CHUNK_CACHE_W0_DEFAULT, 
  CONST_LAST_ITEM
} CONST_enum;


#endif
