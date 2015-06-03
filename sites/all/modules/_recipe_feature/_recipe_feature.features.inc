<?php
/**
 * @file
 * _recipe_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function _recipe_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function _recipe_feature_node_info() {
  $items = array(
    'recipe_name' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('Our super secret recipes'),
      'has_title' => '1',
      'title_label' => t('Recipe Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
