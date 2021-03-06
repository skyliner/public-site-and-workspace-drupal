<?php
/**
 * @file
 * motion_bank_org_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function motion_bank_org_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'author',
    ),
    'module' => 'search',
  );

  return $permissions;
}
