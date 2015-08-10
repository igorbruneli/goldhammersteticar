<?php
/**
 * @file
 * site_structure.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function site_structure_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -10,
  );
  // Exported language: pt-pt.
  $languages['pt-pt'] = array(
    'language' => 'pt-pt',
    'name' => 'Portuguese, Portugal',
    'native' => 'Português',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'pt-pt',
    'weight' => -9,
  );
  return $languages;
}
