<?php
/**
 * @file
 * Plugin definition.
 */
$plugin = array(
  'title' => t('I love Drupal page'),
  'category' => t('I love Drupal'),
  'icon' => 'i_love_drupal.png',
  'theme' => 'i_love_drupal',
  'css' => 'i_love_drupal.css',
  'regions' => array(
    'region-header' => t('Header'),
    'region-quote-slider' => t('Quote slider'),
    'region-wtf' => t('Wtf?'),
    'region-t-shorts' => t('T-shorts'),
    'region-team' => t('Team'),
    'region-contacts' => t('Contacts'),
    'region-footer' => t('Footer'),
  ),
);
