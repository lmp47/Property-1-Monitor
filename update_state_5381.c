/* File: "update_state_5381.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5378",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5378[0]);
*/
SBool update_state_5381(const SBool *queue_5378,
                        const SWord32 ptr_5378)
{
  const SBool   s0 = queue_5378[0];
  return s0;
}