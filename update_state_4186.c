/* File: "update_state_4186.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4183",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4183[0]);
*/
SBool update_state_4186(const SBool *queue_4183,
                        const SWord32 ptr_4183)
{
  const SBool   s0 = queue_4183[0];
  return s0;
}
