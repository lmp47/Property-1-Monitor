/* File: "update_state_433.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 430",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_430[0]);
*/
SBool update_state_433(const SBool *queue_430,
                       const SWord32 ptr_430)
{
  const SBool   s0 = queue_430[0];
  return s0;
}