/* File: "update_state_637.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 634",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_634[0]);
*/
SBool update_state_637(const SBool *queue_634,
                       const SWord32 ptr_634)
{
  const SBool   s0 = queue_634[0];
  return s0;
}
