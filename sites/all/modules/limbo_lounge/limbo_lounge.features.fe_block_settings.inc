<?php
/**
 * @file
 * limbo_lounge.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function limbo_lounge_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'limbo' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'limbo',
        'weight' => -10,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-social-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-social-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'limbo' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'limbo',
        'weight' => -7,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'limbo' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'limbo',
        'weight' => -6,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 3,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'limbo' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'limbo',
        'weight' => -8,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-homepage_header_images-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'homepage_header_images-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'home',
    'roles' => array(),
    'themes' => array(
      'limbo' => array(
        'region' => 'widgets',
        'status' => 1,
        'theme' => 'limbo',
        'weight' => -12,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-single_promos-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'single_promos-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'limbo' => array(
        'region' => 'widgets',
        'status' => 1,
        'theme' => 'limbo',
        'weight' => -14,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-weekly_features-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'weekly_features-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'limbo' => array(
        'region' => 'widgets',
        'status' => 1,
        'theme' => 'limbo',
        'weight' => -15,
      ),
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'tao' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'tao',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
