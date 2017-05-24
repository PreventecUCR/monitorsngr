<?php
/**
 * @file
 * vocabularios.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function vocabularios_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-accion_estrategica-field_ambito'.
  $field_instances['taxonomy_term-accion_estrategica-field_ambito'] = array(
    'bundle' => 'accion_estrategica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'entityconnect' => array(
      'button' => array(
        'unload_add_button' => 1,
        'unload_edit_button' => 1,
      ),
      'icon' => array(
        'show_add_icon' => 0,
        'show_edit_icon' => 0,
      ),
    ),
    'field_name' => 'field_ambito',
    'label' => 'Ámbito',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-accion_estrategica-field_codigo'.
  $field_instances['taxonomy_term-accion_estrategica-field_codigo'] = array(
    'bundle' => 'accion_estrategica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Se recomienda que el código del acción estratégica lleve el siguiente formato: E#-A#.L#.Ae#',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_codigo',
    'label' => 'Código',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-accion_estrategica-field_eje'.
  $field_instances['taxonomy_term-accion_estrategica-field_eje'] = array(
    'bundle' => 'accion_estrategica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'entityconnect' => array(
      'button' => array(
        'unload_add_button' => 1,
        'unload_edit_button' => 1,
      ),
      'icon' => array(
        'show_add_icon' => 0,
        'show_edit_icon' => 0,
      ),
    ),
    'field_name' => 'field_eje',
    'label' => 'Eje',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-accion_estrategica-field_lineamiento'.
  $field_instances['taxonomy_term-accion_estrategica-field_lineamiento'] = array(
    'bundle' => 'accion_estrategica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'entityconnect' => array(
      'button' => array(
        'unload_add_button' => 1,
        'unload_edit_button' => 1,
      ),
      'icon' => array(
        'show_add_icon' => 0,
        'show_edit_icon' => 0,
      ),
    ),
    'field_name' => 'field_lineamiento',
    'label' => 'Lineamiento',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-meta-field_accion_estrategica'.
  $field_instances['taxonomy_term-meta-field_accion_estrategica'] = array(
    'bundle' => 'meta',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_accion_estrategica',
    'label' => 'Acción Estratégica',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_match' => 'starts_with',
        'autocomplete_path' => 'taxonomy/autocomplete',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-meta-field_codigo'.
  $field_instances['taxonomy_term-meta-field_codigo'] = array(
    'bundle' => 'meta',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Se recomienda que el código de la Meta lleve el siguiente formato: E#-A#.L#.Ae#.M#',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_codigo',
    'label' => 'Código',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-meta-field_meta_avance_global'.
  $field_instances['taxonomy_term-meta-field_meta_avance_global'] = array(
    'bundle' => 'meta',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_meta_avance_global',
    'label' => 'Avance Global',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-meta-field_productos_relacionados'.
  $field_instances['taxonomy_term-meta-field_productos_relacionados'] = array(
    'bundle' => 'meta',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_productos_relacionados',
    'label' => 'Productos Relacionados',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'references_dialog',
      'settings' => array(
        'autocomplete_match' => 'starts_with',
        'autocomplete_path' => 'taxonomy/autocomplete',
        'references_dialog_add' => 1,
        'references_dialog_edit' => 1,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'references_dialog_term_reference',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-producto-field_anno_fin_meta'.
  $field_instances['taxonomy_term-producto-field_anno_fin_meta'] = array(
    'bundle' => 'producto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_anno_fin_meta',
    'label' => 'Año Final',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'taxonomy_term-producto-field_anno_ini_meta'.
  $field_instances['taxonomy_term-producto-field_anno_ini_meta'] = array(
    'bundle' => 'producto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_anno_ini_meta',
    'label' => 'Año Inicial',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'taxonomy_term-producto-field_cod_producto_meta'.
  $field_instances['taxonomy_term-producto-field_cod_producto_meta'] = array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_cod_producto_meta',
    'label' => 'Código Producto',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-producto-field_detalle_del_producto'.
  $field_instances['taxonomy_term-producto-field_detalle_del_producto'] = array(
    'bundle' => 'producto',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Campo para el detalle/nombre del producto',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_detalle_del_producto',
    'label' => 'Detalle del Producto',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Acción Estratégica');
  t('Avance Global');
  t('Año Final');
  t('Año Inicial');
  t('Campo para el detalle/nombre del producto');
  t('Código');
  t('Código Producto');
  t('Detalle del Producto');
  t('Eje');
  t('Lineamiento');
  t('Productos Relacionados');
  t('Se recomienda que el código de la Meta lleve el siguiente formato: E#-A#.L#.Ae#.M#');
  t('Se recomienda que el código del acción estratégica lleve el siguiente formato: E#-A#.L#.Ae#');
  t('Ámbito');

  return $field_instances;
}
