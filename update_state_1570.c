/* File: "update_state_1570.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1567",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1567[0]);
*/
SBool update_state_1570(const SBool *queue_1567,
                        const SWord32 ptr_1567)
{
  const SBool   s0 = queue_1567[0];
  return s0;
}
