<?php
 
/**
 * Implementation of hook_node_info().
 */
function basic_project_node_info() {
  module_load_include('inc', 'basic_project', 'basic_project.features.node');
  $args = func_get_args();
  return call_user_func_array('_basic_project_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function basic_project_views_default_views() {
  module_load_include('inc', 'basic_project', 'basic_project.features.views');
  $args = func_get_args();
  return call_user_func_array('_basic_project_views_default_views', $args);
}
