<?php
/**
 * @file
 * config_panels_everywhere.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function config_panels_everywhere_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
