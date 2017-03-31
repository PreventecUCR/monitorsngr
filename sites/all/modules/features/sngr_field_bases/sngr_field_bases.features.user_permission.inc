<?php
/**
 * @file
 * sngr_field_bases.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sngr_field_bases_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_accion_ejecutar'.
  $permissions['create field_accion_ejecutar'] = array(
    'name' => 'create field_accion_ejecutar',
    'roles' => array(
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_anno_fin_meta'.
  $permissions['create field_anno_fin_meta'] = array(
    'name' => 'create field_anno_fin_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_anno_ini_meta'.
  $permissions['create field_anno_ini_meta'] = array(
    'name' => 'create field_anno_ini_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_aspecto_positivo'.
  $permissions['create field_aspecto_positivo'] = array(
    'name' => 'create field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_codigo_ambito'.
  $permissions['create field_codigo_ambito'] = array(
    'name' => 'create field_codigo_ambito',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_codigo_eje'.
  $permissions['create field_codigo_eje'] = array(
    'name' => 'create field_codigo_eje',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_codigo_lineamiento'.
  $permissions['create field_codigo_lineamiento'] = array(
    'name' => 'create field_codigo_lineamiento',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_descripc_fuente_verifica'.
  $permissions['create field_descripc_fuente_verifica'] = array(
    'name' => 'create field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_estado'.
  $permissions['create field_estado'] = array(
    'name' => 'create field_estado',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_institucion'.
  $permissions['create field_institucion'] = array(
    'name' => 'create field_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_institucion_administradora'.
  $permissions['create field_institucion_administradora'] = array(
    'name' => 'create field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_meta_descripcion'.
  $permissions['create field_meta_descripcion'] = array(
    'name' => 'create field_meta_descripcion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_notificar_analista'.
  $permissions['create field_notificar_analista'] = array(
    'name' => 'create field_notificar_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_notificar_institucional'.
  $permissions['create field_notificar_institucional'] = array(
    'name' => 'create field_notificar_institucional',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_observacion_del_analista'.
  $permissions['create field_observacion_del_analista'] = array(
    'name' => 'create field_observacion_del_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_obstaculo'.
  $permissions['create field_obstaculo'] = array(
    'name' => 'create field_obstaculo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_organizacion_capacitadora'.
  $permissions['create field_organizacion_capacitadora'] = array(
    'name' => 'create field_organizacion_capacitadora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_porcentaje_avance'.
  $permissions['create field_porcentaje_avance'] = array(
    'name' => 'create field_porcentaje_avance',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_porcentaje_avance_coment'.
  $permissions['create field_porcentaje_avance_coment'] = array(
    'name' => 'create field_porcentaje_avance_coment',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_prod_fuente_verifica'.
  $permissions['create field_prod_fuente_verifica'] = array(
    'name' => 'create field_prod_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_recibio_asesoria'.
  $permissions['create field_recibio_asesoria'] = array(
    'name' => 'create field_recibio_asesoria',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_recibio_asesoria_meta'.
  $permissions['create field_recibio_asesoria_meta'] = array(
    'name' => 'create field_recibio_asesoria_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_su_org_requiere_asesoria'.
  $permissions['create field_su_org_requiere_asesoria'] = array(
    'name' => 'create field_su_org_requiere_asesoria',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_tema_necesidad_meta'.
  $permissions['create field_tema_necesidad_meta'] = array(
    'name' => 'create field_tema_necesidad_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_accion_ejecutar'.
  $permissions['edit field_accion_ejecutar'] = array(
    'name' => 'edit field_accion_ejecutar',
    'roles' => array(
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_anno_fin_meta'.
  $permissions['edit field_anno_fin_meta'] = array(
    'name' => 'edit field_anno_fin_meta',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_anno_ini_meta'.
  $permissions['edit field_anno_ini_meta'] = array(
    'name' => 'edit field_anno_ini_meta',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_aspecto_positivo'.
  $permissions['edit field_aspecto_positivo'] = array(
    'name' => 'edit field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_codigo_ambito'.
  $permissions['edit field_codigo_ambito'] = array(
    'name' => 'edit field_codigo_ambito',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_codigo_eje'.
  $permissions['edit field_codigo_eje'] = array(
    'name' => 'edit field_codigo_eje',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_codigo_lineamiento'.
  $permissions['edit field_codigo_lineamiento'] = array(
    'name' => 'edit field_codigo_lineamiento',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_descripc_fuente_verifica'.
  $permissions['edit field_descripc_fuente_verifica'] = array(
    'name' => 'edit field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_estado'.
  $permissions['edit field_estado'] = array(
    'name' => 'edit field_estado',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_institucion'.
  $permissions['edit field_institucion'] = array(
    'name' => 'edit field_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_institucion_administradora'.
  $permissions['edit field_institucion_administradora'] = array(
    'name' => 'edit field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_meta_descripcion'.
  $permissions['edit field_meta_descripcion'] = array(
    'name' => 'edit field_meta_descripcion',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_notificar_analista'.
  $permissions['edit field_notificar_analista'] = array(
    'name' => 'edit field_notificar_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_notificar_institucional'.
  $permissions['edit field_notificar_institucional'] = array(
    'name' => 'edit field_notificar_institucional',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_observacion_del_analista'.
  $permissions['edit field_observacion_del_analista'] = array(
    'name' => 'edit field_observacion_del_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_obstaculo'.
  $permissions['edit field_obstaculo'] = array(
    'name' => 'edit field_obstaculo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_organizacion_capacitadora'.
  $permissions['edit field_organizacion_capacitadora'] = array(
    'name' => 'edit field_organizacion_capacitadora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_porcentaje_avance'.
  $permissions['edit field_porcentaje_avance'] = array(
    'name' => 'edit field_porcentaje_avance',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_porcentaje_avance_coment'.
  $permissions['edit field_porcentaje_avance_coment'] = array(
    'name' => 'edit field_porcentaje_avance_coment',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_prod_fuente_verifica'.
  $permissions['edit field_prod_fuente_verifica'] = array(
    'name' => 'edit field_prod_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_recibio_asesoria'.
  $permissions['edit field_recibio_asesoria'] = array(
    'name' => 'edit field_recibio_asesoria',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_recibio_asesoria_meta'.
  $permissions['edit field_recibio_asesoria_meta'] = array(
    'name' => 'edit field_recibio_asesoria_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_su_org_requiere_asesoria'.
  $permissions['edit field_su_org_requiere_asesoria'] = array(
    'name' => 'edit field_su_org_requiere_asesoria',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_tema_necesidad_meta'.
  $permissions['edit field_tema_necesidad_meta'] = array(
    'name' => 'edit field_tema_necesidad_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_accion_ejecutar'.
  $permissions['edit own field_accion_ejecutar'] = array(
    'name' => 'edit own field_accion_ejecutar',
    'roles' => array(
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_anno_fin_meta'.
  $permissions['edit own field_anno_fin_meta'] = array(
    'name' => 'edit own field_anno_fin_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_anno_ini_meta'.
  $permissions['edit own field_anno_ini_meta'] = array(
    'name' => 'edit own field_anno_ini_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_aspecto_positivo'.
  $permissions['edit own field_aspecto_positivo'] = array(
    'name' => 'edit own field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_codigo_ambito'.
  $permissions['edit own field_codigo_ambito'] = array(
    'name' => 'edit own field_codigo_ambito',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_codigo_eje'.
  $permissions['edit own field_codigo_eje'] = array(
    'name' => 'edit own field_codigo_eje',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_codigo_lineamiento'.
  $permissions['edit own field_codigo_lineamiento'] = array(
    'name' => 'edit own field_codigo_lineamiento',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_descripc_fuente_verifica'.
  $permissions['edit own field_descripc_fuente_verifica'] = array(
    'name' => 'edit own field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_estado'.
  $permissions['edit own field_estado'] = array(
    'name' => 'edit own field_estado',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_institucion'.
  $permissions['edit own field_institucion'] = array(
    'name' => 'edit own field_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_institucion_administradora'.
  $permissions['edit own field_institucion_administradora'] = array(
    'name' => 'edit own field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_meta_descripcion'.
  $permissions['edit own field_meta_descripcion'] = array(
    'name' => 'edit own field_meta_descripcion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_notificar_analista'.
  $permissions['edit own field_notificar_analista'] = array(
    'name' => 'edit own field_notificar_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_notificar_institucional'.
  $permissions['edit own field_notificar_institucional'] = array(
    'name' => 'edit own field_notificar_institucional',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_observacion_del_analista'.
  $permissions['edit own field_observacion_del_analista'] = array(
    'name' => 'edit own field_observacion_del_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_obstaculo'.
  $permissions['edit own field_obstaculo'] = array(
    'name' => 'edit own field_obstaculo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organizacion_capacitadora'.
  $permissions['edit own field_organizacion_capacitadora'] = array(
    'name' => 'edit own field_organizacion_capacitadora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_porcentaje_avance'.
  $permissions['edit own field_porcentaje_avance'] = array(
    'name' => 'edit own field_porcentaje_avance',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_porcentaje_avance_coment'.
  $permissions['edit own field_porcentaje_avance_coment'] = array(
    'name' => 'edit own field_porcentaje_avance_coment',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_prod_fuente_verifica'.
  $permissions['edit own field_prod_fuente_verifica'] = array(
    'name' => 'edit own field_prod_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_recibio_asesoria'.
  $permissions['edit own field_recibio_asesoria'] = array(
    'name' => 'edit own field_recibio_asesoria',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_recibio_asesoria_meta'.
  $permissions['edit own field_recibio_asesoria_meta'] = array(
    'name' => 'edit own field_recibio_asesoria_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_su_org_requiere_asesoria'.
  $permissions['edit own field_su_org_requiere_asesoria'] = array(
    'name' => 'edit own field_su_org_requiere_asesoria',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_tema_necesidad_meta'.
  $permissions['edit own field_tema_necesidad_meta'] = array(
    'name' => 'edit own field_tema_necesidad_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_accion_ejecutar'.
  $permissions['view field_accion_ejecutar'] = array(
    'name' => 'view field_accion_ejecutar',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_anno_fin_meta'.
  $permissions['view field_anno_fin_meta'] = array(
    'name' => 'view field_anno_fin_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_anno_ini_meta'.
  $permissions['view field_anno_ini_meta'] = array(
    'name' => 'view field_anno_ini_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_aspecto_positivo'.
  $permissions['view field_aspecto_positivo'] = array(
    'name' => 'view field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_codigo_ambito'.
  $permissions['view field_codigo_ambito'] = array(
    'name' => 'view field_codigo_ambito',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_codigo_eje'.
  $permissions['view field_codigo_eje'] = array(
    'name' => 'view field_codigo_eje',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_codigo_lineamiento'.
  $permissions['view field_codigo_lineamiento'] = array(
    'name' => 'view field_codigo_lineamiento',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_descripc_fuente_verifica'.
  $permissions['view field_descripc_fuente_verifica'] = array(
    'name' => 'view field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_estado'.
  $permissions['view field_estado'] = array(
    'name' => 'view field_estado',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_institucion'.
  $permissions['view field_institucion'] = array(
    'name' => 'view field_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_institucion_administradora'.
  $permissions['view field_institucion_administradora'] = array(
    'name' => 'view field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_meta_descripcion'.
  $permissions['view field_meta_descripcion'] = array(
    'name' => 'view field_meta_descripcion',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_notificar_analista'.
  $permissions['view field_notificar_analista'] = array(
    'name' => 'view field_notificar_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_notificar_institucional'.
  $permissions['view field_notificar_institucional'] = array(
    'name' => 'view field_notificar_institucional',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_observacion_del_analista'.
  $permissions['view field_observacion_del_analista'] = array(
    'name' => 'view field_observacion_del_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_obstaculo'.
  $permissions['view field_obstaculo'] = array(
    'name' => 'view field_obstaculo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_organizacion_capacitadora'.
  $permissions['view field_organizacion_capacitadora'] = array(
    'name' => 'view field_organizacion_capacitadora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_porcentaje_avance'.
  $permissions['view field_porcentaje_avance'] = array(
    'name' => 'view field_porcentaje_avance',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_porcentaje_avance_coment'.
  $permissions['view field_porcentaje_avance_coment'] = array(
    'name' => 'view field_porcentaje_avance_coment',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_prod_fuente_verifica'.
  $permissions['view field_prod_fuente_verifica'] = array(
    'name' => 'view field_prod_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_recibio_asesoria'.
  $permissions['view field_recibio_asesoria'] = array(
    'name' => 'view field_recibio_asesoria',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_recibio_asesoria_meta'.
  $permissions['view field_recibio_asesoria_meta'] = array(
    'name' => 'view field_recibio_asesoria_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_su_org_requiere_asesoria'.
  $permissions['view field_su_org_requiere_asesoria'] = array(
    'name' => 'view field_su_org_requiere_asesoria',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_tema_necesidad_meta'.
  $permissions['view field_tema_necesidad_meta'] = array(
    'name' => 'view field_tema_necesidad_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_accion_ejecutar'.
  $permissions['view own field_accion_ejecutar'] = array(
    'name' => 'view own field_accion_ejecutar',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_anno_fin_meta'.
  $permissions['view own field_anno_fin_meta'] = array(
    'name' => 'view own field_anno_fin_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_anno_ini_meta'.
  $permissions['view own field_anno_ini_meta'] = array(
    'name' => 'view own field_anno_ini_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_aspecto_positivo'.
  $permissions['view own field_aspecto_positivo'] = array(
    'name' => 'view own field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_codigo_ambito'.
  $permissions['view own field_codigo_ambito'] = array(
    'name' => 'view own field_codigo_ambito',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_codigo_eje'.
  $permissions['view own field_codigo_eje'] = array(
    'name' => 'view own field_codigo_eje',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_codigo_lineamiento'.
  $permissions['view own field_codigo_lineamiento'] = array(
    'name' => 'view own field_codigo_lineamiento',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_descripc_fuente_verifica'.
  $permissions['view own field_descripc_fuente_verifica'] = array(
    'name' => 'view own field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_estado'.
  $permissions['view own field_estado'] = array(
    'name' => 'view own field_estado',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_institucion'.
  $permissions['view own field_institucion'] = array(
    'name' => 'view own field_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_institucion_administradora'.
  $permissions['view own field_institucion_administradora'] = array(
    'name' => 'view own field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_meta_descripcion'.
  $permissions['view own field_meta_descripcion'] = array(
    'name' => 'view own field_meta_descripcion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_notificar_analista'.
  $permissions['view own field_notificar_analista'] = array(
    'name' => 'view own field_notificar_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_notificar_institucional'.
  $permissions['view own field_notificar_institucional'] = array(
    'name' => 'view own field_notificar_institucional',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_observacion_del_analista'.
  $permissions['view own field_observacion_del_analista'] = array(
    'name' => 'view own field_observacion_del_analista',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_obstaculo'.
  $permissions['view own field_obstaculo'] = array(
    'name' => 'view own field_obstaculo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organizacion_capacitadora'.
  $permissions['view own field_organizacion_capacitadora'] = array(
    'name' => 'view own field_organizacion_capacitadora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_porcentaje_avance'.
  $permissions['view own field_porcentaje_avance'] = array(
    'name' => 'view own field_porcentaje_avance',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_porcentaje_avance_coment'.
  $permissions['view own field_porcentaje_avance_coment'] = array(
    'name' => 'view own field_porcentaje_avance_coment',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_prod_fuente_verifica'.
  $permissions['view own field_prod_fuente_verifica'] = array(
    'name' => 'view own field_prod_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_recibio_asesoria'.
  $permissions['view own field_recibio_asesoria'] = array(
    'name' => 'view own field_recibio_asesoria',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_recibio_asesoria_meta'.
  $permissions['view own field_recibio_asesoria_meta'] = array(
    'name' => 'view own field_recibio_asesoria_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_su_org_requiere_asesoria'.
  $permissions['view own field_su_org_requiere_asesoria'] = array(
    'name' => 'view own field_su_org_requiere_asesoria',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_tema_necesidad_meta'.
  $permissions['view own field_tema_necesidad_meta'] = array(
    'name' => 'view own field_tema_necesidad_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
