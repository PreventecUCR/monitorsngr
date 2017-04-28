<?php
/**
 * @file
 * vistas.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vistas_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acciones_estrategicas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Acciones Estratégicas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Acciones Estratégicas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_4',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name_1' => 'name_1',
    'name_2' => 'name_2',
    'name_3' => 'name_3',
    'name_4' => 'name_4',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a class="btn btn-primary" href="/monitorsngr/admin/structure/taxonomy/accion_estrategica/add">Crear nueva acción estratégica</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Término de taxonomía: Acción Estratégica (field_accion_estrategica) */
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['id'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['field'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['label'] = 'term from field_accion_estrategica_1';
  /* Relationship: Término de taxonomía: Acción Estratégica (field_accion_estrategica) */
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['id'] = 'field_accion_estrategica_tid_1';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['field'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['label'] = 'term from field_accion_estrategica_2';
  /* Relationship: Término de taxonomía: Acción Estratégica (field_accion_estrategica) */
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['id'] = 'field_accion_estrategica_tid_2';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['field'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['label'] = 'term from field_accion_estrategica_3';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eje_target_id']['id'] = 'field_eje_target_id';
  $handler->display->display_options['relationships']['field_eje_target_id']['table'] = 'field_data_field_eje';
  $handler->display->display_options['relationships']['field_eje_target_id']['field'] = 'field_eje_target_id';
  $handler->display->display_options['relationships']['field_eje_target_id']['relationship'] = 'field_accion_estrategica_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ambito_target_id']['id'] = 'field_ambito_target_id';
  $handler->display->display_options['relationships']['field_ambito_target_id']['table'] = 'field_data_field_ambito';
  $handler->display->display_options['relationships']['field_ambito_target_id']['field'] = 'field_ambito_target_id';
  $handler->display->display_options['relationships']['field_ambito_target_id']['relationship'] = 'field_accion_estrategica_tid_1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['id'] = 'field_lineamiento_target_id';
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['table'] = 'field_data_field_lineamiento';
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['field'] = 'field_lineamiento_target_id';
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['relationship'] = 'field_accion_estrategica_tid_2';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_eje_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Eje';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_ambito_target_id';
  $handler->display->display_options['fields']['name_2']['label'] = 'Ámbito';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_3']['id'] = 'name_3';
  $handler->display->display_options['fields']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_3']['field'] = 'name';
  $handler->display->display_options['fields']['name_3']['relationship'] = 'field_lineamiento_target_id';
  $handler->display->display_options['fields']['name_3']['label'] = 'Lineamiento';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_4']['id'] = 'name_4';
  $handler->display->display_options['fields']['name_4']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_4']['field'] = 'name';
  $handler->display->display_options['fields']['name_4']['relationship'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['fields']['name_4']['label'] = 'Acción Estratégica';
  $handler->display->display_options['fields']['name_4']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Meta';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'meta' => 'meta',
  );
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_eje_target_id';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Eje';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name_1';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'field_ambito_target_id';
  $handler->display->display_options['filters']['name_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_1']['expose']['operator_id'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['label'] = 'Ámbito';
  $handler->display->display_options['filters']['name_1']['expose']['operator'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['identifier'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_field'] = 'name_2';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['relationship'] = 'field_lineamiento_target_id';
  $handler->display->display_options['filters']['name_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_2']['expose']['operator_id'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['label'] = 'Lineamiento';
  $handler->display->display_options['filters']['name_2']['expose']['operator'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['identifier'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_field'] = 'name_3';
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'acciones-estrategicas';
  $translatables['acciones_estrategicas'] = array(
    t('Master'),
    t('Acciones Estratégicas'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<a class="btn btn-primary" href="/monitorsngr/admin/structure/taxonomy/accion_estrategica/add">Crear nueva acción estratégica</a>'),
    t('term from field_accion_estrategica_1'),
    t('term from field_accion_estrategica_2'),
    t('term from field_accion_estrategica_3'),
    t('Término de taxonomía entity referenced from field_eje'),
    t('Término de taxonomía entity referenced from field_ambito'),
    t('Término de taxonomía entity referenced from field_lineamiento'),
    t('Eje'),
    t('Ámbito'),
    t('Lineamiento'),
    t('Acción Estratégica'),
    t('Meta'),
    t('Page'),
  );
  $export['acciones_estrategicas'] = $view;

  $view = new view();
  $view->name = 'autoevaluaciones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Autoevaluaciones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Autoevaluaciones';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Asignar autoevaluación';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="https://163.178.170.162/monitorsngr/node/add/autoevaluacion">Asignar autoevaluación</a>';
  /* Campo: Contenido: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'https://163.178.170.162/monitorsngr/sngr/autoevaluacion/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenido: Enlace institucional */
  $handler->display->display_options['fields']['field_enlace_institucional']['id'] = 'field_enlace_institucional';
  $handler->display->display_options['fields']['field_enlace_institucional']['table'] = 'field_data_field_enlace_institucional';
  $handler->display->display_options['fields']['field_enlace_institucional']['field'] = 'field_enlace_institucional';
  $handler->display->display_options['fields']['field_enlace_institucional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enlace_institucional']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Contenido: Estado */
  $handler->display->display_options['fields']['field_estado']['id'] = 'field_estado';
  $handler->display->display_options['fields']['field_estado']['table'] = 'field_data_field_estado';
  $handler->display->display_options['fields']['field_estado']['field'] = 'field_estado';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'autoevaluacion' => 'autoevaluacion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Estado (field_estado) */
  $handler->display->display_options['filters']['field_estado_value']['id'] = 'field_estado_value';
  $handler->display->display_options['filters']['field_estado_value']['table'] = 'field_data_field_estado';
  $handler->display->display_options['filters']['field_estado_value']['field'] = 'field_estado_value';
  $handler->display->display_options['filters']['field_estado_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_estado_value']['expose']['operator_id'] = 'field_estado_value_op';
  $handler->display->display_options['filters']['field_estado_value']['expose']['label'] = 'Estado';
  $handler->display->display_options['filters']['field_estado_value']['expose']['operator'] = 'field_estado_value_op';
  $handler->display->display_options['filters']['field_estado_value']['expose']['identifier'] = 'field_estado_value';
  $handler->display->display_options['filters']['field_estado_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sngr/autoevaluaciones';
  $translatables['autoevaluaciones'] = array(
    t('Master'),
    t('Autoevaluaciones'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Asignar autoevaluación'),
    t('<a href="https://163.178.170.162/monitorsngr/node/add/autoevaluacion">Asignar autoevaluación</a>'),
    t('Nid'),
    t('Enlace institucional'),
    t('Estado'),
    t('Page'),
  );
  $export['autoevaluaciones'] = $view;

  $view = new view();
  $view->name = 'consolidaci_n_de_montos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Consolidación de Montos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Consolidado de Montos de Ejecución en GR';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_anno',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_anno' => 'field_anno',
    'title' => 'title',
    'field_monto_de_ejecucion' => 'field_monto_de_ejecucion',
    'field_monto_presupuestario' => 'field_monto_presupuestario',
    'expression' => 'expression',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_anno' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_monto_de_ejecucion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_monto_presupuestario' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Contenido: Montos de Ejecución en GR (field_financiamiento) */
  $handler->display->display_options['relationships']['field_financiamiento_value']['id'] = 'field_financiamiento_value';
  $handler->display->display_options['relationships']['field_financiamiento_value']['table'] = 'field_data_field_financiamiento';
  $handler->display->display_options['relationships']['field_financiamiento_value']['field'] = 'field_financiamiento_value';
  $handler->display->display_options['relationships']['field_financiamiento_value']['delta'] = '-1';
  /* Campo: Campo: Año */
  $handler->display->display_options['fields']['field_anno']['id'] = 'field_anno';
  $handler->display->display_options['fields']['field_anno']['table'] = 'field_data_field_anno';
  $handler->display->display_options['fields']['field_anno']['field'] = 'field_anno';
  $handler->display->display_options['fields']['field_anno']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['fields']['field_anno']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_anno']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Institución';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Field collection item: Monto de Ejecución */
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['id'] = 'field_monto_de_ejecucion';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['table'] = 'field_data_field_monto_de_ejecucion';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['field'] = 'field_monto_de_ejecucion';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Field collection item: Monto Presupuestario */
  $handler->display->display_options['fields']['field_monto_presupuestario']['id'] = 'field_monto_presupuestario';
  $handler->display->display_options['fields']['field_monto_presupuestario']['table'] = 'field_data_field_monto_presupuestario';
  $handler->display->display_options['fields']['field_monto_presupuestario']['field'] = 'field_monto_presupuestario';
  $handler->display->display_options['fields']['field_monto_presupuestario']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['fields']['field_monto_presupuestario']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Porcentaje de Ejecución';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_monto_de_ejecucion] / [field_monto_presupuestario]) * 100';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'institucion' => 'institucion',
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Campo: Año (field_anno) */
  $handler->display->display_options['filters']['field_anno_value']['id'] = 'field_anno_value';
  $handler->display->display_options['filters']['field_anno_value']['table'] = 'field_data_field_anno';
  $handler->display->display_options['filters']['field_anno_value']['field'] = 'field_anno_value';
  $handler->display->display_options['filters']['field_anno_value']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['filters']['field_anno_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_anno_value']['expose']['operator_id'] = 'field_anno_value_op';
  $handler->display->display_options['filters']['field_anno_value']['expose']['label'] = 'Año';
  $handler->display->display_options['filters']['field_anno_value']['expose']['operator'] = 'field_anno_value_op';
  $handler->display->display_options['filters']['field_anno_value']['expose']['identifier'] = 'field_anno_value';
  $handler->display->display_options['filters']['field_anno_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['path'] = 'consolidacion-de-montos';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Campo: Año */
  $handler->display->display_options['fields']['field_anno']['id'] = 'field_anno';
  $handler->display->display_options['fields']['field_anno']['table'] = 'field_data_field_anno';
  $handler->display->display_options['fields']['field_anno']['field'] = 'field_anno';
  $handler->display->display_options['fields']['field_anno']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['fields']['field_anno']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Institución';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Field collection item: Monto de Ejecución */
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['id'] = 'field_monto_de_ejecucion';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['table'] = 'field_data_field_monto_de_ejecucion';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['field'] = 'field_monto_de_ejecucion';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Field collection item: Monto Presupuestario */
  $handler->display->display_options['fields']['field_monto_presupuestario']['id'] = 'field_monto_presupuestario';
  $handler->display->display_options['fields']['field_monto_presupuestario']['table'] = 'field_data_field_monto_presupuestario';
  $handler->display->display_options['fields']['field_monto_presupuestario']['field'] = 'field_monto_presupuestario';
  $handler->display->display_options['fields']['field_monto_presupuestario']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['fields']['field_monto_presupuestario']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Porcentaje de Ejecución';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_monto_de_ejecucion] / [field_monto_presupuestario]) * 100';
  $handler->display->display_options['path'] = 'consolidacion-de-montos-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['consolidaci_n_de_montos'] = array(
    t('Master'),
    t('Consolidado de Montos de Ejecución en GR'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('field collection item from field_financiamiento'),
    t('Año'),
    t('Institución'),
    t('Monto de Ejecución'),
    t('Monto Presupuestario'),
    t('Porcentaje de Ejecución'),
    t('.'),
    t(','),
    t('%'),
    t('Page'),
    t('Data export'),
  );
  $export['consolidaci_n_de_montos'] = $view;

  $view = new view();
  $view->name = 'decreto_de_emergencia';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Decreto de emergencia';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Decreto de emergencia';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_numero_de_decreto' => 'field_numero_de_decreto',
    'title' => 'title',
    'field_anno' => 'field_anno',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_numero_de_decreto' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_anno' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Nuevo Decreto';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="https://163.178.170.162/monitorsngr/node/add/decreto-de-emergencia">Nuevo Decreto</a>';
  /* Campo: Contenido: Número de Decreto */
  $handler->display->display_options['fields']['field_numero_de_decreto']['id'] = 'field_numero_de_decreto';
  $handler->display->display_options['fields']['field_numero_de_decreto']['table'] = 'field_data_field_numero_de_decreto';
  $handler->display->display_options['fields']['field_numero_de_decreto']['field'] = 'field_numero_de_decreto';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre del decreto';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Campo: Año */
  $handler->display->display_options['fields']['field_anno']['id'] = 'field_anno';
  $handler->display->display_options['fields']['field_anno']['table'] = 'field_data_field_anno';
  $handler->display->display_options['fields']['field_anno']['field'] = 'field_anno';
  /* Sort criterion: Campo: Año (field_anno) */
  $handler->display->display_options['sorts']['field_anno_value']['id'] = 'field_anno_value';
  $handler->display->display_options['sorts']['field_anno_value']['table'] = 'field_data_field_anno';
  $handler->display->display_options['sorts']['field_anno_value']['field'] = 'field_anno_value';
  $handler->display->display_options['sorts']['field_anno_value']['order'] = 'DESC';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'decreto_de_emergencia' => 'decreto_de_emergencia',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Campo: Año (field_anno) */
  $handler->display->display_options['filters']['field_anno_value']['id'] = 'field_anno_value';
  $handler->display->display_options['filters']['field_anno_value']['table'] = 'field_data_field_anno';
  $handler->display->display_options['filters']['field_anno_value']['field'] = 'field_anno_value';
  $handler->display->display_options['filters']['field_anno_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_anno_value']['expose']['operator_id'] = 'field_anno_value_op';
  $handler->display->display_options['filters']['field_anno_value']['expose']['label'] = 'Año ';
  $handler->display->display_options['filters']['field_anno_value']['expose']['operator'] = 'field_anno_value_op';
  $handler->display->display_options['filters']['field_anno_value']['expose']['identifier'] = 'field_anno_value';
  $handler->display->display_options['filters']['field_anno_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pge/decreto-de-emergencia';
  $translatables['decreto_de_emergencia'] = array(
    t('Master'),
    t('Decreto de emergencia'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Nuevo Decreto'),
    t('<a href="https://163.178.170.162/monitorsngr/node/add/decreto-de-emergencia">Nuevo Decreto</a>'),
    t('Número de Decreto'),
    t('Nombre del decreto'),
    t('Año'),
    t('Tipo'),
    t('Año '),
    t('Page'),
  );
  $export['decreto_de_emergencia'] = $view;

  $view = new view();
  $view->name = 'enlaces_institucionales';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Enlaces Institucionales';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enlaces Institucionales';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_nombre' => 'field_nombre',
    'field_apellido1' => 'field_apellido1',
    'field_institucion' => 'field_institucion',
    'field_telefono' => 'field_telefono',
    'mail' => 'mail',
    'field_apellido2' => 'field_apellido2',
  );
  $handler->display->display_options['style_options']['default'] = 'field_institucion';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nombre' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_apellido1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institucion' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_telefono' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_apellido2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="admin/people/create" alt="nuevo usuario">Nuevo enlace institucional</a>';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Usuario';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  /* Campo: Usuario: Primer apellido */
  $handler->display->display_options['fields']['field_apellido1']['id'] = 'field_apellido1';
  $handler->display->display_options['fields']['field_apellido1']['table'] = 'field_data_field_apellido1';
  $handler->display->display_options['fields']['field_apellido1']['field'] = 'field_apellido1';
  /* Campo: Usuario: Segundo apellido */
  $handler->display->display_options['fields']['field_apellido2']['id'] = 'field_apellido2';
  $handler->display->display_options['fields']['field_apellido2']['table'] = 'field_data_field_apellido2';
  $handler->display->display_options['fields']['field_apellido2']['field'] = 'field_apellido2';
  /* Campo: Campo: Institución  */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_institucion']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_institucion']['alter']['path'] = 'node/[field_institucion-target_id]';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Campo: Teléfono */
  $handler->display->display_options['fields']['field_telefono']['id'] = 'field_telefono';
  $handler->display->display_options['fields']['field_telefono']['table'] = 'field_data_field_telefono';
  $handler->display->display_options['fields']['field_telefono']['field'] = 'field_telefono';
  $handler->display->display_options['fields']['field_telefono']['delta_offset'] = '0';
  /* Campo: Usuario: Correo electrónico */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Sort criterion: Usuario: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Usuario: Activo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: Usuario: Nombre (field_nombre) */
  $handler->display->display_options['filters']['field_nombre_value']['id'] = 'field_nombre_value';
  $handler->display->display_options['filters']['field_nombre_value']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['filters']['field_nombre_value']['field'] = 'field_nombre_value';
  $handler->display->display_options['filters']['field_nombre_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_value']['expose']['operator_id'] = 'field_nombre_value_op';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['operator'] = 'field_nombre_value_op';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['identifier'] = 'field_nombre_value';
  $handler->display->display_options['filters']['field_nombre_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Usuario: Primer apellido (field_apellido1) */
  $handler->display->display_options['filters']['field_apellido1_value']['id'] = 'field_apellido1_value';
  $handler->display->display_options['filters']['field_apellido1_value']['table'] = 'field_data_field_apellido1';
  $handler->display->display_options['filters']['field_apellido1_value']['field'] = 'field_apellido1_value';
  $handler->display->display_options['filters']['field_apellido1_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_apellido1_value']['group'] = 1;
  $handler->display->display_options['filters']['field_apellido1_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_apellido1_value']['expose']['operator_id'] = 'field_apellido1_value_op';
  $handler->display->display_options['filters']['field_apellido1_value']['expose']['label'] = 'Primer apellido';
  $handler->display->display_options['filters']['field_apellido1_value']['expose']['operator'] = 'field_apellido1_value_op';
  $handler->display->display_options['filters']['field_apellido1_value']['expose']['identifier'] = 'field_apellido1_value';
  $handler->display->display_options['filters']['field_apellido1_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'enlaces-institucionales';

  /* Display: ER Lista nombres */
  $handler = $view->new_display('entityreference', 'ER Lista nombres', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Lista de los nombres completos para los usuarios institucionales';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_nombre' => 'field_nombre',
    'field_apellido1' => 'field_apellido1',
    'field_apellido2' => 'field_apellido2',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['label'] = '';
  $handler->display->display_options['fields']['field_nombre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nombre']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Primer apellido */
  $handler->display->display_options['fields']['field_apellido1']['id'] = 'field_apellido1';
  $handler->display->display_options['fields']['field_apellido1']['table'] = 'field_data_field_apellido1';
  $handler->display->display_options['fields']['field_apellido1']['field'] = 'field_apellido1';
  $handler->display->display_options['fields']['field_apellido1']['label'] = '';
  $handler->display->display_options['fields']['field_apellido1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido1']['element_label_colon'] = FALSE;
  /* Campo: Usuario: Segundo apellido */
  $handler->display->display_options['fields']['field_apellido2']['id'] = 'field_apellido2';
  $handler->display->display_options['fields']['field_apellido2']['table'] = 'field_data_field_apellido2';
  $handler->display->display_options['fields']['field_apellido2']['field'] = 'field_apellido2';
  $handler->display->display_options['fields']['field_apellido2']['label'] = '';
  $handler->display->display_options['fields']['field_apellido2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido2']['element_label_colon'] = FALSE;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_nombre] [field_apellido1] [field_apellido2]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Usuario: Nombre (field_nombre) */
  $handler->display->display_options['sorts']['field_nombre_value']['id'] = 'field_nombre_value';
  $handler->display->display_options['sorts']['field_nombre_value']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['sorts']['field_nombre_value']['field'] = 'field_nombre_value';
  /* Sort criterion: Usuario: Primer apellido (field_apellido1) */
  $handler->display->display_options['sorts']['field_apellido1_value']['id'] = 'field_apellido1_value';
  $handler->display->display_options['sorts']['field_apellido1_value']['table'] = 'field_data_field_apellido1';
  $handler->display->display_options['sorts']['field_apellido1_value']['field'] = 'field_apellido1_value';
  /* Sort criterion: Usuario: Segundo apellido (field_apellido2) */
  $handler->display->display_options['sorts']['field_apellido2_value']['id'] = 'field_apellido2_value';
  $handler->display->display_options['sorts']['field_apellido2_value']['table'] = 'field_data_field_apellido2';
  $handler->display->display_options['sorts']['field_apellido2_value']['field'] = 'field_apellido2_value';
  /* Sort criterion: Usuario: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Usuario: Activo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $translatables['enlaces_institucionales'] = array(
    t('Master'),
    t('Enlaces Institucionales'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<a href="admin/people/create" alt="nuevo usuario">Nuevo enlace institucional</a>'),
    t('Usuario'),
    t('Nombre'),
    t('Primer apellido'),
    t('Segundo apellido'),
    t('Institución '),
    t('Teléfono'),
    t('Correo electrónico'),
    t('Page'),
    t('ER Lista nombres'),
    t('Lista de los nombres completos para los usuarios institucionales'),
    t('[field_nombre] [field_apellido1] [field_apellido2]'),
  );
  $export['enlaces_institucionales'] = $view;

  $view = new view();
  $view->name = 'evaluaci_n_compromisos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Evaluación Compromisos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Evaluación Compromisos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Acción a seguir */
  $handler->display->display_options['fields']['field_accion_a_seguir']['id'] = 'field_accion_a_seguir';
  $handler->display->display_options['fields']['field_accion_a_seguir']['table'] = 'field_data_field_accion_a_seguir';
  $handler->display->display_options['fields']['field_accion_a_seguir']['field'] = 'field_accion_a_seguir';
  /* Campo: Contenido: Porcentaje de Avance */
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['id'] = 'field_porcentaje_de_avance_compr';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['table'] = 'field_data_field_porcentaje_de_avance_compr';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['field'] = 'field_porcentaje_de_avance_compr';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Notificar institucional (editable) */
  $handler->display->display_options['fields']['field_notificar_institucional_editable']['id'] = 'field_notificar_institucional_editable';
  $handler->display->display_options['fields']['field_notificar_institucional_editable']['table'] = 'field_data_field_notificar_institucional';
  $handler->display->display_options['fields']['field_notificar_institucional_editable']['field'] = 'field_notificar_institucional_editable';
  $handler->display->display_options['fields']['field_notificar_institucional_editable']['label'] = 'Notificar institucional';
  $handler->display->display_options['fields']['field_notificar_institucional_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_notificar_institucional_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_notificar_institucional_editable']['suppress_description'] = 0;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['group'] = 1;
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Contenido: Notificar institucional (field_notificar_institucional) */
  $handler->display->display_options['filters']['field_notificar_institucional_value']['id'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['table'] = 'field_data_field_notificar_institucional';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['field'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['operator_id'] = 'field_notificar_institucional_value_op';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['label'] = 'Notificar institucional (field_notificar_institucional)';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['operator'] = 'field_notificar_institucional_value_op';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['identifier'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_notificar_institucional_value']['group_info']['label'] = 'Notificar institucional (field_notificar_institucional)';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['group_info']['identifier'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Aprobado',
      'operator' => 'or',
      'value' => array(
        'Aprobado' => 'Aprobado',
      ),
    ),
    2 => array(
      'title' => 'Sin aprobación',
      'operator' => 'or',
      'value' => array(
        'Sin aprobacion' => 'Sin aprobacion',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => array(),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'evaluacion-compromisos';
  $translatables['evaluaci_n_compromisos'] = array(
    t('Master'),
    t('Evaluación Compromisos'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_institucion'),
    t('Nombre'),
    t('Acción a seguir'),
    t('Porcentaje de Avance'),
    t('Notificar institucional'),
    t('Institución'),
    t('Año'),
    t('Notificar institucional (field_notificar_institucional)'),
    t('Page'),
  );
  $export['evaluaci_n_compromisos'] = $view;

  $view = new view();
  $view->name = 'instancias_coordinacion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Instancias de coordinación';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Instancias de coordinación';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_institucion' => 'field_institucion',
    'field_tipo_instancia' => 'field_tipo_instancia',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institucion' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tipo_instancia' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Nueva instancia';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="https://163.178.170.162/monitorsngr/node/add/instancia-coordinacion">Nueva instancia</a>';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre instancia';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Tipo de instancia */
  $handler->display->display_options['fields']['field_primera_lista']['id'] = 'field_primera_lista';
  $handler->display->display_options['fields']['field_primera_lista']['table'] = 'field_data_field_primera_lista';
  $handler->display->display_options['fields']['field_primera_lista']['field'] = 'field_primera_lista';
  $handler->display->display_options['fields']['field_primera_lista']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nombre instancia';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'instancia_coordinacion' => 'instancia_coordinacion',
  );
  /* Filter criterion: Contenido: Tipo de instancia (field_primera_lista) */
  $handler->display->display_options['filters']['field_primera_lista_tid']['id'] = 'field_primera_lista_tid';
  $handler->display->display_options['filters']['field_primera_lista_tid']['table'] = 'field_data_field_primera_lista';
  $handler->display->display_options['filters']['field_primera_lista_tid']['field'] = 'field_primera_lista_tid';
  $handler->display->display_options['filters']['field_primera_lista_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['operator_id'] = 'field_primera_lista_tid_op';
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['label'] = 'Tipo de instancia';
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['operator'] = 'field_primera_lista_tid_op';
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['identifier'] = 'field_primera_lista_tid';
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_primera_lista_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_primera_lista_tid']['vocabulary'] = 'tipo_instancia';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sngr/instancias-coordinacion';
  $translatables['instancias_coordinacion'] = array(
    t('Master'),
    t('Instancias de coordinación'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Nueva instancia'),
    t('<a href="https://163.178.170.162/monitorsngr/node/add/instancia-coordinacion">Nueva instancia</a>'),
    t('Nombre instancia'),
    t('Tipo de instancia'),
    t('Page'),
  );
  $export['instancias_coordinacion'] = $view;

  $view = new view();
  $view->name = 'instituciones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Instituciones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Instituciones del Sistema Nacional de Gestión del Riesgo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_telefono' => 'field_telefono',
    'field_nombre_jerarca' => 'field_nombre_jerarca',
    'field_enlace_institucional' => 'field_enlace_institucional',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_telefono' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nombre_jerarca' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enlace_institucional' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['label'] = 'Nueva institución';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="https://163.178.170.162/monitorsngr/node/add/institucion">Nueva institución</a>';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre institución';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Campo: Campo: Teléfono */
  $handler->display->display_options['fields']['field_telefono']['id'] = 'field_telefono';
  $handler->display->display_options['fields']['field_telefono']['table'] = 'field_data_field_telefono';
  $handler->display->display_options['fields']['field_telefono']['field'] = 'field_telefono';
  $handler->display->display_options['fields']['field_telefono']['delta_offset'] = '0';
  /* Campo: Contenido: Nombre del jerarca */
  $handler->display->display_options['fields']['field_nombre_jerarca']['id'] = 'field_nombre_jerarca';
  $handler->display->display_options['fields']['field_nombre_jerarca']['table'] = 'field_data_field_nombre_jerarca';
  $handler->display->display_options['fields']['field_nombre_jerarca']['field'] = 'field_nombre_jerarca';
  /* Campo: Contenido: Enlace institucional */
  $handler->display->display_options['fields']['field_enlace_institucional']['id'] = 'field_enlace_institucional';
  $handler->display->display_options['fields']['field_enlace_institucional']['table'] = 'field_data_field_enlace_institucional';
  $handler->display->display_options['fields']['field_enlace_institucional']['field'] = 'field_enlace_institucional';
  $handler->display->display_options['fields']['field_enlace_institucional']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_institucional']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_enlace_institucional']['alter']['path'] = 'user/[field_enlace_institucional-target_id]';
  $handler->display->display_options['fields']['field_enlace_institucional']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Contenido: Título */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Nombre';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'institucion' => 'institucion',
  );
  /* Filter criterion: Content revision: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node_revision';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nombre institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sngr/instituciones';
  $translatables['instituciones'] = array(
    t('Master'),
    t('Instituciones del Sistema Nacional de Gestión del Riesgo'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Nueva institución'),
    t('<a href="https://163.178.170.162/monitorsngr/node/add/institucion">Nueva institución</a>'),
    t('Nombre institución'),
    t('Teléfono'),
    t('Nombre del jerarca'),
    t('Enlace institucional'),
    t('Nombre'),
    t('Page'),
  );
  $export['instituciones'] = $view;

  $view = new view();
  $view->name = 'lista_asesorias';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'lista asesorias';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Temas con Necesidad de Asesoría';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['id'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['table'] = 'field_data_field_evaluar_metas';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['field'] = 'field_evaluar_metas_target_id';
  /* Campo: Contenido: Tema de necesidades en asesoría */
  $handler->display->display_options['fields']['field_tema_necesidad_meta']['id'] = 'field_tema_necesidad_meta';
  $handler->display->display_options['fields']['field_tema_necesidad_meta']['table'] = 'field_data_field_tema_necesidad_meta';
  $handler->display->display_options['fields']['field_tema_necesidad_meta']['field'] = 'field_tema_necesidad_meta';
  $handler->display->display_options['fields']['field_tema_necesidad_meta']['relationship'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['fields']['field_tema_necesidad_meta']['delta_offset'] = '0';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromiso';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institución';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año de Creación';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lista-asesorias';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'lista-asesorias-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['lista_asesorias'] = array(
    t('Master'),
    t('Temas con Necesidad de Asesoría'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_institucion'),
    t('Contenido entity referenced from field_evaluar_metas'),
    t('Tema de necesidades en asesoría'),
    t('Compromiso'),
    t('Institución'),
    t('Año de Creación'),
    t('Page'),
    t('Data export'),
  );
  $export['lista_asesorias'] = $view;

  $view = new view();
  $view->name = 'lista_metas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'lista metas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listado de metas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_institucion' => 'field_institucion',
    'field_meta' => 'field_meta',
    'field_codigo_lineamiento' => 'field_codigo_lineamiento',
    'field_codigo_ambito' => 'field_codigo_ambito',
    'field_codigo_eje' => 'field_codigo_eje',
    'field_year_compromiso' => 'field_year_compromiso',
    'field_porcentaje_avance' => 'field_porcentaje_avance',
    'field_status_autoevaluacion' => 'field_status_autoevaluacion',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institucion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meta' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_codigo_lineamiento' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_codigo_ambito' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_codigo_eje' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year_compromiso' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_porcentaje_avance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_autoevaluacion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 0,
    'save_state' => 0,
    'multi_filter' => 1,
    'table_tools' => 1,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => 'full_numbers',
    'length_change' => 0,
    'display_length' => '10',
  );
  $handler->display->display_options['style_options']['hidden_columns'] = array(
    'title' => '0',
    'field_institucion' => '0',
    'field_meta' => '0',
    'field_codigo_lineamiento' => 'hidden',
    'field_codigo_ambito' => 'hidden',
    'field_codigo_eje' => 'hidden',
    'field_year_compromiso' => 'hidden',
    'field_porcentaje_avance' => 'hidden',
    'field_status_autoevaluacion' => 'hidden',
  );
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_item_compromiso_value']['id'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_item_compromiso_value']['table'] = 'field_data_field_item_compromiso';
  $handler->display->display_options['relationships']['field_item_compromiso_value']['field'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_item_compromiso_value']['label'] = 'item_compromiso';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_accion_collect_value']['id'] = 'field_accion_collect_value';
  $handler->display->display_options['relationships']['field_accion_collect_value']['table'] = 'field_data_field_accion_collect';
  $handler->display->display_options['relationships']['field_accion_collect_value']['field'] = 'field_accion_collect_value';
  $handler->display->display_options['relationships']['field_accion_collect_value']['relationship'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_accion_collect_value']['label'] = 'field_accion_collect';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meta_target_id']['id'] = 'field_meta_target_id';
  $handler->display->display_options['relationships']['field_meta_target_id']['table'] = 'field_data_field_meta';
  $handler->display->display_options['relationships']['field_meta_target_id']['field'] = 'field_meta_target_id';
  $handler->display->display_options['relationships']['field_meta_target_id']['relationship'] = 'field_accion_collect_value';
  $handler->display->display_options['relationships']['field_meta_target_id']['label'] = 'field_meta';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromisos';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Campo: Institución  */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Contenido: Meta */
  $handler->display->display_options['fields']['field_meta']['id'] = 'field_meta';
  $handler->display->display_options['fields']['field_meta']['table'] = 'field_data_field_meta';
  $handler->display->display_options['fields']['field_meta']['field'] = 'field_meta';
  $handler->display->display_options['fields']['field_meta']['relationship'] = 'field_accion_collect_value';
  $handler->display->display_options['fields']['field_meta']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_meta']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_meta']['delta_offset'] = '0';
  /* Campo: Contenido: Código Lineamiento */
  $handler->display->display_options['fields']['field_codigo_lineamiento']['id'] = 'field_codigo_lineamiento';
  $handler->display->display_options['fields']['field_codigo_lineamiento']['table'] = 'field_data_field_codigo_lineamiento';
  $handler->display->display_options['fields']['field_codigo_lineamiento']['field'] = 'field_codigo_lineamiento';
  $handler->display->display_options['fields']['field_codigo_lineamiento']['relationship'] = 'field_item_compromiso_value';
  /* Campo: Contenido: Codigo Ambito */
  $handler->display->display_options['fields']['field_codigo_ambito']['id'] = 'field_codigo_ambito';
  $handler->display->display_options['fields']['field_codigo_ambito']['table'] = 'field_data_field_codigo_ambito';
  $handler->display->display_options['fields']['field_codigo_ambito']['field'] = 'field_codigo_ambito';
  $handler->display->display_options['fields']['field_codigo_ambito']['relationship'] = 'field_item_compromiso_value';
  /* Campo: Contenido: Código Eje */
  $handler->display->display_options['fields']['field_codigo_eje']['id'] = 'field_codigo_eje';
  $handler->display->display_options['fields']['field_codigo_eje']['table'] = 'field_data_field_codigo_eje';
  $handler->display->display_options['fields']['field_codigo_eje']['field'] = 'field_codigo_eje';
  $handler->display->display_options['fields']['field_codigo_eje']['relationship'] = 'field_item_compromiso_value';
  /* Campo: Contenido: Año de Creación */
  $handler->display->display_options['fields']['field_year_compromiso']['id'] = 'field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['field'] = 'field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Campo: Contenido: Porcentaje avance */
  $handler->display->display_options['fields']['field_porcentaje_avance']['id'] = 'field_porcentaje_avance';
  $handler->display->display_options['fields']['field_porcentaje_avance']['table'] = 'field_data_field_porcentaje_avance';
  $handler->display->display_options['fields']['field_porcentaje_avance']['field'] = 'field_porcentaje_avance';
  $handler->display->display_options['fields']['field_porcentaje_avance']['relationship'] = 'field_meta_target_id';
  /* Campo: Contenido: Estado autoevaluación */
  $handler->display->display_options['fields']['field_status_autoevaluacion']['id'] = 'field_status_autoevaluacion';
  $handler->display->display_options['fields']['field_status_autoevaluacion']['table'] = 'field_data_field_status_autoevaluacion';
  $handler->display->display_options['fields']['field_status_autoevaluacion']['field'] = 'field_status_autoevaluacion';
  $handler->display->display_options['fields']['field_status_autoevaluacion']['relationship'] = 'field_meta_target_id';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lista-metas';
  $translatables['lista_metas'] = array(
    t('Master'),
    t('Listado de metas'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('item_compromiso'),
    t('field_accion_collect'),
    t('field_meta'),
    t('Compromisos'),
    t('Institución '),
    t('Meta'),
    t('Código Lineamiento'),
    t('Codigo Ambito'),
    t('Código Eje'),
    t('Año de Creación'),
    t('Porcentaje avance'),
    t('Estado autoevaluación'),
    t('Page'),
  );
  $export['lista_metas'] = $view;

  $view = new view();
  $view->name = 'lista_productos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'lista productos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Productos Evaluados';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'title' => 'title',
    'name' => 'name',
    'field_descripc_fuente_verifica' => 'field_descripc_fuente_verifica',
    'field_prod_fuente_verifica' => 'field_prod_fuente_verifica',
    'field_year_compromiso' => 'field_year_compromiso',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_descripc_fuente_verifica' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_prod_fuente_verifica' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year_compromiso' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['id'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['table'] = 'field_data_field_evaluar_metas';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['field'] = 'field_evaluar_metas_target_id';
  /* Relationship: Contenido: Productos a evaluar (field_evaluar_producto) */
  $handler->display->display_options['relationships']['field_evaluar_producto_value']['id'] = 'field_evaluar_producto_value';
  $handler->display->display_options['relationships']['field_evaluar_producto_value']['table'] = 'field_data_field_evaluar_producto';
  $handler->display->display_options['relationships']['field_evaluar_producto_value']['field'] = 'field_evaluar_producto_value';
  $handler->display->display_options['relationships']['field_evaluar_producto_value']['relationship'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['relationships']['field_evaluar_producto_value']['delta'] = '-1';
  /* Relationship: Field collection item: Producto (field_producto) */
  $handler->display->display_options['relationships']['field_producto_tid']['id'] = 'field_producto_tid';
  $handler->display->display_options['relationships']['field_producto_tid']['table'] = 'field_data_field_producto';
  $handler->display->display_options['relationships']['field_producto_tid']['field'] = 'field_producto_tid';
  $handler->display->display_options['relationships']['field_producto_tid']['relationship'] = 'field_evaluar_producto_value';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Campo: Field collection item: Producto */
  $handler->display->display_options['fields']['field_producto']['id'] = 'field_producto';
  $handler->display->display_options['fields']['field_producto']['table'] = 'field_data_field_producto';
  $handler->display->display_options['fields']['field_producto']['field'] = 'field_producto';
  $handler->display->display_options['fields']['field_producto']['relationship'] = 'field_meta_target_id';
  $handler->display->display_options['fields']['field_producto']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_producto']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_producto']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_producto']['multi_type'] = 'ul';
  /* Campo: Field collection item: Descripción de la Fuente de Verificación */
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['id'] = 'field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['table'] = 'field_data_field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['field'] = 'field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['relationship'] = 'field_producto_target_id';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['label'] = 'Descripción Fuente';
  /* Campo: Campo: Institución  */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'link' => 1,
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromiso';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año de Creación';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institución';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromiso';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_producto_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Producto';
  /* Campo: Field collection item: Descripción de la Fuente de Verificación */
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['id'] = 'field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['table'] = 'field_data_field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['field'] = 'field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['relationship'] = 'field_evaluar_producto_value';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['label'] = 'Descripcion fuente de Verificación';
  /* Campo: Campo: Fuente de verificación */
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['id'] = 'field_prod_fuente_verifica';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['table'] = 'field_data_field_prod_fuente_verifica';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['field'] = 'field_prod_fuente_verifica';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['relationship'] = 'field_evaluar_producto_value';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['type'] = 'media';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['delta_offset'] = '0';
  /* Campo: Contenido: Año de Creación */
  $handler->display->display_options['fields']['field_year_compromiso']['id'] = 'field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['field'] = 'field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Campo: Campo: Código Producto */
  $handler->display->display_options['fields']['field_cod_producto_meta']['id'] = 'field_cod_producto_meta';
  $handler->display->display_options['fields']['field_cod_producto_meta']['table'] = 'field_data_field_cod_producto_meta';
  $handler->display->display_options['fields']['field_cod_producto_meta']['field'] = 'field_cod_producto_meta';
  $handler->display->display_options['fields']['field_cod_producto_meta']['relationship'] = 'field_producto_tid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año de Creación';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_producto_tid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Producto';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['path'] = 'lista-productos';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institucion';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromiso';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_producto_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Producto';
  /* Campo: Field collection item: Descripción de la Fuente de Verificación */
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['id'] = 'field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['table'] = 'field_data_field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['field'] = 'field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['relationship'] = 'field_evaluar_producto_value';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['label'] = 'Descripcion fuente de verificacion';
  /* Campo: Campo: Fuente de verificación */
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['id'] = 'field_prod_fuente_verifica';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['table'] = 'field_data_field_prod_fuente_verifica';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['field'] = 'field_prod_fuente_verifica';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['relationship'] = 'field_evaluar_producto_value';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['type'] = 'media';
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_prod_fuente_verifica']['delta_offset'] = '0';
  /* Campo: Contenido: Año de Creación */
  $handler->display->display_options['fields']['field_year_compromiso']['id'] = 'field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['field'] = 'field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Campo: Campo: Código Producto */
  $handler->display->display_options['fields']['field_cod_producto_meta']['id'] = 'field_cod_producto_meta';
  $handler->display->display_options['fields']['field_cod_producto_meta']['table'] = 'field_data_field_cod_producto_meta';
  $handler->display->display_options['fields']['field_cod_producto_meta']['field'] = 'field_cod_producto_meta';
  $handler->display->display_options['fields']['field_cod_producto_meta']['relationship'] = 'field_producto_tid';
  $handler->display->display_options['path'] = 'lista-productos-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['lista_productos'] = array(
    t('Master'),
    t('Productos Evaluados'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_evaluar_metas'),
    t('field collection item from field_evaluar_producto'),
    t('term from field_producto'),
    t('Contenido entity referenced from field_institucion'),
    t('Producto'),
    t('Descripción Fuente'),
    t('Institución '),
    t('Compromiso'),
    t('Año de Creación'),
    t('Page'),
    t('Institución'),
    t('Descripcion fuente de Verificación'),
    t('Fuente de verificación'),
    t('Código Producto'),
    t('Data export'),
    t('Institucion'),
    t('Descripcion fuente de verificacion'),
  );
  $export['lista_productos'] = $view;

  $view = new view();
  $view->name = 'listado_aspectos_positivos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'listado aspectos positivos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'listado aspectos positivos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_aspecto_positivo' => 'field_aspecto_positivo',
    'title' => 'title',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_aspecto_positivo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['id'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['table'] = 'field_data_field_evaluar_metas';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['field'] = 'field_evaluar_metas_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Campo: Contenido: Aspecto positivo */
  $handler->display->display_options['fields']['field_aspecto_positivo']['id'] = 'field_aspecto_positivo';
  $handler->display->display_options['fields']['field_aspecto_positivo']['table'] = 'field_data_field_aspecto_positivo';
  $handler->display->display_options['fields']['field_aspecto_positivo']['field'] = 'field_aspecto_positivo';
  $handler->display->display_options['fields']['field_aspecto_positivo']['relationship'] = 'field_evaluar_metas_target_id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromiso';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institución';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año de Creación';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listado-aspectos-positivos';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'lista-aspectos-positivos-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['listado_aspectos_positivos'] = array(
    t('Master'),
    t('listado aspectos positivos'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_evaluar_metas'),
    t('Contenido entity referenced from field_institucion'),
    t('Aspecto positivo'),
    t('Compromiso'),
    t('Institución'),
    t('Año de Creación'),
    t('Page'),
    t('Data export'),
  );
  $export['listado_aspectos_positivos'] = $view;

  $view = new view();
  $view->name = 'listado_de_revisiones_de_compromisos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listado de revisiones de compromisos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listado de revisiones de compromisos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Campo: Institución  */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'link' => 1,
  );
  /* Campo: Contenido: Notificar institucional */
  $handler->display->display_options['fields']['field_notificar_institucional']['id'] = 'field_notificar_institucional';
  $handler->display->display_options['fields']['field_notificar_institucional']['table'] = 'field_data_field_notificar_institucional';
  $handler->display->display_options['fields']['field_notificar_institucional']['field'] = 'field_notificar_institucional';
  $handler->display->display_options['fields']['field_notificar_institucional']['label'] = 'Estado';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año de Creación';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Notificar institucional (field_notificar_institucional) */
  $handler->display->display_options['filters']['field_notificar_institucional_value']['id'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['table'] = 'field_data_field_notificar_institucional';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['field'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['operator_id'] = 'field_notificar_institucional_value_op';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['label'] = 'Estado';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['operator'] = 'field_notificar_institucional_value_op';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['identifier'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listado-de-revisiones-de-compromisos';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'lista-revisiones-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['listado_de_revisiones_de_compromisos'] = array(
    t('Master'),
    t('Listado de revisiones de compromisos'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_institucion'),
    t('Título'),
    t('Institución '),
    t('Estado'),
    t('Año de Creación'),
    t('Institución'),
    t('Page'),
    t('Data export'),
  );
  $export['listado_de_revisiones_de_compromisos'] = $view;

  $view = new view();
  $view->name = 'listado_evaluacion_metas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Listado Evaluación de Metas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Metas en Evaluación';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'title_2' => 'title_2',
    'name' => 'name',
    'name_1' => 'name_1',
    'name_2' => 'name_2',
    'name_3' => 'name_3',
    'name_4' => 'name_4',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['id'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['table'] = 'field_data_field_evaluar_metas';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['field'] = 'field_evaluar_metas_target_id';
  /* Relationship: Contenido: Meta (field_meta_tax) */
  $handler->display->display_options['relationships']['field_meta_tax_tid']['id'] = 'field_meta_tax_tid';
  $handler->display->display_options['relationships']['field_meta_tax_tid']['table'] = 'field_data_field_meta_tax';
  $handler->display->display_options['relationships']['field_meta_tax_tid']['field'] = 'field_meta_tax_tid';
  $handler->display->display_options['relationships']['field_meta_tax_tid']['relationship'] = 'field_evaluar_metas_target_id';
  /* Relationship: Término de taxonomía: Acción Estratégica (field_accion_estrategica) */
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['id'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['field'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['relationship'] = 'field_meta_tax_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eje_target_id']['id'] = 'field_eje_target_id';
  $handler->display->display_options['relationships']['field_eje_target_id']['table'] = 'field_data_field_eje';
  $handler->display->display_options['relationships']['field_eje_target_id']['field'] = 'field_eje_target_id';
  $handler->display->display_options['relationships']['field_eje_target_id']['relationship'] = 'field_accion_estrategica_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id_1']['id'] = 'field_evaluar_metas_target_id_1';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id_1']['table'] = 'field_data_field_evaluar_metas';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id_1']['field'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id_1']['label'] = 'Contenido entity referenced from field_evaluar_metas_2';
  /* Relationship: Contenido: Meta (field_meta_tax) */
  $handler->display->display_options['relationships']['field_meta_tax_tid_1']['id'] = 'field_meta_tax_tid_1';
  $handler->display->display_options['relationships']['field_meta_tax_tid_1']['table'] = 'field_data_field_meta_tax';
  $handler->display->display_options['relationships']['field_meta_tax_tid_1']['field'] = 'field_meta_tax_tid';
  $handler->display->display_options['relationships']['field_meta_tax_tid_1']['relationship'] = 'field_evaluar_metas_target_id_1';
  $handler->display->display_options['relationships']['field_meta_tax_tid_1']['label'] = 'term from field_meta_tax_2';
  /* Relationship: Término de taxonomía: Acción Estratégica (field_accion_estrategica) */
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['id'] = 'field_accion_estrategica_tid_1';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['field'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['relationship'] = 'field_meta_tax_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['label'] = 'term from field_accion_estrategica_2';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ambito_target_id']['id'] = 'field_ambito_target_id';
  $handler->display->display_options['relationships']['field_ambito_target_id']['table'] = 'field_data_field_ambito';
  $handler->display->display_options['relationships']['field_ambito_target_id']['field'] = 'field_ambito_target_id';
  $handler->display->display_options['relationships']['field_ambito_target_id']['relationship'] = 'field_accion_estrategica_tid_1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id_2']['id'] = 'field_evaluar_metas_target_id_2';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id_2']['table'] = 'field_data_field_evaluar_metas';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id_2']['field'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id_2']['label'] = 'Contenido entity referenced from field_evaluar_metas_3';
  /* Relationship: Contenido: Meta (field_meta_tax) */
  $handler->display->display_options['relationships']['field_meta_tax_tid_2']['id'] = 'field_meta_tax_tid_2';
  $handler->display->display_options['relationships']['field_meta_tax_tid_2']['table'] = 'field_data_field_meta_tax';
  $handler->display->display_options['relationships']['field_meta_tax_tid_2']['field'] = 'field_meta_tax_tid';
  $handler->display->display_options['relationships']['field_meta_tax_tid_2']['relationship'] = 'field_evaluar_metas_target_id_2';
  $handler->display->display_options['relationships']['field_meta_tax_tid_2']['label'] = 'term from field_meta_tax_3';
  /* Relationship: Término de taxonomía: Acción Estratégica (field_accion_estrategica) */
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['id'] = 'field_accion_estrategica_tid_2';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['field'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['relationship'] = 'field_meta_tax_tid_2';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['label'] = 'term from field_accion_estrategica_3';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['id'] = 'field_lineamiento_target_id';
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['table'] = 'field_data_field_lineamiento';
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['field'] = 'field_lineamiento_target_id';
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['relationship'] = 'field_accion_estrategica_tid_2';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institución';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'Evaluación de Meta';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_meta_tax_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Meta tax';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Acción Estratégica';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_eje_target_id';
  $handler->display->display_options['fields']['name_2']['label'] = 'Eje';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_3']['id'] = 'name_3';
  $handler->display->display_options['fields']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_3']['field'] = 'name';
  $handler->display->display_options['fields']['name_3']['relationship'] = 'field_ambito_target_id';
  $handler->display->display_options['fields']['name_3']['label'] = 'Ámbito';
  $handler->display->display_options['fields']['name_3']['exclude'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_4']['id'] = 'name_4';
  $handler->display->display_options['fields']['name_4']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_4']['field'] = 'name';
  $handler->display->display_options['fields']['name_4']['relationship'] = 'field_lineamiento_target_id';
  $handler->display->display_options['fields']['name_4']['label'] = 'Lineamiento';
  $handler->display->display_options['fields']['name_4']['exclude'] = TRUE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Compromiso';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_eje_target_id';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Eje';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name_2';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'field_ambito_target_id';
  $handler->display->display_options['filters']['name_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_1']['group'] = 1;
  $handler->display->display_options['filters']['name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_1']['expose']['operator_id'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['label'] = 'Ámbito';
  $handler->display->display_options['filters']['name_1']['expose']['operator'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['identifier'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_field'] = 'name_3';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['relationship'] = 'field_lineamiento_target_id';
  $handler->display->display_options['filters']['name_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_2']['group'] = 1;
  $handler->display->display_options['filters']['name_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_2']['expose']['operator_id'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['label'] = 'Lineamiento';
  $handler->display->display_options['filters']['name_2']['expose']['operator'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['identifier'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_field'] = 'name_4';
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name_3']['id'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_3']['field'] = 'name';
  $handler->display->display_options['filters']['name_3']['relationship'] = 'field_meta_tax_tid';
  $handler->display->display_options['filters']['name_3']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_3']['group'] = 1;
  $handler->display->display_options['filters']['name_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_3']['expose']['operator_id'] = 'name_3_op';
  $handler->display->display_options['filters']['name_3']['expose']['label'] = 'Meta';
  $handler->display->display_options['filters']['name_3']['expose']['operator'] = 'name_3_op';
  $handler->display->display_options['filters']['name_3']['expose']['identifier'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Contenido: Estado (field_estado) */
  $handler->display->display_options['filters']['field_estado_value']['id'] = 'field_estado_value';
  $handler->display->display_options['filters']['field_estado_value']['table'] = 'field_data_field_estado';
  $handler->display->display_options['filters']['field_estado_value']['field'] = 'field_estado_value';
  $handler->display->display_options['filters']['field_estado_value']['relationship'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['filters']['field_estado_value']['group'] = 1;
  $handler->display->display_options['filters']['field_estado_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_estado_value']['expose']['operator_id'] = 'field_estado_value_op';
  $handler->display->display_options['filters']['field_estado_value']['expose']['label'] = 'Estado';
  $handler->display->display_options['filters']['field_estado_value']['expose']['operator'] = 'field_estado_value_op';
  $handler->display->display_options['filters']['field_estado_value']['expose']['identifier'] = 'field_estado_value';
  $handler->display->display_options['filters']['field_estado_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Contenido: Porcentaje avance (field_porcentaje_avance) */
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['id'] = 'field_porcentaje_avance_value';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['table'] = 'field_data_field_porcentaje_avance';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['field'] = 'field_porcentaje_avance_value';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['relationship'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['group'] = 1;
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['operator_id'] = 'field_porcentaje_avance_value_op';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['label'] = 'Avance';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['operator'] = 'field_porcentaje_avance_value_op';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['identifier'] = 'field_porcentaje_avance_value';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listado-evaluacion-metas';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'listado-evaluacion-metas-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['listado_evaluacion_metas'] = array(
    t('Master'),
    t('Metas en Evaluación'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_institucion'),
    t('Contenido entity referenced from field_evaluar_metas'),
    t('term from field_meta_tax'),
    t('term from field_accion_estrategica'),
    t('Término de taxonomía entity referenced from field_eje'),
    t('Contenido entity referenced from field_evaluar_metas_2'),
    t('term from field_meta_tax_2'),
    t('term from field_accion_estrategica_2'),
    t('Término de taxonomía entity referenced from field_ambito'),
    t('Contenido entity referenced from field_evaluar_metas_3'),
    t('term from field_meta_tax_3'),
    t('term from field_accion_estrategica_3'),
    t('Término de taxonomía entity referenced from field_lineamiento'),
    t('Título'),
    t('Institución'),
    t('Evaluación de Meta'),
    t('Meta tax'),
    t('Acción Estratégica'),
    t('Eje'),
    t('Ámbito'),
    t('Lineamiento'),
    t('Compromiso'),
    t('Meta'),
    t('Estado'),
    t('Avance'),
    t('Page'),
    t('Data export'),
  );
  $export['listado_evaluacion_metas'] = $view;

  $view = new view();
  $view->name = 'listado_metas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'listado metas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'listado metas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_item_compromiso_value']['id'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_item_compromiso_value']['table'] = 'field_data_field_item_compromiso';
  $handler->display->display_options['relationships']['field_item_compromiso_value']['field'] = 'field_item_compromiso_value';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_accion_collect_value']['id'] = 'field_accion_collect_value';
  $handler->display->display_options['relationships']['field_accion_collect_value']['table'] = 'field_data_field_accion_collect';
  $handler->display->display_options['relationships']['field_accion_collect_value']['field'] = 'field_accion_collect_value';
  $handler->display->display_options['relationships']['field_accion_collect_value']['relationship'] = 'field_item_compromiso_value';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meta_target_id']['id'] = 'field_meta_target_id';
  $handler->display->display_options['relationships']['field_meta_target_id']['table'] = 'field_data_field_meta';
  $handler->display->display_options['relationships']['field_meta_target_id']['field'] = 'field_meta_target_id';
  $handler->display->display_options['relationships']['field_meta_target_id']['relationship'] = 'field_accion_collect_value';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_item_compromiso_value_1']['id'] = 'field_item_compromiso_value_1';
  $handler->display->display_options['relationships']['field_item_compromiso_value_1']['table'] = 'field_data_field_item_compromiso';
  $handler->display->display_options['relationships']['field_item_compromiso_value_1']['field'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_item_compromiso_value_1']['label'] = 'item_compromiso_lineamiento';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_item_compromiso_value_2']['id'] = 'field_item_compromiso_value_2';
  $handler->display->display_options['relationships']['field_item_compromiso_value_2']['table'] = 'field_data_field_item_compromiso';
  $handler->display->display_options['relationships']['field_item_compromiso_value_2']['field'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_item_compromiso_value_2']['label'] = 'item_compromiso_ambito';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_item_compromiso_value_3']['id'] = 'field_item_compromiso_value_3';
  $handler->display->display_options['relationships']['field_item_compromiso_value_3']['table'] = 'field_data_field_item_compromiso';
  $handler->display->display_options['relationships']['field_item_compromiso_value_3']['field'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_item_compromiso_value_3']['label'] = 'item_compromiso_eje';
  /* Campo: Contenido: Meta */
  $handler->display->display_options['fields']['field_meta']['id'] = 'field_meta';
  $handler->display->display_options['fields']['field_meta']['table'] = 'field_data_field_meta';
  $handler->display->display_options['fields']['field_meta']['field'] = 'field_meta';
  $handler->display->display_options['fields']['field_meta']['relationship'] = 'field_accion_collect_value';
  $handler->display->display_options['fields']['field_meta']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_meta']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_meta']['delta_offset'] = '0';
  /* Campo: Campo: Institución  */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'link' => 1,
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromiso';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['group'] = 1;
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año de Creación';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Código Eje (field_codigo_eje) */
  $handler->display->display_options['filters']['field_codigo_eje_tid']['id'] = 'field_codigo_eje_tid';
  $handler->display->display_options['filters']['field_codigo_eje_tid']['table'] = 'field_data_field_codigo_eje';
  $handler->display->display_options['filters']['field_codigo_eje_tid']['field'] = 'field_codigo_eje_tid';
  $handler->display->display_options['filters']['field_codigo_eje_tid']['relationship'] = 'field_item_compromiso_value_3';
  $handler->display->display_options['filters']['field_codigo_eje_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_codigo_eje_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_codigo_eje_tid']['expose']['operator_id'] = 'field_codigo_eje_tid_op';
  $handler->display->display_options['filters']['field_codigo_eje_tid']['expose']['label'] = 'Eje';
  $handler->display->display_options['filters']['field_codigo_eje_tid']['expose']['operator'] = 'field_codigo_eje_tid_op';
  $handler->display->display_options['filters']['field_codigo_eje_tid']['expose']['identifier'] = 'field_codigo_eje_tid';
  $handler->display->display_options['filters']['field_codigo_eje_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_codigo_eje_tid']['vocabulary'] = 'eje';
  /* Filter criterion: Contenido: Codigo Ambito (field_codigo_ambito) */
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['id'] = 'field_codigo_ambito_tid';
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['table'] = 'field_data_field_codigo_ambito';
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['field'] = 'field_codigo_ambito_tid';
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['relationship'] = 'field_item_compromiso_value_2';
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['expose']['operator_id'] = 'field_codigo_ambito_tid_op';
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['expose']['label'] = 'Ambito';
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['expose']['operator'] = 'field_codigo_ambito_tid_op';
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['expose']['identifier'] = 'field_codigo_ambito_tid';
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_codigo_ambito_tid']['vocabulary'] = 'ambito';
  /* Filter criterion: Contenido: Código Lineamiento (field_codigo_lineamiento) */
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['id'] = 'field_codigo_lineamiento_tid';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['table'] = 'field_data_field_codigo_lineamiento';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['field'] = 'field_codigo_lineamiento_tid';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['relationship'] = 'field_item_compromiso_value_1';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['expose']['operator_id'] = 'field_codigo_lineamiento_tid_op';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['expose']['label'] = 'Lineamiento';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['expose']['operator'] = 'field_codigo_lineamiento_tid_op';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['expose']['identifier'] = 'field_codigo_lineamiento_tid';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['group_info']['label'] = 'Lineamiento (field_codigo_lineamiento)';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['group_info']['identifier'] = 'field_codigo_lineamiento_tid';
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['field_codigo_lineamiento_tid']['vocabulary'] = 'lineamiento';
  /* Filter criterion: Contenido: Estado (field_estado) */
  $handler->display->display_options['filters']['field_estado_value']['id'] = 'field_estado_value';
  $handler->display->display_options['filters']['field_estado_value']['table'] = 'field_data_field_estado';
  $handler->display->display_options['filters']['field_estado_value']['field'] = 'field_estado_value';
  $handler->display->display_options['filters']['field_estado_value']['relationship'] = 'field_meta_target_id';
  $handler->display->display_options['filters']['field_estado_value']['group'] = 1;
  $handler->display->display_options['filters']['field_estado_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_estado_value']['expose']['operator_id'] = 'field_estado_value_op';
  $handler->display->display_options['filters']['field_estado_value']['expose']['label'] = 'Estado';
  $handler->display->display_options['filters']['field_estado_value']['expose']['operator'] = 'field_estado_value_op';
  $handler->display->display_options['filters']['field_estado_value']['expose']['identifier'] = 'field_estado_value';
  $handler->display->display_options['filters']['field_estado_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Porcentaje avance (field_porcentaje_avance) */
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['id'] = 'field_porcentaje_avance_value';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['table'] = 'field_data_field_porcentaje_avance';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['field'] = 'field_porcentaje_avance_value';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['relationship'] = 'field_meta_target_id';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['operator_id'] = 'field_porcentaje_avance_value_op';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['label'] = 'Nivel de avance';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['operator'] = 'field_porcentaje_avance_value_op';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['identifier'] = 'field_porcentaje_avance_value';
  $handler->display->display_options['filters']['field_porcentaje_avance_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Tipo de instancia (field_primera_lista) */
  $handler->display->display_options['filters']['field_primera_lista_tid']['id'] = 'field_primera_lista_tid';
  $handler->display->display_options['filters']['field_primera_lista_tid']['table'] = 'field_data_field_primera_lista';
  $handler->display->display_options['filters']['field_primera_lista_tid']['field'] = 'field_primera_lista_tid';
  $handler->display->display_options['filters']['field_primera_lista_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['operator_id'] = 'field_primera_lista_tid_op';
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['label'] = 'Tipo de instancia';
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['operator'] = 'field_primera_lista_tid_op';
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['identifier'] = 'field_primera_lista_tid';
  $handler->display->display_options['filters']['field_primera_lista_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_primera_lista_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_primera_lista_tid']['vocabulary'] = 'tipo_instancia';
  $handler->display->display_options['filters']['field_primera_lista_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listado-metas';
  $translatables['listado_metas'] = array(
    t('Master'),
    t('listado metas'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('field_item_compromiso_value'),
    t('field_accion_collect_value'),
    t('Contenido entity referenced from field_meta'),
    t('Contenido entity referenced from field_institucion'),
    t('item_compromiso_lineamiento'),
    t('item_compromiso_ambito'),
    t('item_compromiso_eje'),
    t('Meta'),
    t('Institución '),
    t('Compromiso'),
    t('Año de Creación'),
    t('Institución'),
    t('Eje'),
    t('Ambito'),
    t('Lineamiento'),
    t('Lineamiento (field_codigo_lineamiento)'),
    t('Estado'),
    t('Nivel de avance'),
    t('Tipo de instancia'),
    t('Page'),
  );
  $export['listado_metas'] = $view;

  $view = new view();
  $view->name = 'listado_obstaculos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'listado obstaculos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Obstáculos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['id'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['table'] = 'field_data_field_evaluar_metas';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['field'] = 'field_evaluar_metas_target_id';
  /* Campo: Contenido: Obstáculo */
  $handler->display->display_options['fields']['field_obstaculo']['id'] = 'field_obstaculo';
  $handler->display->display_options['fields']['field_obstaculo']['table'] = 'field_data_field_obstaculo';
  $handler->display->display_options['fields']['field_obstaculo']['field'] = 'field_obstaculo';
  $handler->display->display_options['fields']['field_obstaculo']['relationship'] = 'field_evaluar_metas_target_id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromiso';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institución';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año de Creación';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listado-obstaculos';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'lista-obstaculos-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['listado_obstaculos'] = array(
    t('Master'),
    t('Obstáculos'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_institucion'),
    t('Contenido entity referenced from field_evaluar_metas'),
    t('Obstáculo'),
    t('Compromiso'),
    t('Institución'),
    t('Año de Creación'),
    t('Page'),
    t('Data export'),
  );
  $export['listado_obstaculos'] = $view;

  $view = new view();
  $view->name = 'matriz_cumplimiento';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Matriz de cumplimiento';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Matriz de cumplimiento';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: ID del término */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'parent';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Sort criterion: Término de taxonomía: Código (field_codigo) */
  $handler->display->display_options['sorts']['field_codigo_value']['id'] = 'field_codigo_value';
  $handler->display->display_options['sorts']['field_codigo_value']['table'] = 'field_data_field_codigo';
  $handler->display->display_options['sorts']['field_codigo_value']['field'] = 'field_codigo_value';
  /* Sort criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ambito_eje_lineamiento_accion' => 'ambito_eje_lineamiento_accion',
  );
  /* Filter criterion: Término de taxonomía: Tipo (field_tipo_aela) */
  $handler->display->display_options['filters']['field_tipo_aela_value']['id'] = 'field_tipo_aela_value';
  $handler->display->display_options['filters']['field_tipo_aela_value']['table'] = 'field_data_field_tipo_aela';
  $handler->display->display_options['filters']['field_tipo_aela_value']['field'] = 'field_tipo_aela_value';
  $handler->display->display_options['filters']['field_tipo_aela_value']['value'] = array(
    1 => '1',
  );

  /* Display: Ámbito */
  $handler = $view->new_display('page', 'Ámbito', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Configuración de un compromiso';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="https://163.178.170.162/monitorsngr/admin/structure/taxonomy/ambito_eje_lineamiento_accion">Actualizar taxonomía</a>
<p>&nbsp;</p>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['name']['element_class'] = 'taxonomy-ambito';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Campo: Global: Ver */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'matriz_cumplimiento';
  $handler->display->display_options['fields']['view']['display'] = 'attachment_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!name]';
  $handler->display->display_options['path'] = 'sngr/matriz-cumplimiento/taxonomia';

  /* Display: Eje */
  $handler = $view->new_display('attachment', 'Eje', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['name']['element_class'] = 'taxonomy-eje';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Campo: Global: Ver */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'matriz_cumplimiento';
  $handler->display->display_options['fields']['view']['display'] = 'attachment_2';
  $handler->display->display_options['fields']['view']['arguments'] = '[!name]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Término de taxonomía: Nombre */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ambito_eje_lineamiento_accion' => 'ambito_eje_lineamiento_accion',
  );
  /* Filter criterion: Término de taxonomía: Tipo (field_tipo_aela) */
  $handler->display->display_options['filters']['field_tipo_aela_value']['id'] = 'field_tipo_aela_value';
  $handler->display->display_options['filters']['field_tipo_aela_value']['table'] = 'field_data_field_tipo_aela';
  $handler->display->display_options['filters']['field_tipo_aela_value']['field'] = 'field_tipo_aela_value';
  $handler->display->display_options['filters']['field_tipo_aela_value']['value'] = array(
    2 => '2',
  );

  /* Display: Lineamiento */
  $handler = $view->new_display('attachment', 'Lineamiento', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_class'] = 'taxonomy-lineamiento';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Campo: Global: Ver */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'matriz_cumplimiento';
  $handler->display->display_options['fields']['view']['display'] = 'attachment_3';
  $handler->display->display_options['fields']['view']['arguments'] = '[!name]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Término de taxonomía: Nombre */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ambito_eje_lineamiento_accion' => 'ambito_eje_lineamiento_accion',
  );
  /* Filter criterion: Término de taxonomía: Tipo (field_tipo_aela) */
  $handler->display->display_options['filters']['field_tipo_aela_value']['id'] = 'field_tipo_aela_value';
  $handler->display->display_options['filters']['field_tipo_aela_value']['table'] = 'field_data_field_tipo_aela';
  $handler->display->display_options['filters']['field_tipo_aela_value']['field'] = 'field_tipo_aela_value';
  $handler->display->display_options['filters']['field_tipo_aela_value']['value'] = array(
    3 => '3',
  );

  /* Display: Acción */
  $handler = $view->new_display('attachment', 'Acción', 'attachment_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Término de taxonomía: Término padre */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['name']['element_class'] = 'taxonomy-accion';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Término de taxonomía: Nombre */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'ambito_eje_lineamiento_accion' => 'ambito_eje_lineamiento_accion',
  );
  /* Filter criterion: Término de taxonomía: Tipo (field_tipo_aela) */
  $handler->display->display_options['filters']['field_tipo_aela_value']['id'] = 'field_tipo_aela_value';
  $handler->display->display_options['filters']['field_tipo_aela_value']['table'] = 'field_data_field_tipo_aela';
  $handler->display->display_options['filters']['field_tipo_aela_value']['field'] = 'field_tipo_aela_value';
  $handler->display->display_options['filters']['field_tipo_aela_value']['value'] = array(
    4 => '4',
  );
  $translatables['matriz_cumplimiento'] = array(
    t('Master'),
    t('Matriz de cumplimiento'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Padre'),
    t('.'),
    t(','),
    t('Ámbito'),
    t('Configuración de un compromiso'),
    t('<a href="https://163.178.170.162/monitorsngr/admin/structure/taxonomy/ambito_eje_lineamiento_accion">Actualizar taxonomía</a>
<p>&nbsp;</p>'),
    t('Eje'),
    t('Todo'),
    t('Lineamiento'),
    t('Acción'),
  );
  $export['matriz_cumplimiento'] = $view;

  $view = new view();
  $view->name = 'matriz_cumplimiento_lista';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Matriz de cumplimiento (Lista)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listado de compromisos institucionales';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="https://163.178.170.162/monitorsngr/node/add/matriz-cumplimiento">Nuevo compromiso</a>';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'matriz_cumplimiento' => 'matriz_cumplimiento',
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nombre compromiso';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sngr/matriz-cumplimiento';
  $translatables['matriz_cumplimiento_lista'] = array(
    t('Master'),
    t('Listado de compromisos institucionales'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<a href="https://163.178.170.162/monitorsngr/node/add/matriz-cumplimiento">Nuevo compromiso</a>'),
    t('Título'),
    t('Nombre compromiso'),
    t('Page'),
  );
  $export['matriz_cumplimiento_lista'] = $view;

  $view = new view();
  $view->name = 'metas_generales';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Metas Generales';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Metas Generales';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_meta_avance_global',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'title' => 'title',
    'field_porcentaje_de_avance_compr' => 'field_porcentaje_de_avance_compr',
    'name' => 'name',
    'field_porcentaje_avance' => 'field_porcentaje_avance',
    'expression' => 'expression',
    'field_meta_avance_global' => 'field_meta_avance_global',
    'field_year_compromiso' => 'field_year_compromiso',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_porcentaje_de_avance_compr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_porcentaje_avance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'expression' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meta_avance_global' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_year_compromiso' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['id'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['table'] = 'field_data_field_evaluar_metas';
  $handler->display->display_options['relationships']['field_evaluar_metas_target_id']['field'] = 'field_evaluar_metas_target_id';
  /* Relationship: Contenido: Meta (field_meta_tax) */
  $handler->display->display_options['relationships']['field_meta_tax_tid']['id'] = 'field_meta_tax_tid';
  $handler->display->display_options['relationships']['field_meta_tax_tid']['table'] = 'field_data_field_meta_tax';
  $handler->display->display_options['relationships']['field_meta_tax_tid']['field'] = 'field_meta_tax_tid';
  $handler->display->display_options['relationships']['field_meta_tax_tid']['relationship'] = 'field_evaluar_metas_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institución';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromiso';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Porcentaje de Avance */
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['id'] = 'field_porcentaje_de_avance_compr';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['table'] = 'field_data_field_porcentaje_de_avance_compr';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['field'] = 'field_porcentaje_de_avance_compr';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['label'] = 'Avance del Compromiso';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_meta_tax_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Meta';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Campo: Contenido: Porcentaje avance */
  $handler->display->display_options['fields']['field_porcentaje_avance']['id'] = 'field_porcentaje_avance';
  $handler->display->display_options['fields']['field_porcentaje_avance']['table'] = 'field_data_field_porcentaje_avance';
  $handler->display->display_options['fields']['field_porcentaje_avance']['field'] = 'field_porcentaje_avance';
  $handler->display->display_options['fields']['field_porcentaje_avance']['relationship'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['fields']['field_porcentaje_avance']['label'] = 'Avance de la Meta en Compromiso';
  $handler->display->display_options['fields']['field_porcentaje_avance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_porcentaje_avance']['empty'] = '1';
  $handler->display->display_options['fields']['field_porcentaje_avance']['type'] = 'list_key';
  /* Campo: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Promedio de avance de la meta';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_porcentaje_avance] - 1) * 25';
  /* Campo: Término de taxonomía: Avance Global */
  $handler->display->display_options['fields']['field_meta_avance_global']['id'] = 'field_meta_avance_global';
  $handler->display->display_options['fields']['field_meta_avance_global']['table'] = 'field_data_field_meta_avance_global';
  $handler->display->display_options['fields']['field_meta_avance_global']['field'] = 'field_meta_avance_global';
  $handler->display->display_options['fields']['field_meta_avance_global']['relationship'] = 'field_meta_tax_tid';
  $handler->display->display_options['fields']['field_meta_avance_global']['label'] = 'Avance de la Meta';
  $handler->display->display_options['fields']['field_meta_avance_global']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meta_avance_global']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Contenido: Año de Creación */
  $handler->display->display_options['fields']['field_year_compromiso']['id'] = 'field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['field'] = 'field_year_compromiso';
  $handler->display->display_options['fields']['field_year_compromiso']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Campo: Término de taxonomía: Código */
  $handler->display->display_options['fields']['field_codigo']['id'] = 'field_codigo';
  $handler->display->display_options['fields']['field_codigo']['table'] = 'field_data_field_codigo';
  $handler->display->display_options['fields']['field_codigo']['field'] = 'field_codigo';
  $handler->display->display_options['fields']['field_codigo']['relationship'] = 'field_meta_tax_tid';
  /* Sort criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_meta_tax_tid';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_meta_tax_tid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Meta';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año de Creación';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['autocomplete_field'] = 'field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['path'] = 'metas-generales';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institución';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Compromiso';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Porcentaje de Avance */
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['id'] = 'field_porcentaje_de_avance_compr';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['table'] = 'field_data_field_porcentaje_de_avance_compr';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['field'] = 'field_porcentaje_de_avance_compr';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['label'] = 'Avance del Compromiso';
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_porcentaje_de_avance_compr']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_meta_tax_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Meta';
  /* Campo: Contenido: Porcentaje avance */
  $handler->display->display_options['fields']['field_porcentaje_avance']['id'] = 'field_porcentaje_avance';
  $handler->display->display_options['fields']['field_porcentaje_avance']['table'] = 'field_data_field_porcentaje_avance';
  $handler->display->display_options['fields']['field_porcentaje_avance']['field'] = 'field_porcentaje_avance';
  $handler->display->display_options['fields']['field_porcentaje_avance']['relationship'] = 'field_evaluar_metas_target_id';
  $handler->display->display_options['fields']['field_porcentaje_avance']['label'] = 'Avance de la Meta en Compromiso';
  $handler->display->display_options['fields']['field_porcentaje_avance']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_porcentaje_avance']['empty'] = '1';
  $handler->display->display_options['fields']['field_porcentaje_avance']['type'] = 'list_key';
  /* Campo: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Avance de la Meta en Compromiso';
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['suffix'] = '%';
  $handler->display->display_options['fields']['expression']['expression'] = '([field_porcentaje_avance] - 1) * 25';
  /* Campo: Término de taxonomía: Avance Global */
  $handler->display->display_options['fields']['field_meta_avance_global']['id'] = 'field_meta_avance_global';
  $handler->display->display_options['fields']['field_meta_avance_global']['table'] = 'field_data_field_meta_avance_global';
  $handler->display->display_options['fields']['field_meta_avance_global']['field'] = 'field_meta_avance_global';
  $handler->display->display_options['fields']['field_meta_avance_global']['relationship'] = 'field_meta_tax_tid';
  $handler->display->display_options['fields']['field_meta_avance_global']['label'] = 'Avance de la Meta';
  $handler->display->display_options['fields']['field_meta_avance_global']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'metas-generales-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['metas_generales'] = array(
    t('Master'),
    t('Metas Generales'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_evaluar_metas'),
    t('term from field_meta_tax'),
    t('Contenido entity referenced from field_institucion'),
    t('Institución'),
    t('Compromiso'),
    t('Avance del Compromiso'),
    t('Meta'),
    t('Avance de la Meta en Compromiso'),
    t('1'),
    t('Promedio de avance de la meta'),
    t('.'),
    t(','),
    t('%'),
    t('Avance de la Meta'),
    t('Año de Creación'),
    t('Código'),
    t('Page'),
    t('Data export'),
  );
  $export['metas_generales'] = $view;

  $view = new view();
  $view->name = 'monto_instituci_n';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Monto Institución';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Monto Institución';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Contenido: Montos de Ejecución en GR (field_financiamiento) */
  $handler->display->display_options['relationships']['field_financiamiento_value']['id'] = 'field_financiamiento_value';
  $handler->display->display_options['relationships']['field_financiamiento_value']['table'] = 'field_data_field_financiamiento';
  $handler->display->display_options['relationships']['field_financiamiento_value']['field'] = 'field_financiamiento_value';
  $handler->display->display_options['relationships']['field_financiamiento_value']['delta'] = '-1';
  /* Campo: Campo: Año */
  $handler->display->display_options['fields']['field_anno']['id'] = 'field_anno';
  $handler->display->display_options['fields']['field_anno']['table'] = 'field_data_field_anno';
  $handler->display->display_options['fields']['field_anno']['field'] = 'field_anno';
  $handler->display->display_options['fields']['field_anno']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['fields']['field_anno']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Field collection item: Monto de Ejecución */
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['id'] = 'field_monto_de_ejecucion';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['table'] = 'field_data_field_monto_de_ejecucion';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['field'] = 'field_monto_de_ejecucion';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['fields']['field_monto_de_ejecucion']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Field collection item: Monto Presupuestario */
  $handler->display->display_options['fields']['field_monto_presupuestario']['id'] = 'field_monto_presupuestario';
  $handler->display->display_options['fields']['field_monto_presupuestario']['table'] = 'field_data_field_monto_presupuestario';
  $handler->display->display_options['fields']['field_monto_presupuestario']['field'] = 'field_monto_presupuestario';
  $handler->display->display_options['fields']['field_monto_presupuestario']['relationship'] = 'field_financiamiento_value';
  $handler->display->display_options['fields']['field_monto_presupuestario']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'institucion' => 'institucion',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['monto_instituci_n'] = array(
    t('Master'),
    t('Monto Institución'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field collection item from field_financiamiento'),
    t('Año'),
    t('Monto de Ejecución'),
    t('Monto Presupuestario'),
    t('Todo'),
    t('Block'),
  );
  $export['monto_instituci_n'] = $view;

  $view = new view();
  $view->name = 'productos_adicionales';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Productos Adicionales';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Productos Adicionales';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Contenido: Ámbito (field_ambito_producto_adicional) */
  $handler->display->display_options['relationships']['field_ambito_producto_adicional_tid']['id'] = 'field_ambito_producto_adicional_tid';
  $handler->display->display_options['relationships']['field_ambito_producto_adicional_tid']['table'] = 'field_data_field_ambito_producto_adicional';
  $handler->display->display_options['relationships']['field_ambito_producto_adicional_tid']['field'] = 'field_ambito_producto_adicional_tid';
  /* Relationship: Contenido: Lineamiento (field_lineamiento_producto_adici) */
  $handler->display->display_options['relationships']['field_lineamiento_producto_adici_tid']['id'] = 'field_lineamiento_producto_adici_tid';
  $handler->display->display_options['relationships']['field_lineamiento_producto_adici_tid']['table'] = 'field_data_field_lineamiento_producto_adici';
  $handler->display->display_options['relationships']['field_lineamiento_producto_adici_tid']['field'] = 'field_lineamiento_producto_adici_tid';
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['relationship'] = 'uid';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institución';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_ambito_producto_adicional_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Ámbito';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_lineamiento_producto_adici_tid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Lineamiento';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Attachment */
  $handler->display->display_options['fields']['field_attachment']['id'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['table'] = 'field_data_field_attachment';
  $handler->display->display_options['fields']['field_attachment']['field'] = 'field_attachment';
  $handler->display->display_options['fields']['field_attachment']['label'] = 'Adjunto';
  $handler->display->display_options['fields']['field_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_attachment']['type'] = 'media';
  $handler->display->display_options['fields']['field_attachment']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_attachment']['delta_offset'] = '0';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'productos_adicionales' => 'productos_adicionales',
  );
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_ambito_producto_adicional_tid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Ámbito';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'field_ambito_producto_adicional_tid';
  $handler->display->display_options['filters']['name_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_1']['expose']['operator_id'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['label'] = 'Lineamiento';
  $handler->display->display_options['filters']['name_1']['expose']['operator'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['identifier'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_field'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'productos-adicionales';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'productos-adicionales-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['productos_adicionales'] = array(
    t('Master'),
    t('Productos Adicionales'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('term from field_ambito_producto_adicional'),
    t('term from field_lineamiento_producto_adici'),
    t('author'),
    t('Contenido entity referenced from field_institucion'),
    t('Institución'),
    t('Ámbito'),
    t('Lineamiento'),
    t('Título'),
    t('Adjunto'),
    t('Page'),
    t('Data export'),
  );
  $export['productos_adicionales'] = $view;

  $view = new view();
  $view->name = 'taxonomias_metas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomias metas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Metas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Encabezado: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Crear nueva meta';
  $handler->display->display_options['header']['area']['content'] = '<a class="btn btn-primary" href="/monitorsngr/admin/structure/taxonomy/meta/add">Crear nueva meta</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Término de taxonomía: Acción Estratégica (field_accion_estrategica) */
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['id'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid']['field'] = 'field_accion_estrategica_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_eje_target_id']['id'] = 'field_eje_target_id';
  $handler->display->display_options['relationships']['field_eje_target_id']['table'] = 'field_data_field_eje';
  $handler->display->display_options['relationships']['field_eje_target_id']['field'] = 'field_eje_target_id';
  $handler->display->display_options['relationships']['field_eje_target_id']['relationship'] = 'field_accion_estrategica_tid';
  /* Relationship: Término de taxonomía: Acción Estratégica (field_accion_estrategica) */
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['id'] = 'field_accion_estrategica_tid_1';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['field'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_1']['label'] = 'term from field_accion_estrategica_am';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ambito_target_id']['id'] = 'field_ambito_target_id';
  $handler->display->display_options['relationships']['field_ambito_target_id']['table'] = 'field_data_field_ambito';
  $handler->display->display_options['relationships']['field_ambito_target_id']['field'] = 'field_ambito_target_id';
  $handler->display->display_options['relationships']['field_ambito_target_id']['relationship'] = 'field_accion_estrategica_tid_1';
  /* Relationship: Término de taxonomía: Acción Estratégica (field_accion_estrategica) */
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['id'] = 'field_accion_estrategica_tid_2';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['field'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['relationships']['field_accion_estrategica_tid_2']['label'] = 'term from field_accion_estrategica_lin';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['id'] = 'field_lineamiento_target_id';
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['table'] = 'field_data_field_lineamiento';
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['field'] = 'field_lineamiento_target_id';
  $handler->display->display_options['relationships']['field_lineamiento_target_id']['relationship'] = 'field_accion_estrategica_tid_2';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: Acción Estratégica */
  $handler->display->display_options['fields']['field_accion_estrategica']['id'] = 'field_accion_estrategica';
  $handler->display->display_options['fields']['field_accion_estrategica']['table'] = 'field_data_field_accion_estrategica';
  $handler->display->display_options['fields']['field_accion_estrategica']['field'] = 'field_accion_estrategica';
  /* Campo: Término de taxonomía: Productos Relacionados */
  $handler->display->display_options['fields']['field_productos_relacionados']['id'] = 'field_productos_relacionados';
  $handler->display->display_options['fields']['field_productos_relacionados']['table'] = 'field_data_field_productos_relacionados';
  $handler->display->display_options['fields']['field_productos_relacionados']['field'] = 'field_productos_relacionados';
  $handler->display->display_options['fields']['field_productos_relacionados']['delta_offset'] = '0';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'field_eje_target_id';
  $handler->display->display_options['fields']['name_1']['label'] = 'Eje';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['relationship'] = 'field_ambito_target_id';
  $handler->display->display_options['fields']['name_2']['label'] = 'Ámbito';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_3']['id'] = 'name_3';
  $handler->display->display_options['fields']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_3']['field'] = 'name';
  $handler->display->display_options['fields']['name_3']['relationship'] = 'field_lineamiento_target_id';
  $handler->display->display_options['fields']['name_3']['label'] = 'Lineamiento';
  $handler->display->display_options['fields']['name_3']['exclude'] = TRUE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name_4']['id'] = 'name_4';
  $handler->display->display_options['fields']['name_4']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_4']['field'] = 'name';
  $handler->display->display_options['fields']['name_4']['relationship'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['fields']['name_4']['label'] = 'Acción Estratégica';
  $handler->display->display_options['fields']['name_4']['exclude'] = TRUE;
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'meta' => 'meta',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_eje_target_id';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Eje';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_field'] = 'name_1';
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'field_ambito_target_id';
  $handler->display->display_options['filters']['name_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_1']['expose']['operator_id'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['label'] = 'Ámbito';
  $handler->display->display_options['filters']['name_1']['expose']['operator'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['identifier'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_field'] = 'name_2';
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name_1']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['relationship'] = 'field_lineamiento_target_id';
  $handler->display->display_options['filters']['name_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_2']['expose']['operator_id'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['label'] = 'Lineamiento';
  $handler->display->display_options['filters']['name_2']['expose']['operator'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['identifier'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_field'] = 'name_3';
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name_2']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name_3']['id'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_3']['field'] = 'name';
  $handler->display->display_options['filters']['name_3']['relationship'] = 'field_accion_estrategica_tid';
  $handler->display->display_options['filters']['name_3']['operator'] = 'contains';
  $handler->display->display_options['filters']['name_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_3']['expose']['operator_id'] = 'name_3_op';
  $handler->display->display_options['filters']['name_3']['expose']['label'] = 'Acción Estratégica';
  $handler->display->display_options['filters']['name_3']['expose']['operator'] = 'name_3_op';
  $handler->display->display_options['filters']['name_3']['expose']['identifier'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_field'] = 'name_4';
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['name_3']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomias-metas';
  $translatables['taxonomias_metas'] = array(
    t('Master'),
    t('Metas'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Crear nueva meta'),
    t('<a class="btn btn-primary" href="/monitorsngr/admin/structure/taxonomy/meta/add">Crear nueva meta</a>'),
    t('term from field_accion_estrategica'),
    t('Término de taxonomía entity referenced from field_eje'),
    t('term from field_accion_estrategica_am'),
    t('Término de taxonomía entity referenced from field_ambito'),
    t('term from field_accion_estrategica_lin'),
    t('Término de taxonomía entity referenced from field_lineamiento'),
    t('Nombre'),
    t('Acción Estratégica'),
    t('Productos Relacionados'),
    t('Eje'),
    t('Ámbito'),
    t('Lineamiento'),
    t('Page'),
  );
  $export['taxonomias_metas'] = $view;

  $view = new view();
  $view->name = 'taxonomias_productos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomias productos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Taxonomias productos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_anno_fin_meta' => 'field_anno_fin_meta',
    'field_anno_ini_meta' => 'field_anno_ini_meta',
    'field_cod_producto_meta' => 'field_cod_producto_meta',
    'field_eje' => 'field_eje',
    'field_institucion_administradora' => 'field_institucion_administradora',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_anno_fin_meta' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_anno_ini_meta' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cod_producto_meta' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_eje' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institucion_administradora' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Nombre del producto';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Campo: Campo: Código Producto */
  $handler->display->display_options['fields']['field_cod_producto_meta']['id'] = 'field_cod_producto_meta';
  $handler->display->display_options['fields']['field_cod_producto_meta']['table'] = 'field_data_field_cod_producto_meta';
  $handler->display->display_options['fields']['field_cod_producto_meta']['field'] = 'field_cod_producto_meta';
  /* Campo: Campo: Año Inicial */
  $handler->display->display_options['fields']['field_anno_ini_meta']['id'] = 'field_anno_ini_meta';
  $handler->display->display_options['fields']['field_anno_ini_meta']['table'] = 'field_data_field_anno_ini_meta';
  $handler->display->display_options['fields']['field_anno_ini_meta']['field'] = 'field_anno_ini_meta';
  $handler->display->display_options['fields']['field_anno_ini_meta']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Campo: Año Final */
  $handler->display->display_options['fields']['field_anno_fin_meta']['id'] = 'field_anno_fin_meta';
  $handler->display->display_options['fields']['field_anno_fin_meta']['table'] = 'field_data_field_anno_fin_meta';
  $handler->display->display_options['fields']['field_anno_fin_meta']['field'] = 'field_anno_fin_meta';
  $handler->display->display_options['fields']['field_anno_fin_meta']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Campo: Instituciones Involucradas */
  $handler->display->display_options['fields']['field_institucion_administradora']['id'] = 'field_institucion_administradora';
  $handler->display->display_options['fields']['field_institucion_administradora']['table'] = 'field_data_field_institucion_administradora';
  $handler->display->display_options['fields']['field_institucion_administradora']['field'] = 'field_institucion_administradora';
  $handler->display->display_options['fields']['field_institucion_administradora']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_institucion_administradora']['delta_offset'] = '0';
  /* Campo: Término de taxonomía: descripcion del producto */
  $handler->display->display_options['fields']['field_descripcion_del_producto']['id'] = 'field_descripcion_del_producto';
  $handler->display->display_options['fields']['field_descripcion_del_producto']['table'] = 'field_data_field_descripcion_del_producto';
  $handler->display->display_options['fields']['field_descripcion_del_producto']['field'] = 'field_descripcion_del_producto';
  /* Campo: Término de taxonomía: Detalle del Producto */
  $handler->display->display_options['fields']['field_detalle_del_producto']['id'] = 'field_detalle_del_producto';
  $handler->display->display_options['fields']['field_detalle_del_producto']['table'] = 'field_data_field_detalle_del_producto';
  $handler->display->display_options['fields']['field_detalle_del_producto']['field'] = 'field_detalle_del_producto';
  /* Filter criterion: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'producto' => 'producto',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomias-productos';
  $translatables['taxonomias_productos'] = array(
    t('Master'),
    t('Taxonomias productos'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Nombre del producto'),
    t('Código Producto'),
    t('Año Inicial'),
    t('Año Final'),
    t('Instituciones Involucradas'),
    t('descripcion del producto'),
    t('Detalle del Producto'),
    t('Page'),
  );
  $export['taxonomias_productos'] = $view;

  $view = new view();
  $view->name = 'view_instituciones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'view instituciones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listado de compromisos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_institucion' => 'field_institucion',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institucion' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Campo: Institución  */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Campo: Institución  (field_institucion) */
  $handler->display->display_options['sorts']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['sorts']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['sorts']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  $handler->display->display_options['sorts']['field_institucion_target_id']['order'] = 'DESC';
  /* Sort criterion: Contenido: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Contenido: Año de Creación (field_year_compromiso) */
  $handler->display->display_options['filters']['field_year_compromiso_value']['id'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['table'] = 'field_data_field_year_compromiso';
  $handler->display->display_options['filters']['field_year_compromiso_value']['field'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_year_compromiso_value']['group'] = 1;
  $handler->display->display_options['filters']['field_year_compromiso_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator_id'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['label'] = 'Año';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['operator'] = 'field_year_compromiso_value_op';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['identifier'] = 'field_year_compromiso_value';
  $handler->display->display_options['filters']['field_year_compromiso_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Contenido: Título */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Contenido: Notificar institucional (field_notificar_institucional) */
  $handler->display->display_options['filters']['field_notificar_institucional_value']['id'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['table'] = 'field_data_field_notificar_institucional';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['field'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['group'] = 1;
  $handler->display->display_options['filters']['field_notificar_institucional_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['operator_id'] = 'field_notificar_institucional_value_op';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['label'] = 'Estado';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['operator'] = 'field_notificar_institucional_value_op';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['identifier'] = 'field_notificar_institucional_value';
  $handler->display->display_options['filters']['field_notificar_institucional_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  /* Filter criterion: Contenido: Porcentaje de Avance (field_porcentaje_de_avance_compr) */
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['id'] = 'field_porcentaje_de_avance_compr_value';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['table'] = 'field_data_field_porcentaje_de_avance_compr';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['field'] = 'field_porcentaje_de_avance_compr_value';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['group'] = 1;
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['expose']['operator_id'] = 'field_porcentaje_de_avance_compr_value_op';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['expose']['label'] = 'Porcentaje de Avance';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['expose']['operator'] = 'field_porcentaje_de_avance_compr_value_op';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['expose']['identifier'] = 'field_porcentaje_de_avance_compr_value';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['group_info']['label'] = 'Porcentaje de Avance';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['group_info']['identifier'] = 'field_porcentaje_de_avance_compr_value';
  $handler->display->display_options['filters']['field_porcentaje_de_avance_compr_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Igual a 0',
      'operator' => '=',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Mayor a 0% hasta 25%',
      'operator' => 'between',
      'value' => array(
        'value' => '25',
        'min' => '0.0000001',
        'max' => '25',
      ),
    ),
    3 => array(
      'title' => 'Mayor a 25% hasta 50%',
      'operator' => 'between',
      'value' => array(
        'value' => '50',
        'min' => '25.0000001',
        'max' => '50',
      ),
    ),
    4 => array(
      'title' => 'Mayor a 50% hasta 75%',
      'operator' => 'between',
      'value' => array(
        'value' => '50,0000001',
        'min' => '50.0000001',
        'max' => '75',
      ),
    ),
    5 => array(
      'title' => 'Mayor a 75% hasta 100%',
      'operator' => 'between',
      'value' => array(
        'value' => '100',
        'min' => '75.0000001',
        'max' => '100',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lista-de-compromisos';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'compromisos-data';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['view_instituciones'] = array(
    t('Master'),
    t('Listado de compromisos'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_institucion'),
    t('Título'),
    t('Institución '),
    t('Año'),
    t('Institución'),
    t('Estado'),
    t('Porcentaje de Avance'),
    t('Page'),
    t('Data export'),
  );
  $export['view_instituciones'] = $view;

  $view = new view();
  $view->name = 'view_listas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Instituciones por usuario';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Instituciones por usuario';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    5 => '5',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_institucion_node']['id'] = 'reverse_field_institucion_node';
  $handler->display->display_options['relationships']['reverse_field_institucion_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_institucion_node']['field'] = 'reverse_field_institucion_node';
  $handler->display->display_options['relationships']['reverse_field_institucion_node']['relationship'] = 'field_institucion_target_id';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Institucion';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_institucion_node';
  $handler->display->display_options['fields']['title']['label'] = 'Titulo';
  /* Sort criterion: Usuario: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Usuario: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_institucion_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'compromisos';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'compromisos-por-usuario-csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['view_listas'] = array(
    t('Master'),
    t('Instituciones por usuario'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_institucion'),
    t('Contenido referencing Contenido from field_institucion'),
    t('Nombre'),
    t('Institucion'),
    t('Titulo'),
    t('Todo'),
    t('Page'),
    t('Data export'),
  );
  $export['view_listas'] = $view;

  $view = new view();
  $view->name = 'vista_prueba';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vista prueba';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vista prueba';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Nombre del jerarca */
  $handler->display->display_options['fields']['field_nombre_jerarca']['id'] = 'field_nombre_jerarca';
  $handler->display->display_options['fields']['field_nombre_jerarca']['table'] = 'field_data_field_nombre_jerarca';
  $handler->display->display_options['fields']['field_nombre_jerarca']['field'] = 'field_nombre_jerarca';
  /* Sort criterion: Contenido: Título */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Título';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'institucion' => 'institucion',
  );
  /* Filter criterion: Contenido: Nombre del jerarca (field_nombre_jerarca) */
  $handler->display->display_options['filters']['field_nombre_jerarca_value']['id'] = 'field_nombre_jerarca_value';
  $handler->display->display_options['filters']['field_nombre_jerarca_value']['table'] = 'field_data_field_nombre_jerarca';
  $handler->display->display_options['filters']['field_nombre_jerarca_value']['field'] = 'field_nombre_jerarca_value';
  $handler->display->display_options['filters']['field_nombre_jerarca_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_jerarca_value']['expose']['operator_id'] = 'field_nombre_jerarca_value_op';
  $handler->display->display_options['filters']['field_nombre_jerarca_value']['expose']['label'] = 'Nombre del jerarca';
  $handler->display->display_options['filters']['field_nombre_jerarca_value']['expose']['operator'] = 'field_nombre_jerarca_value_op';
  $handler->display->display_options['filters']['field_nombre_jerarca_value']['expose']['identifier'] = 'field_nombre_jerarca_value';
  $handler->display->display_options['filters']['field_nombre_jerarca_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'vista-prueba-institucion';
  $translatables['vista_prueba'] = array(
    t('Master'),
    t('Vista prueba'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Nombre del jerarca'),
    t('Título'),
    t('Page'),
  );
  $export['vista_prueba'] = $view;

  return $export;
}
