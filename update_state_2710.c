/* File: "update_state_2710.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2707",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2707[0]);
*/
SBool update_state_2710(const SBool *queue_2707,
                        const SWord32 ptr_2707)
{
  const SBool   s0 = queue_2707[0];
  return s0;
}
