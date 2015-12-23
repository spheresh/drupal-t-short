<?php
/**
 * @file
 * Template for a frontpage
 */
?>

<?php if ($content['region-header']): ?>
  <header id="header">
    <?php print $content['region-header']; ?>
  </header>
<?php endif; ?>

<?php if ($content['region-quote-slider']): ?>
  <section id="quote-slider">
    <?php print $content['region-quote-slider']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-wtf']): ?>
  <section id="wtf">
    <?php print $content['region-wtf']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-t-shorts']): ?>
  <section id="t-shorts">
    <?php print $content['region-t-shorts']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-team']): ?>
  <section id="team">
    <?php print $content['region-team']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-contacts']): ?>
  <section id="contacts">
    <?php print $content['region-contacts']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-footer']): ?>
  <footer id="footer">
    <?php print $content['region-footer']; ?>
  </footer>
<?php endif; ?>
