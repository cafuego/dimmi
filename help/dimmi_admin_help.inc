<?php
// $Id$

/**
 * @file
 * Helpfile for the Dimmi module
 */

/**
 * Creates the help text for the Dimmi settings page
 *
 * @return
 *   HTML with the help text
 */

function dimmi_settings_help() {
  return t('
<h4>Overview</h4>
<p>This module enables the simple inclusion of Dimmi booking and calendar
widgets in your Drupal site.</p>

<h4>Prerequisites</h4>
<p>You must have a Dimmi account and a restaurant or other venue to take bookings
for before using this module. You can sign up to Dimmi at <a href="http://dimmi.com.au/">http://dimmi.com.au</a>.

<h4>Configuration</h4>
<p>To use this module, simply set the number of Dimmi blocks you want and then
go to the <a href="@admin-blocks-configure">blocks configuration page</a> to
configure each Dimmi block with a Dimmi ID and a widget type.
', array('@admin-blocks-configure' => url('admin/build/block/list')));
}

