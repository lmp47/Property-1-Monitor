/* File: "update_state_1335.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 001*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="stream: 1332",color=crimson, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (queue_1332[0]);
*/
SInt64 update_state_1335(const SInt64 *queue_1332,
                         const SWord32 ptr_1332)
{
  const SInt64  s0 = queue_1332[0];
  return s0;
}
