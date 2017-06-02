<?php
/**
 * @file
 * tipos_contenido.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tipos_contenido_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_meta_tax'.
  $permissions['create field_meta_tax'] = array(
    'name' => 'create field_meta_tax',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_meta_tax'.
  $permissions['edit field_meta_tax'] = array(
    'name' => 'edit field_meta_tax',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_meta_tax'.
  $permissions['edit own field_meta_tax'] = array(
    'name' => 'edit own field_meta_tax',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_meta_tax'.
  $permissions['view field_meta_tax'] = array(
    'name' => 'view field_meta_tax',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_meta_tax'.
  $permissions['view own field_meta_tax'] = array(
    'name' => 'view own field_meta_tax',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
