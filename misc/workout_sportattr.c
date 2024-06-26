/*
 * Copyright 2024 wtcat
 */

#include "basework/assert.h"
#include "basework/misc/workout_dataimpl.h"
#include "basework/misc/workout_sportattr.h"
#include "basework/misc/workout_sporttype.h"

static const uint8_t sport_workout_mode_attr[] = {
    0x7f,
    0x4e,
    0x4e,
    0x4e,
    0x5e,
    0x4e,
    0x4e,
    0x4a,
    0x4e,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4e,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,
    0x4a,

};

static const uint32_t sport_view_layout_attr[] = {
    0x387fff,
    0x387fff,
    0x387fff,
    0x387fff,
    0x3f81ff,
    0x387f9f,
    0x387f9f,
    0x18001f,
    0x18019f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x387fff,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
    0x18001f,
};

static const uint16_t sport_remind_attr[] = {
    0x1ef,
    0x67,
    0x67,
    0x67,
    0x1f2,
    0x167,
    0x67,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x67,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0xe7,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
    0x62,
};

static const uint16_t sport_remdind_custom_attr[] = {
    0x13f,
    0x10f,
    0x10f,
    0x10f,
    0x1c4,
    0x10f,
    0x10f,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x10f,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x10f,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,
    0x104,

};

static const uint16_t sport_sum_attr[] = {
    0x3de7,
    0x1d67,
    0x1d67,
    0x1d67,
    0x1e73,
    0x1966,
    0x1966,
    0x1862,
    0x186a,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1d67,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,
    0x1862,

};

static const uint8_t sport_prefer_view_attr[] = {
    0x0f,
    0x0f,
    0x0f,
    0x0f,
    0x0f,
    0x07,
    0x07,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x0f,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x0f,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
    0x02,
};

uint32_t sport_get_workout_mode_attribute(int type) {
    rte_assert(type < K_SPORT_MAX);
    return (uint32_t)sport_workout_mode_attr[type];
}

uint32_t sport_get_view_layout_attribute(int type) {
    rte_assert(type < K_SPORT_MAX);
    return (uint32_t)sport_view_layout_attr[type];
}

uint32_t sport_get_remind_attribute(int type) {
    rte_assert(type < K_SPORT_MAX);
    return (uint32_t)sport_remind_attr[type];
}

uint32_t sport_get_remind_custom_attribute(int type) {
    rte_assert(type < K_SPORT_MAX);
    return (uint32_t)sport_remdind_custom_attr[type];
}

uint32_t sport_get_sum_attribute(int type) {
    rte_assert(type < K_SPORT_MAX);
    return (uint32_t)sport_sum_attr[type];
}

uint32_t sport_get_prefer_view_attribute(int type) {
    rte_assert(type < K_SPORT_MAX);
    return (uint32_t)sport_prefer_view_attr[type];
}

uint32_t sport_get_dataitem_attribute(int type, int nitem) {
    rte_assert(type < K_SPORT_MAX);
    rte_assert(nitem >= 2 && nitem <= 4);
    static const uint8_t attr_1[] = {
        K_SPORT_ATTR_DATA_DISTANCE_TOTAL | 
        K_SPORT_ATTR_DATA_HEARTRATE_REALTIME,
        K_SPORT_ATTR_DATA_DISTANCE_TOTAL | 
        K_SPORT_ATTR_DATA_HEARTRATE_REALTIME | 
        K_SPORT_ATTR_DATA_PACE_REALTIME,
        K_SPORT_ATTR_DATA_DISTANCE_TOTAL | 
        K_SPORT_ATTR_DATA_PACE_REALTIME | 
        K_SPORT_ATTR_DATA_STEPRATE_REALTIME | 
        K_SPORT_ATTR_DATA_PACE_AVG
    };
    static const uint8_t attr_2[] = {
        K_SPORT_ATTR_DATA_HEARTRATE_REALTIME | 
        K_SPORT_ATTR_DATA_CALORIE, 
        0, 
        0
    };
 
    if (type <= 6 || type == 106 || type == 128)
        return attr_1[nitem - 2];

    return attr_2[nitem - 2];
}