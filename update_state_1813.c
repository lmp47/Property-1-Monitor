/* File: "update_state_1813.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1810",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1810[0]);
*/
SBool update_state_1813(const SBool *queue_1810,
                        const SWord32 ptr_1810)
{
  const SBool   s0 = queue_1810[0];
  return s0;
}
