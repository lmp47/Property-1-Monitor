/* File: "update_state_4568.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4565",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4565[0]);
*/
SBool update_state_4568(const SBool *queue_4565,
                        const SWord32 ptr_4565)
{
  const SBool   s0 = queue_4565[0];
  return s0;
}