/* File: "update_state_904.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 901",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_901[0]);
*/
SBool update_state_904(const SBool *queue_901,
                       const SWord32 ptr_901)
{
  const SBool   s0 = queue_901[0];
  return s0;
}
