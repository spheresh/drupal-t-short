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

<?php if ($content['region-add-quote']): ?>
  <section id="add-quote">
    <?php print $content['region-add-quote']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-wtf']): ?>
  <section id="wtf">
    <h2>Что это?</h2>
    <?php print $content['region-wtf']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-t-shorts']): ?>
  <section id="t-shorts">
    <h2>Футболки</h2>
    <?php print $content['region-t-shorts']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-team']): ?>
  <section id="team">
    <h2>Команда</h2>
    <?php print $content['region-team']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-contacts']): ?>
  <section id="contacts">
    <h2>Контакты</h2>
    <?php print $content['region-contacts']; ?>
  </section>
<?php endif; ?>

<?php if ($content['region-footer']): ?>
  <footer id="footer">
    <?php print $content['region-footer']; ?>
  </footer>
<?php endif; ?>
