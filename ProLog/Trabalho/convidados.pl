convidados(_Pedido) :-
    reply_html_page( 
    bootstrap,
    [ title('Convidados')],
    [ div(class(container),
        [ \html_requires(css('estilo.css')),
            h2(class("my-5 text-center"),
                'Convidados'),
            \campo(id_convidado, 'ID Convidado', number),
            \campo(nome, 'Nome', text),
            \campo(rg, 'RG', text),
    
            p(button([ class('btn btn-primary'), type(submit)], 'Enviar')),
            \retorna_home ])]).