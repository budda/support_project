<?php
 
/**
 * Helper to implementation of hook_node_info().
 */
function _basic_project_node_info() {
  $items = array(
    'basic_project' => array(
      'name' => t('Basic Project'),
      'module' => 'features',
      'description' => t('Provides a holder for support tickets if required.'),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
