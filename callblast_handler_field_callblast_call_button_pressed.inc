<?php
// $Id$
/**
 * Field handler to present callblast title 
 * related to the displayed voipcall node.
 */
class callblast_handler_field_callblast_call_button_pressed extends views_handler_field {
  function render($values) {
    $voipcall_nid = $values->callblast_call_voipcall_nid;
    $node = node_load($voipcall_nid);
    // get button pressed
      //todo this doesn't work. functions are probably out of scope.
//      $voipscript = unserialize($node->field_voipcall_script[0]['value']);
//      $voipscript = (VoipScript)$voipscript;
//      $pressed = $voipscript->getVar('input_digits');

dsm($node);
    $vars = unserialize($node->field_voipcall_script[0]['value']);
    $vars = (array)$vars;
//$vars = (array)$vars['VoipScriptvariables'];;
dsm($vars);
// */

//dsm($vars['VoipScriptvariables']);
//dsm($vars['VoipScriptvariables']['input_digits']);

//dsm($vars['VoipScriptvariables']);
//print_r($vars);
/*
dsm($vars);
foreach($vars as $key => $var) {
$key = (string)$key;
  dsm($key);
if($key == 'VoipScriptvariables') {
dsm('TESTIN');
  dsm($key);
  dsm($var);
}
}
// */
    $pressed = check_plain($pressed); // this should be an integer

    return $pressed;
  }
}
