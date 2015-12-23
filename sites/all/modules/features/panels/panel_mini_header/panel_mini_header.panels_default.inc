<?php
/**
 * @file
 * panel_mini_header.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function panel_mini_header_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'header';
  $mini->category = '';
  $mini->admin_title = 'Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'style' => 'naked',
    'left' => array(
      'style' => 'naked',
    ),
    'right' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f7d6256b-2be2-4a95-85cb-47b96a2d810e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c508cdd2-d180-43c8-8e7f-32917e9f5a1b';
    $pane->panel = 'left';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c508cdd2-d180-43c8-8e7f-32917e9f5a1b';
    $display->content['new-c508cdd2-d180-43c8-8e7f-32917e9f5a1b'] = $pane;
    $display->panels['left'][0] = 'new-c508cdd2-d180-43c8-8e7f-32917e9f5a1b';
    $pane = new stdClass();
    $pane->pid = 'new-973051a9-bfa7-4375-923b-5735cd39e05f';
    $pane->panel = 'left';
    $pane->type = 'page_slogan';
    $pane->subtype = 'page_slogan';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '973051a9-bfa7-4375-923b-5735cd39e05f';
    $display->content['new-973051a9-bfa7-4375-923b-5735cd39e05f'] = $pane;
    $display->panels['left'][1] = 'new-973051a9-bfa7-4375-923b-5735cd39e05f';
    $pane = new stdClass();
    $pane->pid = 'new-b819400d-acb4-4184-9588-b2ace8422b10';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-i-love-drupal';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b819400d-acb4-4184-9588-b2ace8422b10';
    $display->content['new-b819400d-acb4-4184-9588-b2ace8422b10'] = $pane;
    $display->panels['right'][0] = 'new-b819400d-acb4-4184-9588-b2ace8422b10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c508cdd2-d180-43c8-8e7f-32917e9f5a1b';
  $mini->display = $display;
  $export['header'] = $mini;

  return $export;
}
