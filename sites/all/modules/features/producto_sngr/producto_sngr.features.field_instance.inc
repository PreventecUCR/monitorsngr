<?php
/**
 * @file
 * producto_sngr.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function producto_sngr_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-producto-field_coordinacion_producto'.
  $field_instances['taxonomy_term-producto-field_coordinacion_producto'] = array(
    'bundle' => 'producto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_coordinacion_producto',
    'label' => 'Coordinación',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-producto-field_involucrados_producto'.
  $field_instances['taxonomy_term-producto-field_involucrados_producto'] = array(
    'bundle' => 'producto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_involucrados_producto',
    'label' => 'Involucrados',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Coordinación');
  t('Involucrados');

  return $field_instances;
}
