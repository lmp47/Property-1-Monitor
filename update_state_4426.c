/* File: "update_state_4426.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4423",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4423[0]);
*/
SBool update_state_4426(const SBool *queue_4423,
                        const SWord32 ptr_4423)
{
  const SBool   s0 = queue_4423[0];
  return s0;
}
