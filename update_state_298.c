/* File: "update_state_298.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 295",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_295[0]);
*/
SBool update_state_298(const SBool *queue_295,
                       const SWord32 ptr_295)
{
  const SBool   s0 = queue_295[0];
  return s0;
}