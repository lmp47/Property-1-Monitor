/* File: "update_state_166.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 163",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_163[0]);
*/
SBool update_state_166(const SBool *queue_163,
                       const SWord32 ptr_163)
{
  const SBool   s0 = queue_163[0];
  return s0;
}
