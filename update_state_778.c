/* File: "update_state_778.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 775",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_775[0]);
*/
SBool update_state_778(const SBool *queue_775,
                       const SWord32 ptr_775)
{
  const SBool   s0 = queue_775[0];
  return s0;
}
