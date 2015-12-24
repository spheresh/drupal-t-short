<?php
/**
 * @file
 * content_type_team_member.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_team_member_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_team_member_node_info() {
  $items = array(
    'team_member' => array(
      'name' => t('Team member'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
