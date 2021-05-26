:- use_module(library(http/thread_httpd)).
:- use_module(library(http/http_dispatch)).
:- use_module(library(http/html_write)).

servidor(Porta) :-
http_server(http_dispatch, [port(Porta)]).

% Liga a rota ao tratador
:- http_handler(root(.), home , []).
:- http_handler(root(convidados), convidados , []).
:- http_handler(root(reservas), reservas , []).

/* html_requires está aqui */
:- use_module(library(http/html_head)).

/* serve_files_in_directory está aqui */
:- use_module(library(http/http_server_files)).

/* Localização dos diretórios no sistema de arquivos */
:- multifile user:file_search_path/2.

user:file_search_path(dir_css, 'C:/UFU_repositorio/ProLog/Trabalho/css').
user:file_search_path(dir_js, 'C:/UFU_repositorio/ProLog/Trabalho/js').

/* Liga as rotas aos respectivos diretórios */
:-http_handler(css(.), serve_files_in_directory(dir_css), [prefix]).
:-http_handler(js(.), serve_files_in_directory(dir_js), [prefix]).


:- multifile user:body//2.

user:body(bootstrap, Corpo) -->
    html(body([ \html_post(head,
        [ meta([name(viewport),
        content('width=device-width, initial-scale=1')])]),
        \html_root_attribute(lang,'pt-br'),
        \html_requires(css('bootstrap.min.css')),

        Corpo,

        script([ src('js/bootstrap.bundle.min.js'),
        type('text/javascript')], [])
    ])).



home(_Pedido) :-
    reply_html_page(
    bootstrap,
    [ title('Clubes Recreativos e Esportivos')],
    [ div(class(container),
        [ h1('Sistema de Gestao para Clubes Recreativos e Esportivos'),
            nav(class(['nav', 'flex-column']),
                [ \link_reservas(1),
                  \link_convidados(1)])
                ])
    ]).

link_reservas(1) -->
    html(a([ class(['nav-link']),
        href('/reservas')],
        'Reservas')).
link_convidados(1) -->
    html(a([ class(['nav-link']),
        href('/convidados')],
        'Convidados')).


:- ensure_loaded([reservas, convidados]).

retorna_home -->
    html(div(class(row),
        a([ class(['btn', 'btn-primary']), href('/')],
            'Voltar para o inicio'))).

campo(Nome, Rotulo, Tipo) -->
    html(div(class('mb-3'),
        [   label([for(Nome), class('form-label')], Rotulo),
            input([type(Tipo), class('form-control'),
                id(Nome), name(Nome)])
        ]
        )).