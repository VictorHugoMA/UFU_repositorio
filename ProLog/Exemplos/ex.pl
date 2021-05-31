:- use_module(library(http/thread_httpd)).
:- use_module(library(http/http_dispatch)).
:- use_module(library(http/html_write)).

servidor(Porta) :-
http_server(http_dispatch, [port(Porta)]).

:- http_handler(root(.), home , []).


/* html_requires está aqui */
:- use_module(library(http/html_head)).

/* serve_files_in_directory está aqui */
:- use_module(library(http/http_server_files)).

/* Localização dos diretórios no sistema de arquivos */
:- multifile user:file_search_path/2.

user:file_search_path(dir_css, 'css').
user:file_search_path(dir_js, 'js').

/* Liga as rotas aos respectivos diretórios */
:- http_handler(css(.),
serve_files_in_directory(dir_css), [prefix]).
:- http_handler(js(.),
serve_files_in_directory(dir_js), [prefix]).

/* Liga a rota ao tratador */
:- http_handler(root(.), home , []).
home(_Pedido) :-
reply_html_page(
    [ title('Bootstrap 5 básico')],
    [\pagina]).

pagina-->
    html([ \html_post(head,
        [ meta([name(viewport),
        content('width=device-width, initial-scale=1')])]),
        \html_root_attribute(lang,'pt-br'),
        \html_requires(css('estilo.css')),
        \html_requires(css('bootstrap.min.css')),
        h1('Bootstrap 5'),
        script([ src('js/bootstrap.bundle.min.js'),
        type('text/javascript')], [])
    ]).



/*
formapagamento(_Pedido) :-
     reply_html_page(bootstrap, 
         [title('Fromas de Pagamento')],
             [ form([action='/receptor', method='POST'],
                 [ p([], [ label([for=id_formapagamento],'ID Forma de Pagamento:'),
                     input([name=id_formapagamento, type=number]) ]),
                 p([], [ label([for=descr_formapagento],'Descriacao:'),
                     input([name=descr_formapagento, type=text]) ]),
                 p([], input([ name=submit, type=submit, value='Enviar'],
                             []))
             ])]). 

formapagamento(_Pedido):-
    reply_html_page( 
    bootstrap,
    [ title('Formas de Pagamentos')],
    [ div(class(container),
    form([ class(container),action='/receptor', method='POST'],
        [ \html_requires(css('estilo.css')),
            h2(class("my-5 text-center"),
                'Formas de Pagamento'),
            \campo(id_formapagamento, 'ID Forma de Pagamento', number),
            \campo(descr_formapagento, 'Descricao', text),
    
            p(button([ class('btn btn-primary'), type(submit)], 'Enviar')),
            \retorna_home ])]).
*/

