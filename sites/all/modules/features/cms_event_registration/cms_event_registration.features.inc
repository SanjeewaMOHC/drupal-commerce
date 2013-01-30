<?php
/**
 * @file
 * cms_event_registration.features.inc
 */

/**
 * Implements hook_default_registration_type().
 */
function cms_event_registration_default_registration_type() {
  $items = array();
  $items['cms_event_registration'] = entity_import('registration_type', '{
    "name" : "cms_event_registration",
    "label" : "CMS Event Registration",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
