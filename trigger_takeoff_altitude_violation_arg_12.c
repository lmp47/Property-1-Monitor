/* File: "trigger_takeoff_altitude_violation_arg_12.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5411",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5411[ptr_5411]);
*/
SDouble trigger_takeoff_altitude_violation_arg_12(const SDouble *queue_5411,
                                                  const SWord32 ptr_5411)
{
  const SDouble s0 = queue_5411[0];
  const SDouble s1 = queue_5411[1];
  const SDouble s2 = queue_5411[2];
  const SDouble s3 = queue_5411[3];
  const SWord32 s4 = ptr_5411;
  const SDouble table0[] = {
      s0, s1, s2, s3
  };
  const SWord32 s6 = (0x00000004UL == 0) ? s4 : (s4 % 0x00000004UL);
  const SDouble s7 = table0[s6];

  return s7;
}
