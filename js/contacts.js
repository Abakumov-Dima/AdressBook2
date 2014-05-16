(function ($) {
    Drupal.behaviors.contacts = {
        attach: function (context, settings) {
            console.log('Behavior called!', "'Behavior called!'");

            if (context == document) {
                var $blockSN = $('#block-system-navigation');
                $('h2', $blockSN).bind('click', function () {
                    $('.content', $blockSN).slideToggle();
                });
//        $('h2', $blockSN).once('edu6').remove();
            }
        }
    };
})(jQuery);


(function ($) {
    Drupal.behaviors.contacts = {
        attach: function (context, settings) {

            $("#id-delete").click(function(e){
                if(!confirm('Aru you sure?')) { e.preventDefault(); }
            });

        }
    };
})(jQuery);