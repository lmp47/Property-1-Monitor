/* File: "update_state_4903.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4900",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4900[0]);
*/
SBool update_state_4903(const SBool *queue_4900,
                        const SWord32 ptr_4900)
{
  const SBool   s0 = queue_4900[0];
  return s0;
}
