/* File: "update_state_0.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="ext_clk_nanosec",color=cyan1, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (ext_clk_nanosec);
*/
SInt64 update_state_0(const SInt64 ext_clk_nanosec)
{
  const SInt64 s0 = ext_clk_nanosec;
  return s0;
}
