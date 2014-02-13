<?php
/**
 * @file
 * dosomething_static_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dosomething_static_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create static_content content'.
  $permissions['create static_content content'] = array(
    'name' => 'create static_content content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any static_content content'.
  $permissions['delete any static_content content'] = array(
    'name' => 'delete any static_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own static_content content'.
  $permissions['delete own static_content content'] = array(
    'name' => 'delete own static_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any static_content content'.
  $permissions['edit any static_content content'] = array(
    'name' => 'edit any static_content content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own static_content content'.
  $permissions['edit own static_content content'] = array(
    'name' => 'edit own static_content content',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'entityconnect add button'.
  $permissions['entityconnect add button'] = array(
    'name' => 'entityconnect add button',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'entityconnect edit button'.
  $permissions['entityconnect edit button'] = array(
    'name' => 'entityconnect edit button',
    'roles' => array(
      'editor' => 'editor',
    ),
    'module' => 'entityconnect',
  );

  return $permissions;
}