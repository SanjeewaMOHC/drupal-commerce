<?php
/**
 * @file
 * cms_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cms_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cms_event_node_info() {
  $items = array(
    'cms_event' => array(
      'name' => t('CMS Event'),
      'base' => 'node_content',
      'description' => t('Drupal type to emulate events listed at http://cms.gov/apps/events/upcomingevents.asp'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
