/* File: "update_state_2150.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2147",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2147[0]);
*/
SBool update_state_2150(const SBool *queue_2147,
                        const SWord32 ptr_2147)
{
  const SBool   s0 = queue_2147[0];
  return s0;
}