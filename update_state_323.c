/* File: "update_state_323.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 320",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_320[0]);
*/
SBool update_state_323(const SBool *queue_320,
                       const SWord32 ptr_320)
{
  const SBool   s0 = queue_320[0];
  return s0;
}
