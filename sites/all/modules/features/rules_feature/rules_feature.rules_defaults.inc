<?php
/**
 * @file
 * rules_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_feature_default_rules_configuration() {
  $items = array();
  $items['rules_regla_4'] = entity_import('rules_config', '{ "rules_regla_4" : {
      "LABEL" : "Regla de moderacion 4",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--compromiso_de_gestion" : { "bundle" : "compromiso_de_gestion" } },
      "IF" : [
        { "AND" : [
            { "data_is" : {
                "data" : [ "node:field-notificar-analista" ],
                "value" : "Autoevaluacion lista"
              }
            },
            { "user_has_role" : {
                "account" : [ "site:current-user" ],
                "roles" : { "value" : { "7" : "7" } }
              }
            }
          ]
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "5" : "5" } },
            "subject" : "Autoevaluacion completada",
            "message" : "Estimado equipo de la Unidad de Desarrollo Estrat\\u00e9gico del Sistema Nacional de Gesti\\u00f3n del Riesgo              \\r\\nComisi\\u00f3n Nacional de Prevenci\\u00f3n de Riesgos y Atenci\\u00f3n de Emergencias.\\r\\n\\r\\nSeg\\u00fan los compromisos institucionales que tiene la instituci\\u00f3n que represento ante el Sistema Nacional de Gestion del Riesgo, notifico que he realizado la autoevaluaci\\u00f3n  de un compromiso institucional correspondiente, disponible para su respectiva revisi\\u00f3n.  \\r\\nPuede ver dicho compromiso dando click en siguiente enlace [node:url]\\r\\n\\r\\nAtentamente, \\r\\n[site:current-user:field-nombre]\\r\\nEnlace institucional,  \\r\\n[site:current-user:field-institucion]"
          }
        }
      ]
    }
  }');
  $items['rules_regla_de_moderaci_n_1'] = entity_import('rules_config', '{ "rules_regla_de_moderaci_n_1" : {
      "LABEL" : "Regla de Moderaci\\u00f3n 1",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "Solicitud de cuenta de Usuario Institucional.",
            "message" : "Estimado equipo de la Unidad de Desarrollo Estrat\\u00e9gico del Sistema Nacional de Gesti\\u00f3n del Riesgo, \\r\\nComisi\\u00f3n Nacional de Prevenci\\u00f3n de Riesgos y Atenci\\u00f3n de Emergencias.\\r\\n  \\r\\nEl usuario [account:name], ha solicitado permisos para ingresar al Sistema Monitor de Compromisos de Gesti\\u00f3n como Usuario Institucional (Enlace institucional). \\r\\n\\r\\n Atentamente,  \\r\\n[account:name]\\r\\nEnlace institucional \\r\\n[account:field_institucion]"
          }
        }
      ]
    }
  }');
  $items['rules_rule_5'] = entity_import('rules_config', '{ "rules_rule_5" : {
      "LABEL" : "Regla de moderacion 5",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--compromiso_de_gestion" : { "bundle" : "compromiso_de_gestion" } },
      "IF" : [
        { "AND" : [
            { "data_is" : { "data" : [ "node:field-institucion:type" ], "value" : "institucion" } },
            { "OR" : [
                { "data_is" : {
                    "data" : [ "node:field-notificar-institucional" ],
                    "value" : "Aprobado"
                  }
                },
                { "data_is" : {
                    "data" : [ "node:field-notificar-institucional" ],
                    "value" : "Sin aprobacion"
                  }
                }
              ]
            }
          ]
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-institucion:field-enlace-institucional:mail" ],
            "subject" : "Autoevaluacion revisada",
            "message" : "Estimado(a) [node:field-institucion:field-enlace-institucional:field-nombre]\\r\\nEnlace institucional                                    \\r\\n[node:field-institucion]\\r\\n\\r\\nLa autoevaluaci\\u00f3n que usted realiz\\u00f3 respecto a los compromisos de gesti\\u00f3n  que su instituci\\u00f3n tiene como integrante del Sistema Nacional de Gesti\\u00f3n del Riesgo se encuentra: [node:field-notificar-institucional].\\r\\nEn caso de estar sin aprobacion, le invitamos a revisar las observaciones en el siguiente enlace [node:url]\\r\\n\\r\\nGracias por el tiempo tomado en la realizaci\\u00f3n de la autoevaluaci\\u00f3n de su compromiso de gesti\\u00f3n. \\r\\n\\r\\nAtentamente,                               \\r\\nUnidad de Desarrollo Estrat\\u00e9gico del Sistema Nacional de Gesti\\u00f3n del Riesgo  \\r\\nComisi\\u00f3n Nacional de Prevenci\\u00f3n de Riesgos y Atenci\\u00f3n de Emergencias.   ",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_rule_regla_3'] = entity_import('rules_config', '{ "rules_rule_regla_3" : {
      "LABEL" : "Regla de Moderaci\\u00f3n 3",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--compromiso_de_gestion" : { "bundle" : "compromiso_de_gestion" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-institucion:type" ], "value" : "institucion" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:field-institucion:field-enlace-institucional:mail" ],
            "subject" : "Compromiso institucional asignado",
            "message" : "Estimado(a) [node:field-institucion:field-enlace-institucional:name]. \\r\\nEnlace institucional \\r\\n[node:field-institucion:title]\\r\\n\\r\\nLe invitamos a revisar los compromisos institucionales que han sido asignados a su instituci\\u00f3n, para el cumplimiento del Plan Nacional de Gestion del Riesgo [custom:period_init]-[custom:period_end]. Una vez dentro del Sistema, deber\\u00e1 realizar el proceso de autoevaluaci\\u00f3n de cada compromiso.\\r\\n\\r\\nRecuerde ingresar al Sistema Monitor, con el nombre de usuario y contrase\\u00f1a proporcionados anteriormente, puede ingresar al compromiso creado por medio del siguiente link: [node:url]\\r\\n\\r\\nAtentamente,  \\r\\nUnidad de Desarrollo Estrat\\u00e9gico del Sistema Nacional de Gesti\\u00f3n del Riesgo \\r\\nComisi\\u00f3n Nacional de Prevenci\\u00f3n de Riesgos y Atenci\\u00f3n de Emergencias.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
