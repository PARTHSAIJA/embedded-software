/*! @file
 *
 *  @brief Declares new types.
 *
 *  This contains types that are especially useful for the Tower to PC Protocol.
 *
 *  @author PMcL
 *  @date 2015-07-23
 */

#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>
#include <stddef.h>

// Unions to efficiently access hi and lo parts of integers and words
typedef union
{
  int16_t l;
  struct
  {
    int8_t Lo;
    int8_t Hi;
  } s;
} int16union_t;

typedef union
{
  uint16_t l;
  struct
  {
    uint8_t Lo;
    uint8_t Hi;
  } s;
} uint16union_t;

// Union to efficiently access hi and lo parts of a long integer
typedef union
{
  uint32_t l;
  struct
  {
    uint16_t Lo;
    uint16_t Hi;
  } s;
} uint32union_t;

// Union to efficiently access bytes of a long integer
typedef union
{
  uint32_t l;
  struct
  {
    uint8_t d;
    uint8_t c;
    uint8_t b;
		uint8_t a;
  } s;
} uint32_8union_t;

// Union to efficiently access individual bytes of a float
typedef union
{
  float d;
  struct
  {
    uint16union_t dLo;
    uint16union_t dHi;
  } dParts;
} TFloat;

/*! Boolean definition that includes type and value */
typedef enum
{
  bFALSE = 0,	/*!< Boolean false - always 0*/
  bTRUE = 1	/*!< Boolean true - always 1 */
} BOOL;

#endif
