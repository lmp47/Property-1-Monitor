/* File: "trigger_takeoff_altitude_violation_arg_2.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5401",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5401[ptr_5401]);
*/
SDouble trigger_takeoff_altitude_violation_arg_2(const SDouble *queue_5401,
                                                 const SWord32 ptr_5401)
{
  const SDouble s0 = queue_5401[0];
  const SDouble s1 = queue_5401[1];
  const SDouble s2 = queue_5401[2];
  const SDouble s3 = queue_5401[3];
  const SDouble s4 = queue_5401[4];
  const SDouble s5 = queue_5401[5];
  const SDouble s6 = queue_5401[6];
  const SDouble s7 = queue_5401[7];
  const SDouble s8 = queue_5401[8];
  const SWord32 s9 = ptr_5401;
  const SDouble table0[] = {
      s0, s1, s2, s3, s4, s5, s6, s7, s8
  };
  const SWord32 s11 = (0x00000009UL == 0) ? s9 : (s9 % 0x00000009UL);
  const SDouble s12 = table0[s11];

  return s12;
}
