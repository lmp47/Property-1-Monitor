/* File: "update_state_5288.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5285",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5285[0]);
*/
SBool update_state_5288(const SBool *queue_5285,
                        const SWord32 ptr_5285)
{
  const SBool   s0 = queue_5285[0];
  return s0;
}
