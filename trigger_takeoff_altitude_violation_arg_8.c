/* File: "trigger_takeoff_altitude_violation_arg_8.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5407",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5407[ptr_5407]);
*/
SDouble trigger_takeoff_altitude_violation_arg_8(const SDouble *queue_5407,
                                                 const SWord32 ptr_5407)
{
  const SDouble s0 = queue_5407[0];
  const SDouble s1 = queue_5407[1];
  const SDouble s2 = queue_5407[2];
  const SDouble s3 = queue_5407[3];
  const SDouble s4 = queue_5407[4];
  const SDouble s5 = queue_5407[5];
  const SWord32 s6 = ptr_5407;
  const SDouble table0[] = {
      s0, s1, s2, s3, s4, s5
  };
  const SWord32 s8 = (0x00000006UL == 0) ? s6 : (s6 % 0x00000006UL);
  const SDouble s9 = table0[s8];

  return s9;
}
