<?php
/**
 * @file
 * adressbook2.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function adressbook2_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
