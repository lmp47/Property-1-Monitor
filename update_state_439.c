/* File: "update_state_439.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 436",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_436[0]);
*/
SBool update_state_439(const SBool *queue_436,
                       const SWord32 ptr_436)
{
  const SBool   s0 = queue_436[0];
  return s0;
}
