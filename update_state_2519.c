/* File: "update_state_2519.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2516",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2516[0]);
*/
SBool update_state_2519(const SBool *queue_2516,
                        const SWord32 ptr_2516)
{
  const SBool   s0 = queue_2516[0];
  return s0;
}
