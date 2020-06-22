Pucxobot é um bot e site do Telegram para jogar os seguintes jogos:

- Golpe
- Carta de amor
- Pega em 6!
- Dado Zumbi
- Dedo duro
- Superluta
Você pode adicionar @blefarbot ao seu próprio grupo e jogar.

Construção
Para compilar o servidor, você primeiro precisa instalar libcurl, json-ce meson. No Fedora você pode instalá-los com o seguinte comando:

sudo dnf instala o json-c-devel libcurl-devel meson ninja-build

Em seguida, para criar o projeto, digite o seguinte:

mkdir build && cd build
meson ..
ninja

Antes de executá-lo, você precisa criar um arquivo de configuração em ~ / .pucxobot / conf.txt. Você pode executar o servidor como bot do Telegram, o site ou ambos ao mesmo tempo.

Telegram Bot
Para executá-lo como um bot do Telegram, você precisa obter uma chave de API em uma conversa com @BotFather no Telegram. Você pode inserí-lo no conf.txt com algo assim:

[bot]
apikey = 123456789: AAABBEUAEUIEAIUE_auieauieauie
botname = cardgamebot
language = pt

O idioma pode ser en, fr, pt-br ou eo. Você pode criar vários bots com um arquivo de configuração repetindo a seção [bot]. Isso é útil se você deseja ter vários bots em diferentes idiomas.

Para jogar, você pode adicionar o bot a um grupo e digitar /entrar. Ele apresentará a você uma escolha dos jogos disponíveis para jogar.

Você também pode digitar /ajuda para obter um resumo das regras do jogo.

Site
Para executar o programa como um site, adicione algo assim ao arquivo conf.txt:
[server]
address = 3648

Você pode alterar o número da porta ou o endereço de escuta ou deixar a linha de endereço totalmente para usar a porta padrão.

O servidor é apenas para executar o back-end do WebSocket e você ainda precisará de um servidor da Web real para servir os arquivos HTML e JavaScript. Os arquivos do site estão no diretório da web. Eles são primeiro filtrados por um script para gerar as diferentes traduções. Se você executar a instalação ninja, poderá encontrar todos os arquivos da Web prontos em <prefix>/share/web. O servidor pode lidar com vários idiomas simultaneamente, não sendo necessário configurá-lo.

Daemonize
Se você enviar -d para o programa, ele será desconectado do terminal e executado como um daemon. Por padrão, o Pucxobot imprime mensagens de log no terminal. No entanto, se for executado como um daemon, registrará em ~ /.pucxobot/log.txt. Você pode substituir esse diretório do arquivo de dados e o arquivo de log adicionando uma seção extra à configuração como esta:

[gebneral]
data_dir = /var/run/puxcobot-data
arquivo_de_log = /var/log/meu-super-arquivo-de-log
O programa precisa de acesso de gravação ao diretório de dados para armazenar seu estado.
