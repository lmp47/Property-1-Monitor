/* File: "update_state_2853.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 2850",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_2850[0]);
*/
SInt64 update_state_2853(const SInt64 *queue_2850,
                         const SWord32 ptr_2850)
{
  const SInt64  s0 = queue_2850[0];
  return s0;
}
