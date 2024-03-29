<?php
/**
 * @file
 * content_type_add_quote_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_add_quote_form_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_add_quote_form_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Add qoute form'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
