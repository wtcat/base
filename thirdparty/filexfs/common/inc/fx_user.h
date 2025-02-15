/***************************************************************************
 * Copyright (c) 2024 Microsoft Corporation 
 * 
 * This program and the accompanying materials are made available under the
 * terms of the MIT License which is available at
 * https://opensource.org/licenses/MIT.
 * 
 * SPDX-License-Identifier: MIT
 **************************************************************************/

#ifndef FX_USER_H
#define FX_USER_H

#ifdef CONFIG_HEADER_FILE
#include CONFIG_HEADER_FILE
#endif

/* Define various build options for the FileX port.  The application should either make changes
   here by commenting or un-commenting the conditional compilation defined OR supply the defines
   though the compiler's equivalent of the -D option.  */


/* Override various options with default values already assigned in fx_api.h or fx_port.h. Please
   also refer to fx_port.h for descriptions on each of these options.  */


/* Defines the maximum size of long file names supported by FileX. The default value is 33. The
   minimum value is 13 and the maximum value is 256.  */

/*#define FX_MAX_LONG_NAME_LEN            256   */
#ifdef CONFIG_FX_MAX_LONG_NAME_LEN
#define FX_MAX_LONG_NAME_LEN    CONFIG_FX_MAX_LONG_NAME_LEN
#endif

/*#define FX_MAX_LAST_NAME_LEN            256   */      /* Must be as large or larger than FX_MAX_LONG_NAME_LEN */
#ifdef CONFIG_FX_MAX_LAST_NAME_LEN
#define FX_MAX_LAST_NAME_LEN CONFIG_FX_MAX_LAST_NAME_LEN 
#endif

#if CONFIG_FX_MAX_LAST_NAME_LEN < CONFIG_FX_MAX_LONG_NAME_LEN
# error "Invalid definition for CONFIG_FX_MAX_LAST_NAME_LEN"
#endif


/* Defines the maximum number of logical sectors that can be cached by FileX. The cache memory
   supplied to FileX at fx_media_open determines how many sectors can actually be cached.  */

/*#define FX_MAX_SECTOR_CACHE             256   */      /* Minimum value is 2, all other values must be power of 2.  */
#ifdef CONFIG_FX_MAX_SECTOR_CACHE
#define FX_MAX_SECTOR_CACHE             CONFIG_FX_MAX_SECTOR_CACHE      /* Minimum value is 2, all other values must be power of 2.  */
#endif

/* Defines the size in bytes of the bit map used to update the secondary FAT sectors. The larger the value the
   less unnecessary secondary FAT sector writes.   */

/*#define FX_FAT_MAP_SIZE                 128  */       /* Minimum value is 1, no maximum value.  */
#ifdef CONFIG_FX_FAT_MAP_SIZE
#define FX_FAT_MAP_SIZE                 CONFIG_FX_FAT_MAP_SIZE       /* Minimum value is 1, no maximum value.  */
#endif

/* Defines the number of entries in the FAT cache.  */

/*#define FX_MAX_FAT_CACHE                16   */       /* Minimum value is 8, all values must be a power of 2.  */
#ifdef CONFIG_FX_MAX_FAT_CACHE
#define FX_MAX_FAT_CACHE                CONFIG_FX_MAX_FAT_CACHE       /* Minimum value is 8, all values must be a power of 2.  */
#endif

/* Defines the number of seconds the time parameters are updated in FileX.  */

/*#define FX_UPDATE_RATE_IN_SECONDS       10   */
#ifdef CONFIG_FX_UPDATE_RATE_IN_SECONDS
#define FX_UPDATE_RATE_IN_SECONDS       CONFIG_FX_UPDATE_RATE_IN_SECONDS 
#endif

/* Defines the number of ThreadX timer ticks required to achieve the update rate specified by
   FX_UPDATE_RATE_IN_SECONDS defined previously. By default, the ThreadX timer tick is 10ms,
   so the default value for this constant is 1000.  */

/*#define FX_UPDATE_RATE_IN_TICKS         1000 */


/* Defined, FileX is built without update to the time parameters.  */

/*#define FX_NO_TIMER  */
#ifdef CONFIG_FX_NO_TIMER
#define FX_NO_TIMER
#endif


/* Defined, FileX does not update already opened files.  */

/*#define FX_DONT_UPDATE_OPEN_FILES   */
#ifdef CONFIG_FX_DONT_UPDATE_OPEN_FILES
#define FX_DONT_UPDATE_OPEN_FILES
#endif


/* Defined, the file search cache optimization is disabled.  */

/*#define FX_MEDIA_DISABLE_SEARCH_CACHE  */
#ifdef CONFIG_FX_MEDIA_DISABLE_SEARCH_CACHE
#define FX_MEDIA_DISABLE_SEARCH_CACHE
#endif

/* Defined, the direct read sector update of cache is disabled.  */

/*#define FX_DISABLE_DIRECT_DATA_READ_CACHE_FILL  */
#ifdef CONFIG_FX_DISABLE_DIRECT_DATA_READ_CACHE_FILL
#define FX_DISABLE_DIRECT_DATA_READ_CACHE_FILL
#endif

/* Defined, gathering of media statistics is disabled.  */

/*#define FX_MEDIA_STATISTICS_DISABLE  */
#ifdef CONFIG_FX_MEDIA_STATISTICS_DISABLE
#define FX_MEDIA_STATISTICS_DISABLE
#endif

/* Defined, legacy single open logic for the same file is enabled.  */

