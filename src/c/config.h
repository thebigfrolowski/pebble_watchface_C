#pragma once
#include <pebble.h>

#define DEBUG 1

#if DEBUG
	#define LOG(...) APP_LOG(APP_LOG_LEVEL_DEBUG , __VA_ARGS__)
#else
	#define LOG(...) ((void)0)
#endif

#define PBL_COLOR 1

#define DEF_LAYERS_MAX  7
#define DEF_LAYERS_ORDER_BG     0
#define DEF_LAYERS_ORDER_BUSY   1
#define DEF_LAYERS_ORDER_TIME   2
#define DEF_LAYERS_ORDER_DATE   3
#define DEF_LAYERS_ORDER_EVENTS 4
#define DEF_LAYERS_ORDER_BT     5
#define DEF_LAYERS_ORDER_BAT    6

#define DEF_LAYER_TIME_COLOR GColorBlack
#define DEF_LAYER_TIME_HEIGHT 48
#define DEF_LAYER_DATE_COLOR GColorTiffanyBlue
#define DEF_LAYER_DATE_HEIGHT 15
#define DEF_LAYER_INDICATORS_HEIGHT 17
#define DEF_LAYER_BACKGROUND GColorClear