/*
 * Copyright (c) 2007-2009 The Khronos Group Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and /or associated documentation files (the "Materials "), to
 * deal in the Materials without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Materials, and to permit persons to whom the Materials are
 * furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Materials.
 *
 * THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE MATERIALS OR THE USE OR OTHER DEALINGS IN THE
 * MATERIALS.
 *
 * OpenSLES_IID.c - OpenSL ES version 1.0
 *
 */

/****************************************************************************/
/* NOTE: This file is a standard OpenSL ES file and should not be           */
/* modified in any way.                                                     */
/****************************************************************************/


#include <SLES/OpenSLES.h>         /* SL Header */
#include <OMXAL/OpenMAXAL.h>
#ifdef ANDROID
#include <SLES/OpenSLES_Android.h>  /* Android-specific SL Header */
#include <OMXAL/OpenMAXAL_Android.h>/* Android-specific MAX AL Header */
#endif
#include "MPH.h"

#ifdef __cplusplus
LI_API extern const struct SLInterfaceID_ SL_IID_array[MPH_MAX];
#endif

/*****************************************************************************/
/* Interface IDs                                                             */
/*****************************************************************************/

// Note that the lack of an ifdef on each section is intentional. The entries in this table map
// to an interface GUID from an MPH (a short-hand representation of the full interface GUID).
// The presence of an entry does not represent a commitment to support that particular interface.

