<?php
/**
 * @file
 * integrantes_comit_s_asistentes_foro.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function integrantes_comit_s_asistentes_foro_taxonomy_default_vocabularies() {
  return array(
    'rol' => array(
      'name' => 'Rol',
      'machine_name' => 'rol',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
