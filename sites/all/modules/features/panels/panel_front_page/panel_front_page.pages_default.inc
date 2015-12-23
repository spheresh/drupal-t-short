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
      'region-add-quote' => NULL,
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
    $pane->pid = 'new-694094c6-ef40-414c-93ef-f56ea41972eb';
    $pane->panel = 'region-footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer';
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
    $pane->uuid = '694094c6-ef40-414c-93ef-f56ea41972eb';
    $display->content['new-694094c6-ef40-414c-93ef-f56ea41972eb'] = $pane;
    $display->panels['region-footer'][0] = 'new-694094c6-ef40-414c-93ef-f56ea41972eb';
    $pane = new stdClass();
    $pane->pid = 'new-5d813ac3-fcba-4c9d-ad84-2fcf822e8e72';
    $pane->panel = 'region-header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header';
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
    $pane->uuid = '5d813ac3-fcba-4c9d-ad84-2fcf822e8e72';
    $display->content['new-5d813ac3-fcba-4c9d-ad84-2fcf822e8e72'] = $pane;
    $display->panels['region-header'][0] = 'new-5d813ac3-fcba-4c9d-ad84-2fcf822e8e72';
    $pane = new stdClass();
    $pane->pid = 'new-3d98bc8b-8312-4e87-85d2-8eb167668bc1';
    $pane->panel = 'region-quote-slider';
    $pane->type = 'views_panes';
    $pane->subtype = 'quotes-quotes_slider_pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d98bc8b-8312-4e87-85d2-8eb167668bc1';
    $display->content['new-3d98bc8b-8312-4e87-85d2-8eb167668bc1'] = $pane;
    $display->panels['region-quote-slider'][0] = 'new-3d98bc8b-8312-4e87-85d2-8eb167668bc1';
    $pane = new stdClass();
    $pane->pid = 'new-c1b0a15b-46db-4656-b36e-9c2d39df3a0c';
    $pane->panel = 'region-wtf';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Wtf?',
      'title' => '',
      'body' => '<div class="wtf-wrapper"><h2>Что это?</h2><p>Мы любим Drupal. Если Вы любите Drupal так же как и мы, то этот сайт для Вас. Надеюсь, мы подняли Вам настроение. Кстати, <a href="#">зацените наши футболки</a>.</p></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c1b0a15b-46db-4656-b36e-9c2d39df3a0c';
    $display->content['new-c1b0a15b-46db-4656-b36e-9c2d39df3a0c'] = $pane;
    $display->panels['region-wtf'][0] = 'new-c1b0a15b-46db-4656-b36e-9c2d39df3a0c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
