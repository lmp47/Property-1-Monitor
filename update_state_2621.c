/* File: "update_state_2621.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2618",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2618[0]);
*/
SBool update_state_2621(const SBool *queue_2618,
                        const SWord32 ptr_2618)
{
  const SBool   s0 = queue_2618[0];
  return s0;
}
