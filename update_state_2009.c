/* File: "update_state_2009.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2006",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2006[0]);
*/
SBool update_state_2009(const SBool *queue_2006,
                        const SWord32 ptr_2006)
{
  const SBool   s0 = queue_2006[0];
  return s0;
}
