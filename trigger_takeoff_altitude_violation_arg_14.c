/* File: "trigger_takeoff_altitude_violation_arg_14.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5413",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5413[ptr_5413]);
*/
SDouble trigger_takeoff_altitude_violation_arg_14(const SDouble *queue_5413,
                                                  const SWord32 ptr_5413)
{
  const SDouble s0 = queue_5413[0];
  const SDouble s1 = queue_5413[1];
  const SDouble s2 = queue_5413[2];
  const SWord32 s3 = ptr_5413;
  const SDouble table0[] = {
      s0, s1, s2
  };
  const SWord32 s5 = (0x00000003UL == 0) ? s3 : (s3 % 0x00000003UL);
  const SDouble s6 = table0[s5];

  return s6;
}