reservas(_Pedido) :-
    reply_html_page( 
    bootstrap,
    [ title('Reservas')],
    [ div(class(container),
        [ \html_requires(css('estilo.css')),
            h2(class("my-5 text-center"),
                'Reservas'),
            \campo(id_reserva, 'ID Reserva', number),
            \campo(id_ambiente, 'ID Ambiente', number),
            \campo(id_usuario, 'ID Usuario', number),
            \campo(data_res, 'Data da reserva', text),
            \campo(hora_res, 'Horario da reserva', text),
            \campo(descricao, 'Descricao', text),
            
            p(button([ class('btn btn-primary'), type(submit)], 'Enviar')),
            \retorna_home ])]).