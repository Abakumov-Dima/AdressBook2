(function ($) {
    Drupal.behaviors.addressbook = {
        attach: function (context, settings) {
            function hide(){
               $('.form-item-title').hide();
               $('.form-item-field-firstname-und-0-value').hide();
               $('.form-item-field-lastname-und-0-value').hide();
               $('.form-item-field-category-und').hide();

               $('.form-item-field-photo-und-0').hide();
               $('input[name="field_photo_und_0_upload_button"]').hide();


               $('.form-item-field-telephon-und-0-value').hide();
               $('.form-item-field-email-und-0-value').hide();
               $('#edit-field-birthday').hide();
               $('.field-type-text-with-summary').hide();

               $('#edit-back').hide();
               $('#edit-next').hide();
               $('#edit-submit').hide();


            }
            if(typeof  page == 'undefined')
            {
                var page = 1;
                pageCheck();
                $('#edit-next').bind('click',function(e){
                    page++;

                    pageCheck();
                    e.preventDefault();
                });
                $('#edit-back').bind('click',function(e){
                    page--;

                    pageCheck();
                    e.preventDefault();
                });
            }

            function pageCheck()
            {
                if (page == 1){

                    hide();
                    $('.form-item-field-firstname-und-0-value').show();
                    $('.form-item-field-lastname-und-0-value').show();
                    $('.form-item-field-category-und').show();
                    $('#edit-next').show();
                }else if(page == 2)
                {
                    hide();
                    $('.form-item-field-photo-und-0').show();

                    $('#edit-next').show();
                    $('#edit-back').show();

                }
                else
                {
                    hide();
                    $('.form-item-field-telephon-und-0-value').show();
                    $('.form-item-field-email-und-0-value').show();
                    $('#edit-field-birthday').show();
                    $('.field-type-text-with-summary').show();

                    $('#edit-back').show();
                    $('#edit-submit').show();
                }
            }


        }
    };

})(jQuery);