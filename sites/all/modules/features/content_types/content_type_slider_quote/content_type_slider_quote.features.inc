<?php
/**
 * @file
 * content_type_slider_quote.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_slider_quote_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_slider_quote_node_info() {
  $items = array(
    'quote' => array(
      'name' => t('Quote'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Quote'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
