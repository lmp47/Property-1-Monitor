/* File: "update_state_971.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 968",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_968[0]);
*/
SBool update_state_971(const SBool *queue_968,
                       const SWord32 ptr_968)
{
  const SBool   s0 = queue_968[0];
  return s0;
}
