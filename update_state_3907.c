/* File: "update_state_3907.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3904",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3904[0]);
*/
SBool update_state_3907(const SBool *queue_3904,
                        const SWord32 ptr_3904)
{
  const SBool   s0 = queue_3904[0];
  return s0;
}
