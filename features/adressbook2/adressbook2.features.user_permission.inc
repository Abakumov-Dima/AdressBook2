<?php
/**
 * @file
 * adressbook2.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function adressbook2_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access method'.
  $permissions['access method'] = array(
    'name' => 'access method',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contacts',
  );

  return $permissions;
}
