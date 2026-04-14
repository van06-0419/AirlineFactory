#pragma once

#ifdef AIRLINEDLL_EXPORTS
#define AIRLINE_API __declspec(dllexport)
#else
#define AIRLINE_API __declspec(dllimport)
#endif