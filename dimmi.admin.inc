<?php
// $Id$

/**
 * The settings for for the Dimmi module.
 */
function dimmi_settings() {
  include_once(drupal_get_path('module', 'dimmi') .'/help/dimmi_admin_help.inc');

  $form = array();
  $form['help'] = array(
    '#type' => 'fieldset',
    '#title' => 'Help',
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['help']['dimmi_help'] = array(
    '#type'  => 'markup',
    '#value' => dimmi_settings_help(),
  );
  $form['dimmi_blocks'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of blocks'),
    '#default_value' => variable_get('dimmi_blocks', DIMMI_DEFAULT_BLOCKS),
    '#size' => 2,
    '#maxlength' => 2,
  );
  $form['#validate'][] = '_dimmi_settings_validate';

  return system_settings_form($form);
}

/**
 * Validation handler for the admin settings form.
 */
function _dimmi_settings_validate($form, &$form_state) {
  $blocks = $form_state['values']['dimmi_blocks'];
  if ($blocks < 0) {
    form_set_error('dimmi_blocks', t("The number of blocks can not be a negative number"));
  }
}
