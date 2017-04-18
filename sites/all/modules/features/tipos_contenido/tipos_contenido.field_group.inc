<?php
/**
 * @file
 * tipos_contenido.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tipos_contenido_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_information|node|compromiso_de_gestion|form';
  $field_group->group_name = 'group_basic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'compromiso_de_gestion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_htabs_compromiso';
  $field_group->data = array(
    'label' => 'Información Básica',
    'weight' => '1',
    'children' => array(
      0 => 'field_year_compromiso',
      1 => 'field_porcentaje_de_avance_compr',
      2 => 'field_notificar_analista',
      3 => 'field_accion_ejecutar',
      4 => 'field_id_compromiso',
      5 => 'field_notificar_institucional',
      6 => 'field_institucion',
      7 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic-information field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_basic_information|node|compromiso_de_gestion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_htabs_compromiso|node|compromiso_de_gestion|form';
  $field_group->group_name = 'group_htabs_compromiso';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'compromiso_de_gestion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Tabs Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic_information',
      1 => 'group_metas_group',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-htabs-compromiso field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_htabs_compromiso|node|compromiso_de_gestion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_asesorias|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_meta_asesorias';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vtabs_metas';
  $field_group->data = array(
    'label' => 'Asesorias',
    'weight' => '8',
    'children' => array(
      0 => 'field_su_org_requiere_asesoria',
      1 => 'field_organizacion_capacitadora',
      2 => 'field_tema_necesidad_meta',
      3 => 'field_recibio_asesoria_meta',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_asesorias|node|evaluacion_de_metas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_avance|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_meta_avance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vtabs_metas';
  $field_group->data = array(
    'label' => 'Avance',
    'weight' => '6',
    'children' => array(
      0 => 'field_porcentaje_avance',
      1 => 'field_porcentaje_avance_coment',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_avance|node|evaluacion_de_metas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_estado|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_meta_estado';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vtabs_metas';
  $field_group->data = array(
    'label' => 'Estado',
    'weight' => '10',
    'children' => array(
      0 => 'field_estado',
      1 => 'field_observacion_del_analista',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_estado|node|evaluacion_de_metas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_obsevaciones|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_meta_obsevaciones';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vtabs_metas';
  $field_group->data = array(
    'label' => 'Observaciones',
    'weight' => '7',
    'children' => array(
      0 => 'field_aspecto_positivo',
      1 => 'field_obstaculo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_obsevaciones|node|evaluacion_de_metas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metas_group|node|compromiso_de_gestion|form';
  $field_group->group_name = 'group_metas_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'compromiso_de_gestion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_htabs_compromiso';
  $field_group->data = array(
    'label' => 'Metas',
    'weight' => '2',
    'children' => array(
      0 => 'field_evaluar_metas',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metas-group field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_metas_group|node|compromiso_de_gestion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_producto_tab|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_producto_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_vtabs_metas';
  $field_group->data = array(
    'label' => 'Productos',
    'weight' => '9',
    'children' => array(
      0 => 'field_evaluar_producto',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-producto-tab field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_producto_tab|node|evaluacion_de_metas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vigencia|node|miembros|form';
  $field_group->group_name = 'group_vigencia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'miembros';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vigencia',
    'weight' => '5',
    'children' => array(
      0 => 'field_fecha_fin',
      1 => 'field_fecha',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vigencia field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vigencia|node|miembros|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vtabs_metas|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_vtabs_metas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vertical Group',
    'weight' => '3',
    'children' => array(
      0 => 'group_meta_asesorias',
      1 => 'group_meta_avance',
      2 => 'group_meta_estado',
      3 => 'group_meta_obsevaciones',
      4 => 'group_producto_tab',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-vtabs-metas field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vtabs_metas|node|evaluacion_de_metas|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Asesorias');
  t('Avance');
  t('Estado');
  t('Horizontal Tabs Group');
  t('Información Básica');
  t('Metas');
  t('Observaciones');
  t('Productos');
  t('Vertical Group');
  t('Vigencia');

  return $field_groups;
}
