/* File: "update_state_4864.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4861",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4861[0]);
*/
SBool update_state_4864(const SBool *queue_4861,
                        const SWord32 ptr_4861)
{
  const SBool   s0 = queue_4861[0];
  return s0;
}