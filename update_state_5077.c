/* File: "update_state_5077.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 5074",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_5074[0]);
*/
SBool update_state_5077(const SBool *queue_5074,
                        const SWord32 ptr_5074)
{
  const SBool   s0 = queue_5074[0];
  return s0;
}
