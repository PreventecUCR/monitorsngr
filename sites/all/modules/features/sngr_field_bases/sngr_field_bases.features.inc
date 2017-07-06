<?php
/**
 * @file
 * sngr_field_bases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sngr_field_bases_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sngr_field_bases_node_info() {
  $items = array(
    'institucion' => array(
      'name' => t('Institución'),
      'base' => 'node_content',
      'description' => t('Institución'),
      'has_title' => '1',
      'title_label' => t('Nombre de la institución'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
