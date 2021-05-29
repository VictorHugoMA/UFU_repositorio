:- use_module(library(http/thread_httpd)).
:- use_module(library(http/http_dispatch)).
:- use_module(library(http/html_write)).

servidor(Porta) :-
http_server(http_dispatch, [port(Porta)]).

% Liga a rota ao tratador
:- http_handler(root(.), home , []).
:- http_handler(root(tesouraria), tesouraria , []).
:- http_handler(root(formapagamento), formapagamento , []).

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
    [ title('Controle Financeiro')],
    [ div(class(container),
        [ h1('Sistema de Informacao para Controle Financeiro de uma Microempresa'),
            nav(class(['nav', 'flex-column']),
                [ \link_tesouraria(1),
                  \link_formapagamento(1)])
                ])
    ]).

link_tesouraria(1) -->
    html(a([ class(['nav-link']),
        href('/tesouraria')],
        'Tesouraria')).
link_formapagamento(1) -->
    html(a([ class(['nav-link']),
        href('/formapagamento')],
        'Forma de Pagamento')).


tesouraria(_Pedido):-
    reply_html_page( 
    bootstrap,
    [ title('Tesouraria')],
    [ div(class(container),
        [ \html_requires(css('estilo.css')),
            h2(class("my-5 text-center"),
                'Tesouraria'),
            \campo(id_tesouraria, 'ID Tesouraria', number),
            \campo(id_empresa, 'ID Empresa', number),
            \campo(id_cliente, 'ID Cliente', number),
            \campo(id_planoContas, 'ID Plano de Contas', number),
            \campo(id_fornecedores, 'ID Fornecedores', number),
            \campo(formapagamento_tes, 'Formas de Pagamento', text),
            \campo(valor_tes, 'Valor', text),
            \campo(numero_tes, 'Numero', text),
            \campo(data_emissao_tes, 'Data de Emissao', date),
            \campo(data_venc_tes, 'Data de Vencimento', date),
            \campo(data_disp_tes, 'Data de Disponibilidade', date),
            
            p(button([ class('btn btn-primary'), type(submit)], 'Enviar')),
            \retorna_home ])]).


formapagamento(_Pedido):-
    reply_html_page( 
    bootstrap,
    [ title('Formas de Pagamentos')],
    [ div(class(container),
        [ \html_requires(css('estilo.css')),
            h2(class("my-5 text-center"),
                'Formas de Pagamento'),
            \campo(id_formapagamento, 'ID Forma de Pagamento', number),
            \campo(descr_formapagento, 'Descricao', text),
    
            p(button([ class('btn btn-primary'), type(submit)], 'Enviar')),
            \retorna_home ])]).

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