/* File: "update_state_886.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 883",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_883[0]);
*/
SBool update_state_886(const SBool *queue_883,
                       const SWord32 ptr_883)
{
  const SBool   s0 = queue_883[0];
  return s0;
}
