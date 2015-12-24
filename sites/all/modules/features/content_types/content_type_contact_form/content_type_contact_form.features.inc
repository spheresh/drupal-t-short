<?php
/**
 * @file
 * content_type_contact_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_contact_form_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_contact_form_node_info() {
  $items = array(
    'contact_form' => array(
      'name' => t('Contact form'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
