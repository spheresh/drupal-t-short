<?php
/**
 * @file
 * panel_mini_footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panel_mini_footer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
