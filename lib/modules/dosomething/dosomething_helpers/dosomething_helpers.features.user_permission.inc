<?php
/**
 * @file
 * dosomething_helpers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dosomething_helpers_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'entityconnect add button'.
  $permissions['entityconnect add button'] = array(
    'name' => 'entityconnect add button',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'entityconnect edit button'.
  $permissions['entityconnect edit button'] = array(
    'name' => 'entityconnect edit button',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'entityconnect',
  );

  return $permissions;
}