/* File: "update_state_4313.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4310",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4310[0]);
*/
SBool update_state_4313(const SBool *queue_4310,
                        const SWord32 ptr_4310)
{
  const SBool   s0 = queue_4310[0];
  return s0;
}
