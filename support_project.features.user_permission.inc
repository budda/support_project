<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function support_project_user_default_permissions() {
  $permissions = array();

  // Exported permission: create support_project content
  $permissions['create support_project content'] = array(
    'name' => 'create support_project content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: delete own support_project content
  $permissions['delete own support_project content'] = array(
    'name' => 'delete own support_project content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own support_project content
  $permissions['edit own support_project content'] = array(
    'name' => 'edit own support_project content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
