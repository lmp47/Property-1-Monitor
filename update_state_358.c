/* File: "update_state_358.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 355",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_355[0]);
*/
SBool update_state_358(const SBool *queue_355,
                       const SWord32 ptr_355)
{
  const SBool   s0 = queue_355[0];
  return s0;
}