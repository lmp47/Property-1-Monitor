/* File: "update_state_884.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 881",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_881[0]);
*/
SBool update_state_884(const SBool *queue_881,
                       const SWord32 ptr_881)
{
  const SBool   s0 = queue_881[0];
  return s0;
}