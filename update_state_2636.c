/* File: "update_state_2636.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2633",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2633[0]);
*/
SBool update_state_2636(const SBool *queue_2633,
                        const SWord32 ptr_2633)
{
  const SBool   s0 = queue_2633[0];
  return s0;
}
