/* File: "update_state_3883.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 3880",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_3880[0]);
*/
SBool update_state_3883(const SBool *queue_3880,
                        const SWord32 ptr_3880)
{
  const SBool   s0 = queue_3880[0];
  return s0;
}