const struct SLInterfaceID_ SL_IID_array[MPH_MAX] = {

// OpenSL ES 1.0.1 interfaces

    // SL_IID_3DCOMMIT
    { 0x3564ad80, 0xdd0f, 0x11db, 0x9e19, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_3DDOPPLER
    { 0xb45c9a80, 0xddd2, 0x11db, 0xb028, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_3DGROUPING
    { 0xebe844e0, 0xddd2, 0x11db, 0xb510, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_3DLOCATION
    { 0x2b878020, 0xddd3, 0x11db, 0x8a01, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_3DMACROSCOPIC
    { 0x5089aec0, 0xddd3, 0x11db, 0x9ad3, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_3DSOURCE
    { 0x70bc7b00, 0xddd3, 0x11db, 0xa873, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_AUDIODECODERCAPABILITIES
    { 0x3fe5a3a0, 0xfcc6, 0x11db, 0x94ac, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_AUDIOENCODER
    { 0xd7d5af7a, 0x351c, 0x41a6, 0x94ec, { 0x1a, 0xc9, 0x5c, 0x71, 0x82, 0x2c } },
    // SL_IID_AUDIOENCODERCAPABILITIES
    { 0x0f52a340, 0xfcd1, 0x11db, 0xa993, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_AUDIOIODEVICECAPABILITIES
    { 0xb2564dc0, 0xddd3, 0x11db, 0xbd62, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_BASSBOOST
    { 0x0634f220, 0xddd4, 0x11db, 0xa0fc, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_BUFFERQUEUE
    { 0x2bc99cc0, 0xddd4, 0x11db, 0x8d99, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_DEVICEVOLUME
    { 0xe1634760, 0xf3e2, 0x11db, 0x9ca9, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_DYNAMICINTERFACEMANAGEMENT
    { 0x63936540, 0xf775, 0x11db, 0x9cc4, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_DYNAMICSOURCE
    { 0xc55cc100, 0x038b, 0x11dc, 0xbb45, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_EFFECTSEND
    { 0x56e7d200, 0xddd4, 0x11db, 0xaefb, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_ENGINE
    { 0x8d97c260, 0xddd4, 0x11db, 0x958f, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_ENGINECAPABILITIES
    { 0x8320d0a0, 0xddd5, 0x11db, 0xa1b1, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_ENVIRONMENTALREVERB
    { 0xc2e5d5f0, 0x94bd, 0x4763, 0x9cac, { 0x4e, 0x23, 0x4d, 0x6, 0x83, 0x9e } },
    // SL_IID_EQUALIZER
    { 0x0bed4300, 0xddd6, 0x11db, 0x8f34, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_LED
    { 0x2cc1cd80, 0xddd6, 0x11db, 0x807e, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_METADATAEXTRACTION
    { 0xaa5b1f80, 0xddd6, 0x11db, 0xac8e, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_METADATATRAVERSAL
    { 0xc43662c0, 0xddd6, 0x11db, 0xa7ab, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_MIDIMESSAGE
    { 0xddf4a820, 0xddd6, 0x11db, 0xb174, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_MIDIMUTESOLO
    { 0x039eaf80, 0xddd7, 0x11db, 0x9a02, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_MIDITEMPO
    { 0x1f347400, 0xddd7, 0x11db, 0xa7ce, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_MIDITIME
    { 0x3da51de0, 0xddd7, 0x11db, 0xaf70, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_MUTESOLO
    { 0x5a28ebe0, 0xddd7, 0x11db, 0x8220, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_NULL
    { 0xec7178ec, 0xe5e1, 0x4432, 0xa3f4, { 0x46, 0x57, 0xe6, 0x79, 0x52, 0x10 } },
    // SL_IID_OBJECT
    { 0x79216360, 0xddd7, 0x11db, 0xac16, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_OUTPUTMIX
    { 0x97750f60, 0xddd7, 0x11db, 0x92b1, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_PITCH
    { 0xc7e8ee00, 0xddd7, 0x11db, 0xa42c, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_PLAY
    { 0xef0bd9c0, 0xddd7, 0x11db, 0xbf49, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_PLAYBACKRATE
    { 0x2e3b2a40, 0xddda, 0x11db, 0xa349, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_PREFETCHSTATUS
    { 0x2a41ee80, 0xddd8, 0x11db, 0xa41f, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_PRESETREVERB
    { 0x47382d60, 0xddd8, 0x11db, 0xbf3a, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_RATEPITCH
    { 0x61b62e60, 0xddda, 0x11db, 0x9eb8, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_RECORD
    { 0xc5657aa0, 0xdddb, 0x11db, 0x82f7, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_SEEK
    { 0xd43135a0, 0xdddc, 0x11db, 0xb458, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_THREADSYNC
    { 0xf6ac6b40, 0xdddc, 0x11db, 0xa62e, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_VIBRA
    { 0x169a8d60, 0xdddd, 0x11db, 0x923d, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_VIRTUALIZER
    { 0x37cc2c00, 0xdddd, 0x11db, 0x8577, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_VISUALIZATION
    { 0xe46b26a0, 0xdddd, 0x11db, 0x8afd, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_VOLUME
    { 0x09e8ede0, 0xddde, 0x11db, 0xb4f6, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },

// Wilhelm desktop extended interfaces

    // SL_IID_OUTPUTMIXEXT
    { 0xfe5cce00, 0x57bb, 0x11df, 0x951c, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },

// Android API level 9 extended interfaces
// GUID and MPH shared by SL and XA, but currently documented for SL only

    // SL_IID_ANDROIDEFFECT
    { 0xae12da60, 0x99ac, 0x11df, 0xb456, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_ANDROIDEFFECTCAPABILITIES
    { 0x6a4f6d60, 0xb5e6, 0x11df, 0xbb3b, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_ANDROIDEFFECTSEND
    { 0x7be462c0, 0xbc43, 0x11df, 0x8670, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_ANDROIDCONFIGURATION
    { 0x89f6a7e0, 0xbeac, 0x11df, 0x8b5c, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // SL_IID_ANDROIDSIMPLEBUFERQUEUE
    { 0x198e4940, 0xc5d7, 0x11df, 0xa2a6, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },

// Android API level 12 extended interfaces
// GUID and MPH shared by SL and XA, but currently documented for XA only

    // SL_IID_ANDROIDBUFFERQUEUE
    { 0x7fc1a460, 0xeec1, 0x11df, 0xa306, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },

// OpenMAX AL 1.0.1 interfaces

    // XA_IID_AUDIODECODERCAPABILITIES
    { 0xdeac0cc0, 0x3995, 0x11dc, 0x8872, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_AUDIOENCODER
    { 0xebbab900, 0x3997, 0x11dc, 0x891f, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_AUDIOENCODERCAPABILITIES
    { 0x83fbc600, 0x3998, 0x11dc, 0x8f6d, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_AUDIOIODEVICECAPABILITIES
    { 0x2b276d00, 0xf775, 0x11db, 0xa963, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_CAMERA
    { 0xc7b84d20, 0xdf00, 0x11db, 0xba87, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_CAMERACAPABILITIES
    { 0x01cab1c0, 0xe86a, 0x11db, 0xa5b9, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_CONFIGEXTENSION
    { 0x6dc22ea0, 0xdf03, 0x11db, 0xbed7, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_DEVICEVOLUME
    { 0x4bb44020, 0xf775, 0x11db, 0xad03, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_DYNAMICINTERFACEMANAGEMENT
    { 0x6e2340c0, 0xf775, 0x11db, 0x85da, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_DYNAMICSOURCE
    { 0xc88d5480, 0x3a12, 0x11dc, 0x80a2, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_ENGINE
    { 0x45c58f40, 0xdf04, 0x11db, 0x9e76, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_EQUALIZER
    { 0x7ad86d40, 0xf775, 0x11db, 0xbc77, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_IMAGECONTROLS
    { 0xf46de3e0, 0xdf03, 0x11db, 0x92f1, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_IMAGEDECODERCAPABILITIES
    { 0xc333e7a0, 0xe616, 0x11dc, 0xa93e, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_IMAGEEFFECTS
    { 0xb865bca0, 0xdf04, 0x11db, 0xbab9, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_IMAGEENCODER
    { 0xcd49f140, 0xdf04, 0x11db, 0x8888, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_IMAGEENCODERCAPABILITIES
    { 0xc19f0640, 0xe86f, 0x11db, 0xb2d2, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_LED
    { 0xa534d920, 0xf775, 0x11db, 0x8b70, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_METADATAEXTRACTION
    { 0x5df4fda0, 0xf776, 0x11db, 0xabc5, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_METADATAINSERTION
    { 0x49a14d60, 0xdf05, 0x11db, 0x9191, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_METADATATRAVERSAL
    { 0x73ffb0e0, 0xf776, 0x11db, 0xa00e, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_OBJECT
    { 0x82f5a5a0, 0xf776, 0x11db, 0x9700, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_OUTPUTMIX
    { 0xb25b6fa0, 0xf776, 0x11db, 0xb86b, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_NULL
    // shared with OpenSL ES
    // XA_IID_PLAY
    { 0xb9c293e0, 0xf776, 0x11db, 0x80df, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_PLAYBACKRATE
    { 0xc36f1440, 0xf776, 0x11db, 0xac48, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_PREFETCHSTATUS
    { 0xcceac0a0, 0xf776, 0x11db, 0xbb9c, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_RADIO
    { 0xb316ad80, 0xdf05, 0x11db, 0xb5b6, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_RDS
    { 0xb80f42c0, 0xdf05, 0x11db, 0x92a5, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_RECORD
    { 0xd7948cc0, 0xf776, 0x11db, 0x8a3b, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_SEEK
    { 0xee6a3120, 0xf776, 0x11db, 0xb518, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_SNAPSHOT
    { 0xdb1b6dc0, 0xdf05, 0x11db, 0x8c01, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_STREAMINFORMATION
    { 0x3a628fe0, 0x1238, 0x11de, 0xad9f, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_THREADSYNC
    { 0xf3599ea0, 0xf776, 0x11db, 0xb3ea, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_VIBRA
    { 0xfe374c00, 0xf776, 0x11db, 0xa8f0, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_VIDEODECODERCAPABILITIES
    { 0xd18cb200, 0xe616, 0x11dc, 0xab01, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_VIDEOENCODER
    { 0x9444db60, 0xdf06, 0x11db, 0xb311, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_VIDEOENCODERCAPABILITIES
    { 0x5aef2760, 0xe872, 0x11db, 0x849f, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_VIDEOPOSTPROCESSING
    { 0x898b6820, 0x7e6e, 0x11dd, 0x8caf, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
    // XA_IID_VOLUME
    { 0x088ba520, 0xf777, 0x11db, 0xa5e3, { 0x00, 0x02, 0xa5, 0xd5, 0xc5, 0x1b } },
};
