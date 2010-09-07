<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function support_project_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function support_project_node_info() {
  $items = array(
    'support_project' => array(
      'name' => t('Support Project'),
      'module' => 'features',
      'description' => t('A project provides the ability to bundle support tickets together. You can have many projects per group.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function support_project_views_api() {
  return array(
    'api' => '2',
  );
}
