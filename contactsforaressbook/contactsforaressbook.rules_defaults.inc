<?php
/**
 * @file
 * contactsforaressbook.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function contactsforaressbook_default_rules_configuration() {
  $items = array();
  $items['rules_category_selecion'] = entity_import('rules_config', '{ "rules_category_selecion" : {
      "LABEL" : "Category selecion",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "contacts" : { "label" : "Contacts", "type" : "contacts" },
        "term" : { "label" : "CHOOSE your OWN", "type" : "taxonomy_term" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "data_set" : { "data" : [ "contacts:field-category" ], "value" : [ "" ] } }
            ],
            "LABEL" : "contactRules"
          }
        }
      ]
    }
  }');
  return $items;
}
