/* File: "trigger_takeoff_altitude_violation_arg_20.c". Automatically generated by SBV. Do not edit! */

#include "internal.h"

/* User given declarations: */
/*test 003*/
/*DotBegin
digraph G {
node [shape=box]

0 [label="file: 
?????",color=red, style=filled]
1 [label="ext_altitude_ft",color=cyan1, style=filled]
0 -> 1


}

DotEnd*/
/*@
 assigns \nothing;
 ensures \result == (ext_altitude_ft);
*/
SDouble trigger_takeoff_altitude_violation_arg_20(const SDouble ext_altitude_ft)
{
  const SDouble s0 = ext_altitude_ft;
  return s0;
}