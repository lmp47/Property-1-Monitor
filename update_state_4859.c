/* File: "update_state_4859.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4856",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4856[0]);
*/
SBool update_state_4859(const SBool *queue_4856,
                        const SWord32 ptr_4856)
{
  const SBool   s0 = queue_4856[0];
  return s0;
}
