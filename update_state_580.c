/* File: "update_state_580.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 577",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_577[0]);
*/
SBool update_state_580(const SBool *queue_577,
                       const SWord32 ptr_577)
{
  const SBool   s0 = queue_577[0];
  return s0;
}
