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

user:file_search_path(dir_css, 'C:/UFU_repositorio/ProLog/Trabalho/css').
user:file_search_path(dir_js, 'C:/UFU_repositorio/ProLog/Trabalho/js').

/* Liga as rotas aos respectivos diretórios */
:-http_handler(css(.), serve_files_in_directory(dir_css), [prefix]).
:-http_handler(js(.), serve_files_in_directory(dir_js), [prefix]).

% Liga a rota ao tratador
:- http_handler(root(.), home , []).
:- http_handler(root(tabela1), tabela1 , []).
:- http_handler(root(tabela2), tabela2 , []).
:- http_handler(root(tabela3), tabela3 , []).

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
    [ title('Clinica Dentaria')],
    [ div(class(container),
        [ h1('Sistema de Gestao para Clinica Dentaria'),
            nav(class(['nav', 'flex-column']),
                [ \link_tabela(1),
                  \link_tabela(2),
                  \link_tabela(3) ])
        ])
    ]).

link_tabela(N) -->
    html(a([ class(['nav-link']),
        href('/tabela~d' -N)],
        'Tabela ~d' -N)).


tabela1(_Pedido) :-
    reply_html_page(
    bootstrap,
    [ title('Exemplo 1')],
    [ div(class(container),
        [ \html_requires(css('estilo.css')),
            h2(class("my-5 text-center"),
                'Exemplo 1 com Bootstrap 5 e SWI-Prolog'),
            div(class("container my-5"),
                div(class(row),
                    [div(class('col-md-8'),
                        'Conteudo Principal'),
                    div(class('col-md-4'),
                        'Barra Lateral')])),
            \retorna_home ])]).

retorna_home -->
    html(div(class(row),
        a([ class(['btn', 'btn-primary']), href('/')],
            'Voltar para o inicio'))).

tabela2(_Pedido) :-
    reply_html_page(
        bootstrap,
        [ title('Exemplo 2')],
        [ div(class(container),
            [ \html_requires(css('estilo.css')),
                h2(class("my-5 text-center"),
                    'Exemplo 2 com Bootstrap 5 e SWI-Prolog'),
                div(class('container my-5'),
                    div(class(row),
                        [div(class('col-md-8 text-center'),
                            ['Cabecalho',
                        div(class="row text-center",
                            [div(class="col-md-6",
                                [ 'Artigo 1', p('Paragrafo 1.')]),
                            div(class="col-md-6",
                                [ 'Artigo 2', p('Paragrafo 2.')]),
                            span('Rodape')])]),
                    div(class('col-md-4'),
                        'Barra Lateral')])),
                \retorna_home ])]).

tabela3(_Pedido) :-
    reply_html_page(bootstrap, [title('Formulario')],
    \retorna_home),
    format('<form>
  <div class="form-group">
    <label for="exampleInputEmail1">Endereco de email</label>
    <input type="email" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" placeholder="Email">
    <br>
  </div>
  <div class="form-group">
    <label for="exampleInputPassword1">Senha</label>
    <input type="password" class="form-control" id="exampleInputPassword1" placeholder="Senha">
  </div>
  <br>
  <button type="submit" class="btn btn-primary">Enviar</button>
</form>').
