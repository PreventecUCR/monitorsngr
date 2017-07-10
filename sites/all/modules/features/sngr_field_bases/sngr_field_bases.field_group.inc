<?php
/**
 * @file
 * sngr_field_bases.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sngr_field_bases_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_direccion_general|node|institucion|form';
  $field_group->group_name = 'group_direccion_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'institucion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dirección general',
    'weight' => '6',
    'children' => array(
      0 => 'field_nombre_jerarca',
      1 => 'field_cargo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-direccion-general field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_direccion_general|node|institucion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_institucional_info|user|user|form';
  $field_group->group_name = 'group_institucional_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información institucional',
    'weight' => '2',
    'children' => array(
      0 => 'field_cargo',
      1 => 'field_departamento',
      2 => 'field_institucion',
      3 => 'field_institucion_user',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-institucional-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_institucional_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_miembros|node|instancia_coordinacion|form';
  $field_group->group_name = 'group_miembros';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'instancia_coordinacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Agregar Miembros Comités',
    'weight' => '6',
    'children' => array(
      0 => 'field_agregar_integrantes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_miembros|node|instancia_coordinacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_info|user|user|form';
  $field_group->group_name = 'group_personal_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Información personal',
    'weight' => '1',
    'children' => array(
      0 => 'field_apellido1',
      1 => 'field_apellido2',
      2 => 'field_genero',
      3 => 'field_nombre',
      4 => 'field_telefono',
      5 => 'field_tratamiento',
      6 => 'picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_personal_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|node|institucion|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'institucion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación',
    'weight' => '7',
    'children' => array(
      0 => 'field_direccion_exacta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ubicacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ubicacion|node|institucion|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Agregar Miembros Comités');
  t('Dirección general');
  t('Información institucional');
  t('Información personal');
  t('Ubicación');

  return $field_groups;
}
