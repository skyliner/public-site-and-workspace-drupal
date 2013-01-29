<?php
/**
 * @file
 * motion_bank_org_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function motion_bank_org_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'locale-language' => array(
      'delta' => 'language',
      'module' => 'locale',
    ),
    'system-main' => array(
      'delta' => 'main',
      'module' => 'system',
    ),
    'views-backgroundimages-block_1' => array(
      'delta' => 'backgroundimages-block_1',
      'module' => 'views',
    ),
    'views-frontpage_nodes-block' => array(
      'delta' => 'frontpage_nodes-block',
      'module' => 'views',
    ),
    'views-latest_entries-block' => array(
      'delta' => 'latest_entries-block',
      'module' => 'views',
    ),
    'views-random_nodes-block' => array(
      'delta' => 'random_nodes-block',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-backgroundimages-block_1'] = array(
    'module' => 'views',
    'delta' => 'backgroundimages-block_1',
    'theme' => 'bartik',
    'status' => '1',
    'weight' => '0',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-frontpage_nodes-block'] = array(
    'module' => 'views',
    'delta' => 'frontpage_nodes-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-latest_entries-block'] = array(
    'module' => 'views',
    'delta' => 'latest_entries-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-random_nodes-block'] = array(
    'module' => 'views',
    'delta' => 'random_nodes-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // mborg
  $theme = array();

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'mborg',
    'status' => '1',
    'weight' => '-10',
    'region' => 'navigation',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'mborg',
    'status' => '1',
    'weight' => '-12',
    'region' => 'content_header',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-backgroundimages-block_1'] = array(
    'module' => 'views',
    'delta' => 'backgroundimages-block_1',
    'theme' => 'mborg',
    'status' => '1',
    'weight' => '0',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-frontpage_nodes-block'] = array(
    'module' => 'views',
    'delta' => 'frontpage_nodes-block',
    'theme' => 'mborg',
    'status' => '1',
    'weight' => '-11',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-latest_entries-block'] = array(
    'module' => 'views',
    'delta' => 'latest_entries-block',
    'theme' => 'mborg',
    'status' => '1',
    'weight' => '-10',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-random_nodes-block'] = array(
    'module' => 'views',
    'delta' => 'random_nodes-block',
    'theme' => 'mborg',
    'status' => '1',
    'weight' => '-9',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['mborg'] = $theme;

  // seven
  $theme = array();

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['system-main'] = array(
    'module' => 'system',
    'delta' => 'main',
    'theme' => 'seven',
    'status' => '1',
    'weight' => '0',
    'region' => 'content',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-backgroundimages-block_1'] = array(
    'module' => 'views',
    'delta' => 'backgroundimages-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-frontpage_nodes-block'] = array(
    'module' => 'views',
    'delta' => 'frontpage_nodes-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-latest_entries-block'] = array(
    'module' => 'views',
    'delta' => 'latest_entries-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-random_nodes-block'] = array(
    'module' => 'views',
    'delta' => 'random_nodes-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}