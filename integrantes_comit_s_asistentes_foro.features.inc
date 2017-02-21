<?php
/**
 * @file
 * integrantes_comit_s_asistentes_foro.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function integrantes_comit_s_asistentes_foro_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function integrantes_comit_s_asistentes_foro_node_info() {
  $items = array(
    'miembros' => array(
      'name' => t('Integrantes Comités / Asistentes Foro'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre representante'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