/*#define FX_SINGLE_OPEN_LEGACY   */
#ifdef CONFIG_FX_SINGLE_OPEN_LEGACY
#define FX_SINGLE_OPEN_LEGACY
#endif

/* Defined, renaming inherits path information.  */

/*#define FX_RENAME_PATH_INHERIT   */
#ifdef CONFIG_FX_RENAME_PATH_INHERIT
#define FX_RENAME_PATH_INHERIT
#endif

/* Defined, local path logic is disabled.  */

/*#define FX_NO_LOCAL_PATH   */
#ifdef CONFIG_FX_NO_LOCAL_PATH
#define FX_NO_LOCAL_PATH
#endif

/* Define FileX internal protection macros.  If FX_SINGLE_THREAD is defined,
   these protection macros are effectively disabled.  However, for multi-thread
   uses, the macros are setup to utilize a ThreadX mutex for multiple thread
   access control into an open media.  */

/* #define FX_SINGLE_THREAD   */
#ifdef CONFIG_FX_SINGLE_THREAD
#define FX_SINGLE_THREAD
#endif

/* Defined, Filex will be used in standalone mode (without ThreadX) */

/* #define FX_STANDALONE_ENABLE */
#ifdef CONFIG_FX_STANDALONE_ENABLE
#define FX_STANDALONE_ENABLE
#endif

/* Defined, data sector write requests are flushed immediately to the driver.  */

/*#define FX_FAULT_TOLERANT_DATA  */
#ifdef CONFIG_FX_FAULT_TOLERANT_DATA
#define FX_FAULT_TOLERANT_DATA
#endif

/* Defined, system sector write requests (including FAT and directory entry requests)
   are flushed immediately to the driver.  */

/*#define FX_FAULT_TOLERANT   */
#ifdef CONFIG_FX_FAULT_TOLERANT
#define FX_FAULT_TOLERANT
#endif

/* Defined, enables 64-bits sector addresses used in I/O driver.  */

/*#define FX_DRIVER_USE_64BIT_LBA   */
#ifdef CONFIG_FX_DRIVER_USE_64BIT_LBA
#define FX_DRIVER_USE_64BIT_LBA
#endif

/* Defined, enables FileX fault tolerant service.  */

/*#define FX_ENABLE_FAULT_TOLERANT   */
#ifdef CONFIG_FX_ENABLE_FAULT_TOLERANT
#define FX_ENABLE_FAULT_TOLERANT
#endif

/* Define byte offset in boot sector where the cluster number of the Fault Tolerant Log file is.
   Note that this field (byte 116 to 119) is marked as reserved by FAT 12/16/32 specification. */

/*#define FX_FAULT_TOLERANT_BOOT_INDEX      116 */
#ifdef CONFIG_FX_FAULT_TOLERANT_BOOT_INDEX
#define FX_FAULT_TOLERANT_BOOT_INDEX CONFIG_FX_FAULT_TOLERANT_BOOT_INDEX
#endif


/* Below FX_DISABLE_XXX macros can be used for code size optimization required for memory
   critical aplications */

/* Defined, error checking is disabled.  */

/*#define FX_DISABLE_ERROR_CHECKING   */
#ifdef CONFIG_FX_DISABLE_ERROR_CHECKING
#define FX_DISABLE_ERROR_CHECKING
#endif


/* Defined, cache is disabled.  */

/*#define FX_DISABLE_CACHE   */
#ifdef CONFIG_FX_DISABLE_CACHE
#define FX_DISABLE_CACHE
#endif

/* Defined, file close is disabled.  */

/*#define FX_DISABLE_FILE_CLOSE   */
#ifdef CONFIG_FX_DISABLE_FILE_CLOSE
#define FX_DISABLE_FILE_CLOSE
#endif

/* Defined, fast open is disabled.  */

/*#define FX_DISABLE_FAST_OPEN   */
#ifdef CONFIG_FX_DISABLE_FAST_OPEN
#define FX_DISABLE_FAST_OPEN
#endif

/* Defined, force memory operations are disabled.  */

/*#define FX_DISABLE_FORCE_MEMORY_OPERATION   */
#ifdef CONFIG_FX_DISABLE_FORCE_MEMORY_OPERATION
#define FX_DISABLE_FORCE_MEMORY_OPERATION
#endif

/* Defined, build options is disabled.  */

/*#define FX_DISABLE_BUILD_OPTIONS   */
#ifdef CONFIG_FX_DISABLE_BUILD_OPTIONS
#define FX_DISABLE_BUILD_OPTIONS
#endif

/* Defined, one line function is disabled.  */

/*#define FX_DISABLE_ONE_LINE_FUNCTION   */
#ifdef CONFIG_FX_DISABLE_ONE_LINE_FUNCTION
#define FX_DISABLE_ONE_LINE_FUNCTION
#endif

/* Defined, FAT entry refresh is disabled.  */

/*#define FX_DIABLE_FAT_ENTRY_REFRESH   */
#ifdef CONFIG_FX_DIABLE_FAT_ENTRY_REFRESH
#define FX_DIABLE_FAT_ENTRY_REFRESH
#endif

/* Defined, consecutive detect is disabled.  */

/*#define FX_DISABLE_CONSECUTIVE_DETECT   */
#ifdef CONFIG_FX_DISABLE_CONSECUTIVE_DETECT
#define FX_DISABLE_CONSECUTIVE_DETECT
#endif

#endif /* FX_USER_H */
