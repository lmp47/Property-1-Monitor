/* File: "update_state_4610.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 4607",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_4607[0]);
*/
SBool update_state_4610(const SBool *queue_4607,
                        const SWord32 ptr_4607)
{
  const SBool   s0 = queue_4607[0];
  return s0;
}
