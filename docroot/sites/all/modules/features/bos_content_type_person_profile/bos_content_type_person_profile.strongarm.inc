<?php
/**
 * @file
 * bos_content_type_person_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bos_content_type_person_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_person_profile';
  $strongarm->value = 0;
  $export['comment_anonymous_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_person_profile';
  $strongarm->value = 1;
  $export['comment_default_mode_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_person_profile';
  $strongarm->value = '50';
  $export['comment_default_per_page_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_person_profile';
  $strongarm->value = 1;
  $export['comment_form_location_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_person_profile';
  $strongarm->value = '1';
  $export['comment_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_person_profile';
  $strongarm->value = '1';
  $export['comment_preview_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_person_profile';
  $strongarm->value = 1;
  $export['comment_subject_field_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__person_profile';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
      ),
      'poll_stub' => array(
        'custom_settings' => FALSE,
      ),
      'department_listing' => array(
        'custom_settings' => FALSE,
      ),
      'popup_icon' => array(
        'custom_settings' => FALSE,
      ),
      'published_by' => array(
        'custom_settings' => FALSE,
      ),
      'contact' => array(
        'custom_settings' => FALSE,
      ),
      'article' => array(
        'custom_settings' => FALSE,
      ),
      'featured_topics' => array(
        'custom_settings' => FALSE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'calendar_listing' => array(
        'custom_settings' => FALSE,
      ),
      'featured_item' => array(
        'custom_settings' => FALSE,
      ),
      'listing' => array(
        'custom_settings' => TRUE,
      ),
      'icon_popup' => array(
        'custom_settings' => FALSE,
      ),
      'listing_short' => array(
        'custom_settings' => FALSE,
      ),
      'listing_long' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'embed' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '0',
        ),
        'title' => array(
          'weight' => '-3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_person_profile';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_person_profile';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_person_profile';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_person_profile';
  $strongarm->value = '1';
  $export['node_preview_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_person_profile';
  $strongarm->value = 0;
  $export['node_submitted_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_person_profile_pattern';
  $strongarm->value = '[boston:contact-path]/[node:title]';
  $export['pathauto_node_person_profile_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_scheduler_person_profile';
  $strongarm->value = array(
    0 => 'workbench_scheduler_limit_current_revision',
  );
  $export['workbench_scheduler_person_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_person_profile';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.8',
  );
  $export['xmlsitemap_settings_node_person_profile'] = $strongarm;

  return $export;
}
