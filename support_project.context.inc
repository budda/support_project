<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function support_project_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'support_project';
  $context->description = 'A simple CCK driven project system';
  $context->tag = 'Support';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'support_project' => 'support_project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'support_project_list' => 'support_project_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'default',
    ),
    'menu' => 'support',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A simple CCK driven project system');
  t('Support');

  $export['support_project'] = $context;
  return $export;
}
