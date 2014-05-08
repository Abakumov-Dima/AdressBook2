<?php

/**
 * @file
 * Contains CRUD functions for Contacts entities.
 */

/**
 * Create Contacts entity.
 *
 * @param $values
 * @return bool
 */
function contacts_create($values) {
    return entity_create('contacts', $values);
}

/**
 * Save Contacts entity.
 *
 * @param $contacts
 * @return bool
 */
function contacts_save($contacts) {
    return entity_save('contacts', $contacts);
}

/**
 * Load multiple entities.
 *
 *
 * @param bool $ids
 * @param array $conditions
 * @return mixed
 */
function contacts_load_multiple($ids = FALSE, $conditions = array()) {
    return entity_load('contacts', $ids, $conditions);
}

/**
 * Load single Contacts by its id.
 *
 * @param $id
 * @return mixed
 */
function contacts_load($id) {
    return current(contacts_load_multiple((array) $id));
}

/**
 * Delete multiple Contacts at once.
 *
 * @param $ids
 * @return bool
 */
function contacts_delete_multiple($ids) {
    return entity_delete_multiple('contacts', $ids);
}

/**
 * Delete single Contacts by its id.
 *
 * @param $id
 * @return bool
 */
function contacts_delete($id) {
    return entity_delete('contacts', $id);
}

/**
 * View Contacts entity.
 *
 * @param $contacts
 * @param string $view_mode
 * @param null $langcode
 * @return bool
 */
function contacts_view($contacts, $view_mode = 'full', $langcode = NULL) {
    return entity_view('contacts', array($contacts), $view_mode, $langcode);
}
