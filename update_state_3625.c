/* File: "update_state_3625.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3622",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3622[0]);
*/
SBool update_state_3625(const SBool *queue_3622,
                        const SWord32 ptr_3622)
{
  const SBool   s0 = queue_3622[0];
  return s0;
}
