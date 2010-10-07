<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function callblast_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_advanced
  $groups['callblast-group_advanced'] = array(
    'group_type' => 'standard',
    'type_name' => 'callblast',
    'group_name' => 'group_advanced',
    'label' => 'Advanced Call Blast Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_callblast_script',
    ),
  );

  // Exported group: group_options
  $groups['callblast-group_options'] = array(
    'group_type' => 'standard',
    'type_name' => 'callblast',
    'group_name' => 'group_options',
    'label' => 'Additional Voice Message Options',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '
',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_callblast_recording_ops',
      '1' => 'field_callblast_upload_ops',
      '2' => 'field_callblast_recording_preend',
      '3' => 'field_callblast_recording1',
      '4' => 'field_callblast_upload1',
      '5' => 'field_callblast_recording2',
      '6' => 'field_callblast_upload2',
      '7' => 'field_callblast_recording3',
      '8' => 'field_callblast_upload3',
      '9' => 'field_callblast_recording4',
      '10' => 'field_callblast_upload4',
      '11' => 'field_callblast_recording5',
      '12' => 'field_callblast_upload5',
      '13' => 'field_callblast_recording6',
      '14' => 'field_callblast_upload6',
      '15' => 'field_callblast_recording7',
      '16' => 'field_callblast_upload7',
      '17' => 'field_callblast_recording8',
      '18' => 'field_callblast_upload8',
      '19' => 'field_callblast_recording9',
      '20' => 'field_callblast_upload9',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Voice Message Options');
  t('Advanced Call Blast Settings');

  return $groups;
}
