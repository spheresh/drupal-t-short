<?php
/**
 * @file
 * panel_mini_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function panel_mini_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
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
  $display->uuid = '81e12937-e390-4092-ae66-1ff9c82f62df';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2cccf7ce-66dc-4ad6-a4f8-c8131c653016';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'system-powered-by';
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
    $pane->uuid = '2cccf7ce-66dc-4ad6-a4f8-c8131c653016';
    $display->content['new-2cccf7ce-66dc-4ad6-a4f8-c8131c653016'] = $pane;
    $display->panels['left'][0] = 'new-2cccf7ce-66dc-4ad6-a4f8-c8131c653016';
    $pane = new stdClass();
    $pane->pid = 'new-6821bf31-3ee7-4b9a-ae5a-ec504b414eb6';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Copyright',
      'title' => '',
      'body' => '<div class="copyright">2015 © Павел Лопарев<>',
      'format' => 'full_html',
      'substitute' => TRUE,
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
    $pane->uuid = '6821bf31-3ee7-4b9a-ae5a-ec504b414eb6';
    $display->content['new-6821bf31-3ee7-4b9a-ae5a-ec504b414eb6'] = $pane;
    $display->panels['right'][0] = 'new-6821bf31-3ee7-4b9a-ae5a-ec504b414eb6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2cccf7ce-66dc-4ad6-a4f8-c8131c653016';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
