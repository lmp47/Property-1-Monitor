/* File: "update_state_2524.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2521",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2521[0]);
*/
SBool update_state_2524(const SBool *queue_2521,
                        const SWord32 ptr_2521)
{
  const SBool   s0 = queue_2521[0];
  return s0;
}