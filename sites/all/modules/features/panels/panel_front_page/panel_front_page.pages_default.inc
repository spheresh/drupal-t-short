<?php
/**
 * @file
 * panel_front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function panel_front_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'i-love-drupal';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'i_love_drupal';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'region-header' => NULL,
      'region-content' => NULL,
      'region-footer' => NULL,
      'region-quote-slider' => NULL,
      'region-wtf' => NULL,
      'region-t-shorts' => NULL,
      'region-team' => NULL,
      'region-contacts' => NULL,
    ),
    'region-header' => array(
      'style' => 'naked',
    ),
    'region-quote-slider' => array(
      'style' => 'naked',
    ),
    'region-wtf' => array(
      'style' => 'naked',
    ),
    'region-t-shorts' => array(
      'style' => 'naked',
    ),
    'region-team' => array(
      'style' => 'naked',
    ),
    'region-contacts' => array(
      'style' => 'naked',
    ),
    'region-footer' => array(
      'style' => 'naked',
    ),
    'style' => 'naked',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1cacbee8-4271-4fc8-a19b-23b67449f96e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fdf14b47-12d9-46e3-8a88-da6b0406a6ef';
    $pane->panel = 'region-header';
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
    $pane->uuid = 'fdf14b47-12d9-46e3-8a88-da6b0406a6ef';
    $display->content['new-fdf14b47-12d9-46e3-8a88-da6b0406a6ef'] = $pane;
    $display->panels['region-header'][0] = 'new-fdf14b47-12d9-46e3-8a88-da6b0406a6ef';
    $pane = new stdClass();
    $pane->pid = 'new-39e3ae3e-605e-45e8-bdf6-736d8d8a7bc4';
    $pane->panel = 'region-header';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'linked' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '39e3ae3e-605e-45e8-bdf6-736d8d8a7bc4';
    $display->content['new-39e3ae3e-605e-45e8-bdf6-736d8d8a7bc4'] = $pane;
    $display->panels['region-header'][1] = 'new-39e3ae3e-605e-45e8-bdf6-736d8d8a7bc4';
    $pane = new stdClass();
    $pane->pid = 'new-98f92d4c-7604-4da7-a4cb-8c6376adcf16';
    $pane->panel = 'region-header';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '98f92d4c-7604-4da7-a4cb-8c6376adcf16';
    $display->content['new-98f92d4c-7604-4da7-a4cb-8c6376adcf16'] = $pane;
    $display->panels['region-header'][2] = 'new-98f92d4c-7604-4da7-a4cb-8c6376adcf16';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
