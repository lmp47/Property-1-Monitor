/* File: "update_state_874.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 871",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_871[0]);
*/
SBool update_state_874(const SBool *queue_871,
                       const SWord32 ptr_871)
{
  const SBool   s0 = queue_871[0];
  return s0;
}
