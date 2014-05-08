<?php

/**
 * @file
 * Contains Contacts entity add/edit form.
 */

/**
 * Add/edit form callback for Contacts entities.
 *
 * @param $form
 * @param $form_state
 * @param $contacts
 * @param string $op
 */
function contacts_form($form, &$form_state, $contacts, $op = 'edit') {
    $form['title'] = array(
        '#type' => 'textfield',
        '#title' => t('Title'),
        '#default_value' => isset($contacts->title) ? $contacts->title : '',
    );
    $form['uid'] = array(
        '#type' => 'int',
        '#access' => FALSE,
    );

    $form['actions'] = array(
        '#type' => 'actions',
        'submit' => array(
            '#type' => 'submit',
            '#value' => t('Save'),
        ),
    );

    // Attach fields to the form.
    field_attach_form('contacts', $contacts, $form, $form_state);

    return $form;
}

/**
 * Submit callback for "contacts_form".
 *
 * @param $form
 * @param $form_state
 */
function contacts_form_submit($form, &$form_state) {
    global $user;
    if(!empty($user)) {
        $form_state['values']['uid'] = $user->uid;
    }
    $contacts = entity_ui_form_submit_build_entity($form, $form_state);

    $contacts->save();

    $form_state['redirect'] = 'address-book';
}
