/* File: "update_state_2957.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2954",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2954[0]);
*/
SBool update_state_2957(const SBool *queue_2954,
                        const SWord32 ptr_2954)
{
  const SBool   s0 = queue_2954[0];
  return s0;
}
