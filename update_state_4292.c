/* File: "update_state_4292.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4289",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4289[0]);
*/
SBool update_state_4292(const SBool *queue_4289,
                        const SWord32 ptr_4289)
{
  const SBool   s0 = queue_4289[0];
  return s0;
}